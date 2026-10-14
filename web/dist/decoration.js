import {CATALOG,move,levelOf} from './model.js';
import {wallDecor,canPlaceWallDecor,validFloor,validWall,floorSprite,wallSprite,floorKey,wallKey} from './surfaces.js';
export function decorItem(s,id){return s.furniture.find(f=>f.id===id)||wallDecor(s).find(f=>f.id===id);}
export function saleOffer(s,id){
 const f=decorItem(s,id);if(!f)return {ok:false,message:'Select an item.'};
 if(f.kind==='stove'&&(s.stoves.length===1||s.stoves.find(st=>st.id===id)?.job))return {ok:false,message:s.stoves.length===1?'Keep at least one stove in the café.':'Finish and collect this stove’s batch before selling it.'};
 if(s.stock.some(b=>b.counterId===id)||s.staff.people.some(z=>z.targetId===id||z.sourceId===id||z.counterId===id||z.deliveryCounterId===id)||s.visitors.people.some(g=>g.tableId===id||g.chairId===id))return {ok:false,message:'This item is in use. Wait until it is free before selling it.'};
 const item=CATALOG.find(c=>c.id===f.catalogId)||CATALOG.find(c=>c.sprite===f.sprite);
 // Constants.bin.mid: cash per toxin at 1262 = 2000; sellback at 1266 = 0.5.
 return {ok:true,coins:Math.floor((item?.cost||0)*(item?.premium?2000:1)*.5)};
}
export function sellDecoration(s,id){
 const offer=saleOffer(s,id);if(!offer.ok)return offer;
 const f=decorItem(s,id);
 if(f.kind==='wallArt')s.wallDecor=wallDecor(s).filter(f=>f.id!==id);
 else {s.furniture=s.furniture.filter(f=>f.id!==id);s.stoves=s.stoves.filter(f=>f.id!==id);s.visitors.dirtyTables=s.visitors.dirtyTables.filter(f=>f.tableId!==id);}
 s.coins=Math.min(1e9,s.coins+offer.coins);return {ok:true,message:`Item sold for ${offer.coins} coins.`};
}
export function placeWallDecoration(s,item,side,index){
 if(item?.kind!=='wallArt')return {ok:false,message:'Choose a window or wall decoration.'};
 if(item.level>levelOf(s)||item.premium||s.coins<item.cost)return {ok:false,message:'This item is locked or you cannot afford it.'};
 if(!canPlaceWallDecor(s,side,index))return {ok:false,message:'Choose an empty wall section, clear of the door.'};
 const list=wallDecor(s),id='w'+(1+Math.max(-1,...list.map(f=>Number(f.id.slice(1)))));
 s.wallDecor=[...list,{id,catalogId:item.id,kind:'wallArt',sprite:item.sprite,side,index}];s.coins-=item.cost;s.stats.decorated++;
 return {ok:true,message:'Wall decoration placed.'};
}
export function applySurfacePaint(s,item,targets){
 if(!item||!['floor','wall'].includes(item.kind))return {ok:false,message:'Choose a floor or wall finish.'};
 if(item.level>levelOf(s)||item.premium)return {ok:false,message:'This finish is unavailable.'};
 const unique=new Map();
 for(const p of targets){if(item.kind==='floor'?validFloor(s,p.x,p.y):validWall(s,p.side,p.index))unique.set(item.kind==='floor'?floorKey(p.x,p.y):wallKey(p.side,p.index),p);else return {ok:false,message:'Choose a valid surface.'};}
 const changes=[...unique].filter(([,p])=>(item.kind==='floor'?floorSprite(s,p.x,p.y):wallSprite(s,p.side,p.index))!==item.sprite);
 const cost=changes.length*item.cost;
 if(!changes.length)return {ok:false,message:'Select a different tile or wall section.'};
 if(s.coins<cost)return {ok:false,message:`You need ${cost} coins for these changes.`};
 const field=item.kind==='floor'?'floorTiles':'wallTiles';s[field]={...s[field],...Object.fromEntries(changes.map(([key])=>[key,item.sprite]))};s.coins-=cost;s.stats.decorated+=changes.length;
 return {ok:true,message:`${changes.length} ${item.kind==='floor'?'tiles':'wall sections'} updated.`,cost};
}
export function applyDecorationMove(s,id,target,draft){
 const f=decorItem(s,id);if(!f)return {ok:false,message:'That item is no longer available.'};
 if(f.kind==='wallArt'){
  if(!canPlaceWallDecor(s,target?.side,target?.index,id))return {ok:false,message:'Choose an empty wall section, clear of the door.'};
  s.wallDecor=wallDecor(s).map(v=>v.id===id?{...v,side:target.side,index:target.index}:v);
 }else{
  const result=move(s,id,target?.x,target?.y);if(!result.ok)return result;
  if(draft){f.direction=draft.direction;f.flip=draft.flip;}
 }
 return {ok:true,message:'Item moved.'};
}
export function moveSurface(s,selection,target){
 const isFloor=selection.kind==='floor',valid=isFloor?validFloor(s,target?.x,target?.y):validWall(s,target?.side,target?.index);
 if(!valid)return {ok:false,message:'Choose another matching surface.'};
 const key=p=>isFloor?floorKey(p.x,p.y):wallKey(p.side,p.index),sprite=p=>isFloor?floorSprite(s,p.x,p.y):wallSprite(s,p.side,p.index),field=isFloor?'floorTiles':'wallTiles';
 s[field]={...s[field],[key(selection)]:sprite(target),[key(target)]:sprite(selection)};
 return {ok:true,message:'Surface finishes swapped.'};
}
