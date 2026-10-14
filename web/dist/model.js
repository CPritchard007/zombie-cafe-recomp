import {recipeUnlocked,validateFridge} from './fridge.js';
import {validateSurfaces} from './surfaces.js';
import {validateSeasonalEvent} from './seasonal-events.js';
import {addXp,levelOf} from './progression.js';
import {newStaffState,validateStaff} from './staff.js';
import {STARTING_SIZE,STARTING_FURNITURE} from './starting-layout.js';
import {advanceVisitors,newVisitorState,migrateChairDirections,validateVisitors,chairTable} from './visitors.js';
export const SAVE_KEY='zombie-cafe.web.v1';
import {GRID,cafeSize,ENTRANCE,DOORSTEP,entrance} from './world.js';
export {GRID,cafeSize,ENTRANCE,DOORSTEP} from './world.js';
const neighbors=({x,y})=>[{x:x+1,y},{x:x-1,y},{x,y:y+1},{x,y:y-1}];
export function entranceAccess(s){
 const occupied=new Set(s.furniture.map(f=>f.x+','+f.y)),reachable=new Set(),queue=[entrance(s)];
 while(queue.length){const p=queue.shift(),key=p.x+','+p.y;if(p.x<0||p.y<0||p.x>=cafeSize(s).width||p.y>=cafeSize(s).height||occupied.has(key)||reachable.has(key))continue;reachable.add(key);queue.push(...neighbors(p));}
 const accessible=f=>neighbors(f).some(p=>reachable.has(p.x+','+p.y));
 const chairs=s.furniture.filter(f=>f.kind==='chair'),counters=s.furniture.filter(f=>f.kind==='counter');
 const usableChairs=chairs.filter(f=>accessible(f)&&chairTable(s,f));
 const blocked=chairs.concat(counters,s.furniture.filter(f=>f.kind==='sink')).filter(f=>!accessible(f));
 return {reachable,blocked,doorBlocked:!reachable.size,canServe:reachable.size>0&&counters.some(accessible)&&usableChairs.length>0};
}
export function setCafeOpen(s,open,now=Date.now()){
 reconcile(s,now);s.doorOpen=Boolean(open);s.saleProgress=0;
 return {ok:true,message:open?'Café opened. Keep the doorway and customer paths clear.':'Café closed to new customers. Cooking continues.'};
}
export const CATALOG=[
 {id:'table',name:'Cherry diner table',sprite:278,cost:120,kind:'table',description:'A little table. A lot of appetite.'},
 {id:'chair',name:'Cherry diner chair',sprite:363,cost:45,kind:'chair',description:'Take a seat. Stay a while.'},
 {id:'plant',name:'Something still alive',sprite:331,cost:65,kind:'plant',description:'A fresh touch for the undead.'},
 {id:'stove',name:'Stainless stove',sprite:343,cost:200,kind:'stove',description:'One more batch on the go.'},
 {id:'counter',name:'Serving counter',sprite:334,cost:95,kind:'counter',description:'Give your kitchen a little polish.'},
 {id:'turquoise',name:'Mint diner table',sprite:107,cost:140,kind:'table',description:'Fresh color. Questionable cuisine.'},
 {id:'lamp',name:'Night-shift lamp',sprite:344,cost:80,kind:'lamp',description:'Keep a light on for late arrivals.'},
 {id:'fridge',name:'Steel refrigerator',sprite:375,cost:180,kind:'fridge',description:'For ingredients best left unidentified.'}
];
export function configureOriginalCatalog(records){
 const kinds={0:'plant',1:'stove',2:'counter',3:'table',4:'chair',5:'wall',6:'wallArt',7:'floor',8:'fridge',9:'divider',11:'sink',12:'expansion'};
 for(const r of records){
  const id='original-'+r.id;if(CATALOG.some(c=>c.id===id))continue;
  CATALOG.push({id,originalId:r.id,name:r.name,sprite:'o'+r.sheet+'-'+r.sprites[0],sprites:r.sprites.map(n=>'o'+r.sheet+'-'+n),width:r.width,height:r.depth,cost:r.price,premium:r.premium,kind:kinds[r.type]||'special',level:Math.max(1,r.field_28),description:r.description,type:r.type,original:true});
 }
}
// Expansion offers come from the recovered furniture catalog. Never shrink either edge.
export function expansionStatus(s,item){
 const size=cafeSize(s),offers=CATALOG.filter(c=>c.kind==='expansion'&&!c.premium&&c.width>=size.width&&c.height>=size.height&&(c.width>size.width||c.height>size.height)).sort((a,b)=>a.width*a.height-b.width*b.height);
 if(!item||item.kind!=='expansion'||item.premium)return {ok:false,message:'Choose a coin expansion.'};
 if(item.width<=size.width&&item.height<=size.height)return {ok:false,message:'Already expanded'};
 if(offers[0]?.id!==item.id)return {ok:false,message:'Buy the next expansion first'};
 if(item.level>levelOf(s))return {ok:false,message:'Locked'};
 if(s.coins<item.cost)return {ok:false,message:'Need '+item.cost.toLocaleString()+' coins'};
 return {ok:true,message:'Expand'};
}
export function expandCafe(s,itemId){
 const item=CATALOG.find(c=>c.id===itemId),status=expansionStatus(s,item);if(!status.ok)return status;
 s.coins-=item.cost;s.size={width:item.width,height:item.height};
 return {ok:true,message:'Café expanded to '+item.width+'×'+item.height+'!'};
}
// Original orientation slots are SE, SW, NW, NE; matching pairs mirror their artwork.
function rotationSprites(f){
 const item=CATALOG.find(c=>c.id===(f.catalogId||f.id)&&c.sprites)||CATALOG.find(c=>c.original&&c.kind===f.kind&&c.sprites.includes(typeof f.sprite==='number'?'o0-'+f.sprite:f.sprite));
 return item?.sprites;
}
export function furnitureRotation(f){
 const sprites=rotationSprites(f);
 const count=f.kind==='chair'?4:!sprites?2:new Set(sprites).size===1?1:sprites.slice(2).every(s=>s.endsWith('-0'))?2:4;
 const slot=f.kind==='chair'?[0,2,1,3][f.direction??3]:(f.direction??(f.flip?1:0))%count;
 return {count,slot,label:count===1?'Fixed orientation':`${count} directions · ${slot+1} of ${count}`};
}
export function furniturePose(f){
 const {slot}=furnitureRotation(f),sprites=rotationSprites(f);
 return sprites?{sprite:sprites[slot],flip:slot%2===1&&sprites[slot]===sprites[slot-1]}:{sprite:f.sprite,flip:f.flip};
}
export function rotateFurniture(f){
 const {count,slot}=furnitureRotation(f);if(count===1)return {ok:false,message:'This item has a fixed orientation.'};
 const next=(slot+1)%count;f.direction=f.kind==='chair'?[0,2,1,3][next]:next;
 f.flip=furniturePose(f).flip;
 return {ok:true,message:furnitureRotation(f).label};
}
export function furnitureImage(item){return typeof item.sprite==='string'?'assets/original/furniture/'+item.sprite.slice(1)+'.png':'assets/furniture/'+item.sprite+'.png';}
export const GOALS=[
 {id:'first-batch',title:'Something smells… delicious',description:'Serve your first cooked batch.',target:1,stat:'cooked',coins:30,xp:5},
 {id:'hungry-dozen',title:'A dozen happy appetites',description:'Sell 12 portions to your guests.',target:12,stat:'served',coins:60,xp:10},
 {id:'make-home',title:'Make yourself at home',description:'Place one new piece of furniture.',target:1,stat:'decorated',coins:30,xp:5}
];
export {levelOf} from './progression.js';
export function initialState(now=Date.now()){
 const furniture=STARTING_FURNITURE.map(([catalogId,kind,sprite,x,y],i)=>({id:'f'+i,catalogId:'original-'+catalogId,kind,sprite:'o0-'+sprite,x,y,flip:false,...(kind==='chair'?{direction:0}:{})}));
 return {version:1,layoutVersion:1,size:{...STARTING_SIZE},originalSurfaces:true,visitors:newVisitorState(),staff:newStaffState(),doorOpen:true,name:'The Midnight Diner',coins:650,toxin:0,xp:0,speed:1,floor:'o0-45',furniture,stoves:[{id:'f0',job:null}],stock:[],lastTick:now,saleProgress:0,stats:{cooked:0,served:0,decorated:0,earned:0},claimed:[],muted:true,nextId:100};
}
export function applyStartingLayout(s){
 // A layout reset cancels staff routes; return carried portions to saved inventory.
 for(const z of s.staff?.people||[]){if(z.carrying)s.stock.push({...z.carrying,quantity:1});if(z.batch){s.stock.push({recipeId:z.batch.recipeId,price:z.batch.price,quantity:z.batch.quantity});addXp(s,z.batch.xp);s.stats.cooked++;}}
 delete s.pendingInfection;
 const preset=initialState();
 if(s.staff?.people?.length)preset.staff.people=s.staff.people.map(z=>({...newStaffState().people[0],id:z.id,completed:z.completed,...(z.zombieForm?{zombieForm:z.zombieForm,customerDataId:z.customerDataId}:{})}));
 for(const key of ['layoutVersion','size','originalSurfaces','floor','furniture','stoves','visitors','staff'])s[key]=preset[key];
 delete s.floorTiles;delete s.wallTiles;delete s.wallDecor;
 delete s.door;delete s.wallSprite;delete s.floorChanged;delete s.wallChanged;
 s.lastTick=Date.now();return {ok:true,message:'Original starting layout restored. Your previous café is backed up on this device.'};
}

export function reconcile(s,now=Date.now()){
 const elapsed=Math.max(0,Math.min(8*3600,(now-s.lastTick)/1000));s.lastTick=Math.max(s.lastTick,now);
 const seconds=elapsed*s.speed;

 const beforeSold=s.stats.served,beforeEarned=s.stats.earned;
 advanceVisitors(s,seconds);s.saleProgress=0;
 const sold=s.stats.served-beforeSold,earned=s.stats.earned-beforeEarned;
 return {sold,earned,elapsed};
}
export const nextGameSpeed=speed=>(speed+1)%6;
export function setGameSpeed(s,speed,now=Date.now()){
 if(!Number.isInteger(speed)||speed<0||speed>5)return {ok:false,message:'Choose a speed from 0× to 5×.'};
 reconcile(s,now);s.speed=speed;return {ok:true,message:speed===0?'Game paused.':'Game speed: '+speed+'× real time.'};
}
export function startCooking(s,stoveId,recipe,now=Date.now()){
 reconcile(s,now);const stove=s.stoves.find(x=>x.id===stoveId);
 if(!stove)return {ok:false,message:'Choose a cooking station.'};
 if(stove.job)return {ok:false,message:'This stove already has a batch on it.'};
 if(!recipeUnlocked(s,recipe))return {ok:false,message:'Reach level '+recipe.field_0x16+' to unlock this recipe.'};
 if(s.coins<recipe.baseCost)return {ok:false,message:'Not enough coins for these ingredients.'};
 s.coins-=recipe.baseCost;const total=recipe.cookMinutes*60;stove.job={recipeId:recipe.id,remaining:total,total,output:recipeOutput(recipe)};
 return {ok:true,message:recipe.name+' is on the stove.'};
}
export function recipeOutput(r){return {recipeId:r.id,quantity:r.baseServings,price:r.baseSellPrice,xp:r.baseXp};}
export function serve(s,stoveId,recipes,now=Date.now()){
 const stove=s.stoves.find(x=>x.id===stoveId);
 if(stove?.job){const r=recipes.find(r=>r.id===stove.job.recipeId);if(r)stove.job.output=recipeOutput(r);}
 reconcile(s,now);
 if(!stove?.job||stove.job.remaining>0)return {ok:false,message:'That batch is still cooking or already collected.'};
 if(stove.job.transferRequested)return {ok:false,message:'A zombie will collect this batch when an empty counter is available.'};
 if(!stove.job.output)return {ok:false,message:'Recipe unavailable.'};
 stove.job.transferRequested=true;
 return {ok:true,message:'Batch ready. A zombie will carry it to an empty counter.'};
}
export function canPlace(s,x,y,ignoreId){return Number.isInteger(x)&&Number.isInteger(y)&&x>=0&&x<cafeSize(s).width&&y>=0&&y<cafeSize(s).height&&!s.furniture.some(f=>f.id!==ignoreId&&f.x===x&&f.y===y);}
export function place(s,itemId,x,y){
 const item=CATALOG.find(c=>c.id===itemId);
 if(!item)return {ok:false,message:'Choose some furniture first.'};
 if(item.original&&item.level>levelOf(s))return {ok:false,message:'Unlocks at level '+item.level+'.'};
 if(item.kind==='expansion')return expandCafe(s,item.id);
 if(item.premium)return {ok:false,message:'Toxin purchases are not yet supported offline.'};
 if(['special','wallArt'].includes(item.kind))return {ok:false,message:'This item’s original behavior is not yet implemented.'};
 if(!canPlace(s,x,y)&&!['floor','wall'].includes(item.kind))return {ok:false,message:'Choose an empty tile inside the café.'};
 if(s.coins<item.cost)return {ok:false,message:'You need '+item.cost+' coins for this piece.'};
 if(item.kind==='stove' && s.stoves.length>=6)return {ok:false,message:'Your kitchen can hold up to six stoves.'};
 if(item.kind==='floor'||item.kind==='wall'){s.coins-=item.cost;s.stats.decorated++;if(item.kind==='floor'){s.floor=item.sprite;s.floorChanged=true;}else {s.wallSprite=item.sprite;s.wallChanged=true;}return {ok:true,message:item.name+' applied.'};}
 const f={catalogId:item.id,id:'f'+s.nextId++,kind:item.kind,sprite:item.sprite,x,y,flip:false};s.furniture.push(f);migrateChairDirections(s);s.coins-=item.cost;s.stats.decorated++;
 if(item.kind==='stove')s.stoves.push({id:f.id,job:null});return {ok:true,message:item.name+' placed. Looking good!'};
}
export function move(s,id,x,y){const f=s.furniture.find(f=>f.id===id);if(!f||!canPlace(s,x,y,id))return {ok:false,message:'That tile is occupied.'};f.x=x;f.y=y;return {ok:true,message:'Furniture moved.'};}
export function claim(s,id){const g=GOALS.find(g=>g.id===id);if(!g||s.claimed.includes(id)||s.stats[g.stat]<g.target)return {ok:false,message:'Complete this goal first.'};s.claimed.push(id);s.coins+=g.coins;addXp(s,g.xp);return {ok:true,message:'Goal complete! +'+g.coins+' coins and +'+g.xp+' XP.'};}
export function validateSave(value,recipes){
 if(!value||value.version!==1)throw Error('This is not a compatible café save.');
 const s=structuredClone(value),finite=(n,min,max)=>Number.isFinite(n)&&n>=min&&n<=max;
 validateSeasonalEvent(s.seasonalEvent);
 validateFridge(s,recipes);
 if(s.door!==undefined&&(!s.door||!['left','right'].includes(s.door.side)||!Number.isInteger(s.door.index)||s.door.index<0||s.door.index>=(s.door.side==='left'?cafeSize(s).height:cafeSize(s).width)))throw Error('Invalid café door.');
 validateSurfaces(s,CATALOG);
 if(s.infectionTutorialComplete!==undefined&&typeof s.infectionTutorialComplete!=='boolean')throw Error('Invalid infection tutorial state.');
 if(s.pendingInfection&&(!Number.isInteger(s.pendingInfection.guestId)||!s.visitors?.people?.some(g=>g.id===s.pendingInfection.guestId)||!s.staff?.people?.some(z=>z.id===s.pendingInfection.staffId)))throw Error('Invalid pending infection.');
 if(s.speed===12)s.speed=5; // Migrate the former quick-shift setting to the new maximum.
 if(!finite(s.coins,0,1e9)||!finite(s.xp,0,1e8)||![0,1,2,3,4,5].includes(s.speed)||!([2,5,29,'o0-45'].includes(s.floor)||CATALOG.some(c=>c.kind==='floor'&&c.sprite===s.floor))||!finite(s.lastTick,0,Date.now()+86400000)||!finite(s.saleProgress,0,15)||!Number.isInteger(s.nextId)||s.nextId<100)throw Error('Invalid café values.');
 if(s.size!==undefined&&(!Number.isInteger(s.size.width)||!Number.isInteger(s.size.height)||s.size.width<4||s.size.height<4||s.size.width>16||s.size.height>15))throw Error('Invalid café dimensions.');
 if(s.originalSurfaces!==undefined&&typeof s.originalSurfaces!=='boolean')throw Error('Invalid café surfaces.');
 if(s.doorOpen===undefined)s.doorOpen=true;
 if(typeof s.doorOpen!=='boolean')throw Error('Invalid door state.');
 if(typeof s.name!=='string'||s.name.length>40||typeof s.muted!=='boolean')throw Error('Invalid café settings.');
 if(!Array.isArray(s.furniture)||s.furniture.length>cafeSize(s).width*cafeSize(s).height||!Array.isArray(s.stoves)||s.stoves.length>6||!s.stoves.length||!Array.isArray(s.stock)||s.stock.length>10000||!Array.isArray(s.claimed))throw Error('Invalid café layout.');
 if(s.wallSprite!==undefined&&!CATALOG.some(c=>c.kind==='wall'&&c.sprite===s.wallSprite))throw Error('Invalid wall.');
 if(s.toxin!==undefined&&!finite(s.toxin,0,1e9))throw Error('Invalid toxin balance.');
 const positions=new Set(),ids=new Set(),sprites=new Set([375,343,334,186,92,278,363,107,275,331,344,330,...STARTING_FURNITURE.map(f=>'o0-'+f[2]),...CATALOG.map(c=>c.sprite)]);
 for(const f of s.furniture){const key=f.x+','+f.y;if(typeof f.id!=='string'||!/^f[0-9]+$/.test(f.id)||ids.has(f.id)||positions.has(key)||!sprites.has(f.sprite)||!['stove','table','chair','fridge','counter','plant','lamp','divider','sink'].includes(f.kind)||!Number.isInteger(f.x)||!Number.isInteger(f.y)||f.x<0||f.y<0||f.x>=cafeSize(s).width||f.y>=cafeSize(s).height||typeof f.flip!=='boolean'||(f.direction!==undefined&&(!Number.isInteger(f.direction)||f.direction<0||f.direction>3)))throw Error('Invalid furniture.');positions.add(key);ids.add(f.id);}
 if(s.nextId<=Math.max(...s.furniture.map(f=>Number(f.id.slice(1)))))throw Error('Invalid next furniture identifier.');
 const stoveIds=new Set();
 for(const stove of s.stoves){if(stoveIds.has(stove.id)||!s.furniture.some(f=>f.id===stove.id&&f.kind==='stove'))throw Error('Invalid stove.');stoveIds.add(stove.id);if(stove.job){const r=recipes.find(r=>r.id===stove.job.recipeId);if(!r||stove.job.total!==r.cookMinutes*60||!finite(stove.job.remaining,0,stove.job.total))throw Error('Invalid cooking job.');stove.job.output=recipeOutput(r);if(stove.job.transferRequested!==undefined&&typeof stove.job.transferRequested!=='boolean')throw Error('Invalid batch transfer.');}}
 if(s.furniture.filter(f=>f.kind==='stove').length!==s.stoves.length)throw Error('Missing stove state.');
 for(const batch of s.stock){const r=recipes.find(r=>r.id===batch.recipeId);if(!r||!Number.isInteger(batch.quantity)||batch.quantity<=0||batch.quantity>r.baseServings||batch.price!==r.baseSellPrice)throw Error('Invalid serving batch.');if(batch.counterId!==undefined&&(typeof batch.counterId!=='string'||!/^f[0-9]+$/.test(batch.counterId)))throw Error('Invalid serving counter.');}
 for(const name of ['cooked','served','decorated','earned'])if(!Number.isInteger(s.stats?.[name])||!finite(s.stats[name],0,1e9))throw Error('Invalid café statistics.');
 if(new Set(s.claimed).size!==s.claimed.length||s.claimed.some(id=>!GOALS.some(g=>g.id===id)))throw Error('Invalid goals.');
 validateVisitors(s,recipes);validateStaff(s,recipes);
 return s;
}
