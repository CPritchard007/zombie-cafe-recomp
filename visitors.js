import {advanceInfection} from './infection.js';
import {chooseCustomer} from './customer-selection.js';
import {CUSTOMER_RULES} from './customer-rules.js';
import {HUMAN_FORMS} from './human-forms.js';
import {ensureStaff,advanceStaff} from './staff.js';
import {GRID,cafeSize,entrance,doorstep} from './world.js';
import {facingForMovement} from './characters.js';
// Millisecond constants decoded by scripts/export_visitor_rules.py (reports/visitor-constants.json).
export const VISITOR_RULES=Object.freeze({waitForFood:60,foodPause:2,eatTime:30,minInterval:4.5,maxInterval:18,intervalVariance:1,minVisit:211,maxVisit:238,entryPause:1,entryVariance:.8,ratingGain:.005,ratingLoss:.006});
const STEP=.25,SPEED=.9,adj=p=>[{x:p.x+1,y:p.y},{x:p.x-1,y:p.y},{x:p.x,y:p.y+1},{x:p.x,y:p.y-1}],key=p=>p.x+','+p.y;
// Continue the pavement well beyond the café/view instead of spawning at its corners.
export const WALKWAY_START=-24,WALKWAY_END=GRID+24;
const onSidewalk=p=>(p.y===-1&&p.x>=WALKWAY_START&&p.x<=WALKWAY_END)||(p.x===-1&&p.y>=-1&&p.y<=WALKWAY_END);
const inside=(p,s)=>p.x>=0&&p.y>=0&&p.x<cafeSize(s).width&&p.y<cafeSize(s).height;
const at=(a,b)=>Math.abs(a.x-b.x)+Math.abs(a.y-b.y)<1e-7;
export function newVisitorState(){return {version:1,people:[],nextId:1,seed:17391,spawnIn:1,remainder:0,rating:.5,dirtyTables:[],arrived:0,happy:0,unhappy:0};}
function random(v){v.seed=(Math.imul(v.seed,1664525)+1013904223)>>>0;return v.seed/4294967296;}
export function visitorPath(s,from,to,seatId=null){
 const start={x:Math.round(from.x),y:Math.round(from.y)},blocked=new Set(s.furniture.filter(f=>f.id!==seatId).map(key));
 const queue=[[start]],seen=new Set([key(start)]);
 for(let i=0;i<queue.length;i++){const path=queue[i],p=path.at(-1);if(at(p,to))return path.slice(1);
  for(const n of adj(p)){
   if((!inside(n,s)&&!onSidewalk(n))||blocked.has(key(n))||seen.has(key(n)))continue;
   if(inside(p,s)!==inside(n,s)&&!(at(p,entrance(s))&&at(n,doorstep(s))||at(p,doorstep(s))&&at(n,entrance(s))))continue;
   if(!inside(p,s)&&inside(n,s)&&s.doorOpen===false)continue;
   seen.add(key(n));queue.push([...path,n]);
  }
 }
 return null;
}
// Legacy chairs had only mirroring; infer their initial facing once, then persist it.
export function migrateChairDirections(s){
 for(const c of s.furniture.filter(f=>f.kind==='chair'&&f.direction===undefined)){
  const table=s.furniture.find(t=>t.kind==='table'&&Math.abs(t.x-c.x)+Math.abs(t.y-c.y)===1);
  c.direction=table?adj(c).findIndex(p=>at(p,table)):3;
 }
}
export function chairTable(s,c){return s.furniture.find(t=>t.kind==='table'&&at(t,adj(c)[c.direction??3]));}
function route(s,g,to,seatId=null){const path=visitorPath(s,g,to,seatId);if(path===null)return false;g.path=path;return true;}
function release(g){g.chairId=null;g.tableId=null;}
function leave(s,g,reason){
 if(reason){g.message=reason;s.visitors.unhappy++;s.visitors.rating=Math.max(0,s.visitors.rating-VISITOR_RULES.ratingLoss);}
 release(g);g.phase='leaving';g.timer=0;g.path=[];route(s,g,{x:g.exitX,y:-1});
}
function seats(s,g){
 const reserved=new Set(s.visitors.people.filter(p=>p.id!==g.id&&p.tableId).map(p=>p.tableId));
 return s.furniture.filter(c=>c.kind==='chair').map(c=>({c,t:chairTable(s,c)})).filter(({c,t})=>t&&!reserved.has(t.id)&&!s.visitors.dirtyTables.some(d=>d.tableId===t.id))
 .map(({c,t})=>({c,t,path:visitorPath(s,g,c,c.id)})).filter(v=>v.path!==null).sort((a,b)=>a.path.length-b.path.length);
}
function moveAlong(s,g,seconds){
 let distance=SPEED*seconds;
 while(g.path.length&&distance>0){const p=g.path[0];
  if(s.furniture.some(f=>at(f,p)&&f.id!==g.chairId)||!inside(g,s)&&inside(p,s)&&s.doorOpen===false){g.path=[];return false;}
  const dx=p.x-g.x,dy=p.y-g.y,length=Math.hypot(dx,dy);Object.assign(g,facingForMovement(dx,dy,g));
  if(length<=distance){g.x=p.x;g.y=p.y;g.path.shift();distance-=length;}else{g.x+=dx/length*distance;g.y+=dy/length*distance;distance=0;}
  renderStep.get(s.visitors)?.get(g.id)?.points.push({x:g.x,y:g.y});
 }
 return true;
}
function spawn(s){
 const v=s.visitors,r=VISITOR_RULES,side=random(v)<.5?WALKWAY_START:WALKWAY_END;
 v.spawnIn=r.maxInterval+(r.minInterval-r.maxInterval)*v.rating+(random(v)*2-1)*r.intervalVariance;
 if(v.people.length>=32)return;
 const diner=s.doorOpen!==false&&random(v)*256<r.minVisit+(r.maxVisit-r.minVisit)*v.rating;
 const appearance=chooseCustomer(1+Math.floor(s.xp/20),v.rating,random(v),s.seasonalEvent);
 const g={id:v.nextId++,x:side,y:-1,variant:appearance.variant,customerDataId:appearance.id,phase:diner?'approaching':'passing',timer:0,path:[],chairId:null,tableId:null,meal:null,exitX:side===WALKWAY_START?WALKWAY_END:WALKWAY_START,t:0,north:false,flip:false,message:''};
 v.people.push(g);route(s,g,diner?doorstep(s):{x:g.exitX,y:-1});
}
function step(s){
 for(const stove of s.stoves)if(stove.job)stove.job.remaining=Math.max(0,stove.job.remaining-STEP);
 const v=s.visitors,r=VISITOR_RULES;v.spawnIn-=STEP;if(v.spawnIn<=0)spawn(s);
 v.dirtyTables=v.dirtyTables.filter(d=>s.furniture.some(f=>f.id===d.tableId));
 for(const g of v.people){
  g.t+=STEP;g.timer=Math.max(0,g.timer-STEP);
  if(g.chairId){const c=s.furniture.find(f=>f.id===g.chairId),t=c&&chairTable(s,c);if(!c||!t||t.id!==g.tableId||(['waiting','served','eating'].includes(g.phase)&&!at(c,g))){leave(s,g,'Seat moved');}}
  if(g.phase==='approaching'&&s.doorOpen===false){g.phase='passing';route(s,g,{x:g.exitX,y:-1});}
  if(g.path.length&&!moveAlong(s,g,STEP)){
   if(['approaching','entering','seating'].includes(g.phase)){leave(s,g,s.doorOpen===false?null:'Path blocked');}
  }
  if(g.path.length)continue;
  switch(g.phase){
   case 'passing':if(at(g,{x:g.exitX,y:-1}))g.phase='gone';else route(s,g,{x:g.exitX,y:-1});break;
   case 'approaching':
    if(route(s,g,entrance(s))){g.phase='entering';}else leave(s,g,'Door blocked');break;
   case 'entering':g.phase='entryPause';g.timer=r.entryPause+(random(v)*2-1)*r.entryVariance;v.arrived++;break;
   case 'entryPause':if(!g.timer){const seat=seats(s,g)[0];if(!seat){leave(s,g,'No seat');break;}g.chairId=seat.c.id;g.tableId=seat.t.id;g.path=seat.path;g.phase='seating';}break;
   case 'seating':{const c=s.furniture.find(f=>f.id===g.chairId),t=c&&chairTable(s,c);if(!c||!at(c,g)){leave(s,g,'Path blocked');break;}Object.assign(g,facingForMovement(t.x-c.x,t.y-c.y,g));g.phase='waiting';g.timer=r.waitForFood;break;}
   case 'waiting':
    if(!g.timer)leave(s,g,s.stock.length?'No service':'No food');break;
   case 'served':if(!g.timer){g.phase='eating';g.timer=r.eatTime;}break;
   case 'eating':if(!g.timer){
    const price=g.meal.price;s.coins+=price;s.stats.served++;s.stats.earned+=price;v.happy++;v.rating=Math.min(1,v.rating+r.ratingGain);
    v.dirtyTables.push({tableId:g.tableId,remaining:5});g.meal=null;g.message='+'+price;leave(s,g,null);
   }break;
   case 'leaving':if(at(g,{x:g.exitX,y:-1}))g.phase='gone';else if(!g.timer){route(s,g,{x:g.exitX,y:-1});g.timer=1;}break;
  }
 }
 advanceInfection(s,visitorPath);
 advanceStaff(s,STEP,visitorPath,z=>renderStep.get(v)?.get(z.id)?.points.push({x:z.x,y:z.y}));
 v.people=v.people.filter(g=>g.phase!=='gone');
}
// Render one fixed step behind the simulation. Transient snapshots never alter saves.
const renderHistory=new WeakMap(),renderStep=new WeakMap();
export function visitorRenderPose(visitors,g){
 const previous=renderHistory.get(visitors)?.get(g.id);
 if(!previous)return {...g,moving:g.path.length>0};
 const points=previous.points,alpha=Math.min(1,visitors.remainder/STEP);
 const lengths=points.slice(1).map((p,i)=>Math.hypot(p.x-points[i].x,p.y-points[i].y));
 const distance=lengths.reduce((sum,n)=>sum+n,0),moving=distance>1e-8;
 let remaining=distance*alpha,x=previous.x,y=previous.y,facing={};
 for(let i=0;i<lengths.length;i++){
  const a=points[i],b=points[i+1],length=lengths[i];if(!length)continue;
  const fraction=Math.min(1,remaining/length);x=a.x+(b.x-a.x)*fraction;y=a.y+(b.y-a.y)*fraction;
  facing=facingForMovement(b.x-a.x,b.y-a.y,g);remaining-=length;if(remaining<1e-9)break;
 }
 return {...g,x:moving?x:g.x,y:moving?y:g.y,t:Math.max(0,g.t-STEP+visitors.remainder),moving,
  ...facing,phase:moving?'walking':g.phase};
}
export function advanceVisitors(s,seconds){
 if(!s.visitors)s.visitors=newVisitorState();migrateChairDirections(s);
 ensureStaff(s);
 const v=s.visitors;v.remainder+=seconds;
 const steps=Math.floor((v.remainder+1e-9)/STEP);v.remainder=Math.max(0,v.remainder-steps*STEP);
 for(let i=0;i<steps;i++){
  // Only the last pair is needed, even after a long offline catch-up.
  if(i===steps-1){const snapshots=new Map([...v.people,...s.staff.people].map(g=>[g.id,{x:g.x,y:g.y,points:[{x:g.x,y:g.y}]}]));renderHistory.set(v,snapshots);renderStep.set(v,snapshots);}
  try{step(s);}finally{renderStep.delete(v);}
 }
}
export function validateVisitors(s,recipes){
 if(s.visitors===undefined)s.visitors=newVisitorState();migrateChairDirections(s);
 const v=s.visitors,num=(n,a,b)=>Number.isFinite(n)&&n>=a&&n<=b,int=(n,a,b)=>Number.isInteger(n)&&num(n,a,b),fail=()=>{throw Error('Invalid visitor state.');};
 if(!v||v.version!==1||!int(v.nextId,1,1e9)||!int(v.seed,0,4294967295)||!num(v.spawnIn,-.25,20)||!num(v.remainder,0,.25)||!num(v.rating,0,1)||!Array.isArray(v.people)||v.people.length>32||!Array.isArray(v.dirtyTables)||v.dirtyTables.length>cafeSize(s).width*cafeSize(s).height)fail();
 for(const k of ['arrived','happy','unhappy'])if(!int(v[k],0,1e9))fail();
 const ids=new Set(),tables=new Set(),phases=['approaching','passing','entering','entryPause','seating','waiting','served','eating','leaving'];
 for(const g of v.people){
  if(!int(g.id,1,v.nextId-1)||ids.has(g.id)||!num(g.x,WALKWAY_START,WALKWAY_END)||!num(g.y,-1,WALKWAY_END)||!int(g.variant,0,HUMAN_FORMS.length-1)||!phases.includes(g.phase)||!num(g.timer,0,60)||!num(g.t,0,1e10)||![WALKWAY_START,WALKWAY_END,-1,GRID].includes(g.exitX)||typeof g.north!=='boolean'||typeof g.flip!=='boolean'||typeof g.message!=='string'||g.message.length>60||!Array.isArray(g.path)||g.path.length>cafeSize(s).width*cafeSize(s).height+64)fail();ids.add(g.id);
  // Repair appearances from the brief unrestricted visitor build only.
  if(g.customerDataId===undefined&&g.variant>2){const appearance=chooseCustomer(1+Math.floor(s.xp/20),v.rating,((Math.imul(g.id,2654435761)>>>0)+.5)/4294967296);g.variant=appearance.variant;g.customerDataId=appearance.id;}
  if(g.customerDataId!==undefined&&(!Number.isInteger(g.customerDataId)||CUSTOMER_RULES[g.customerDataId]?.variant!==g.variant))fail();
  if(!inside(g,s)&&!onSidewalk(g)&&!(g.x>=-1&&g.x<=0&&g.y===doorstep(s).y&&s.door?.side==='left')&&!(g.y>=-1&&g.y<=0&&g.x===doorstep(s).x&&s.door?.side!=='left'))fail();
  // Keep legacy visitors in place, but send their eventual exits down the extended path.
  if(g.exitX===-1)g.exitX=WALKWAY_START;else if(g.exitX===GRID)g.exitX=WALKWAY_END;
  for(const p of g.path)if(!int(p.x,WALKWAY_START,WALKWAY_END)||!int(p.y,-1,WALKWAY_END)||(!inside(p,s)&&!onSidewalk(p)))fail();
  if(g.chairId!==null&&(!s.furniture.some(f=>f.id===g.chairId&&f.kind==='chair')||!s.furniture.some(f=>f.id===g.tableId&&f.kind==='table')||tables.has(g.tableId)))fail();
  if(g.tableId)tables.add(g.tableId);
  if(['seating','waiting','served','eating'].includes(g.phase)&&!g.chairId)fail();
  if(['served','eating'].includes(g.phase)&&!g.meal)fail();
  if(g.meal){const recipe=recipes.find(r=>r.id===g.meal.recipeId);if(!recipe||recipe.baseSellPrice!==g.meal.price)fail();}
 }
 for(const d of v.dirtyTables)if(typeof d.tableId!=='string'||!num(d.remaining,0,5))fail();
}
