import {INFECTION_RULES} from './infection-rules.js';
import {addXp} from './progression.js';
import {cafeSize} from './world.js';
import {facingForMovement,handoffDuration} from './characters.js';
// ServeTask and CleanupTask both use Constants::ServeTask_SERVE_TIME (350 ms).
export const STAFF_RULES=Object.freeze({serveTime:.35,idleTime:1,wanderChance:1/20,speed:.9});
const adjacent=p=>[{x:p.x+1,y:p.y},{x:p.x-1,y:p.y},{x:p.x,y:p.y+1},{x:p.x,y:p.y-1}];
const at=(a,b)=>Math.abs(a.x-b.x)+Math.abs(a.y-b.y)<1e-7;
const phases=['idle','roam','counter','pickup','deliver','serve','returnCounter','returnFood','table','clear','sink','wash','stove','collectBatch','batchCounter','dropBatch'];
export function newStaffState(){return {version:1,seed:8191,people:[{id:'zombie-1',variant:3,x:1,y:1,t:0,north:false,flip:false,phase:'idle',timer:0,path:[],targetId:null,guestId:null,carrying:null,dishes:false,completed:0,message:''}]};}
export function ensureStaff(s){if(s.staff===undefined)s.staff=newStaffState();return s.staff;}
function random(staff){staff.seed=(Math.imul(staff.seed,1664525)+1013904223)>>>0;return staff.seed/4294967296;}
function free(s,p){const {width,height}=cafeSize(s);return p.x>=0&&p.y>=0&&p.x<width&&p.y<height&&!s.furniture.some(f=>at(f,p));}
function route(s,z,to,pathfinder){
 // Finish the current straight segment before turning onto a newly computed route.
 const anchors=Number.isInteger(z.x)&&Number.isInteger(z.y)?[{x:z.x,y:z.y}]:[
  {x:Math.floor(z.x),y:Math.floor(z.y)},{x:Math.ceil(z.x),y:Math.ceil(z.y)}].filter(p=>free(s,p));
 const paths=anchors.map(a=>{const p=pathfinder(s,a,to);return p===null?null:[...(at(z,a)?[]:[a]),...p];}).filter(p=>p!==null&&p.every(n=>n.y>=0));
 return paths.sort((a,b)=>length(z,a)-length(z,b))[0]??null;
}
export function moveStaff(s,id,to,pathfinder){
 const z=ensureStaff(s).people.find(z=>z.id===id);
 if(!z)return {ok:false,message:'Select a zombie first.'};
 if(!Number.isInteger(to.x)||!Number.isInteger(to.y)||!free(s,to))return {ok:false,message:'Choose an empty floor tile inside the café.'};
 const path=route(s,z,to,pathfinder);
 if(path===null)return {ok:false,message:'That spot is blocked. Clear a path first.'};
 z.manualTarget={...to};z.path=path;z.action=null;z.message='Moving where you tapped';
 return {ok:true,message:'Zombie moving. Work resumes on arrival.'};
}
function manualMove(s,z,dt,pathfinder,record){
 if(!z.manualTarget)return false;
 if(!free(s,z.manualTarget)){delete z.manualTarget;z.path=[];z.message='Destination blocked';return true;}
 if(z.path.some(p=>!free(s,p))||!z.path.length&&!at(z,z.manualTarget)){
  const path=route(s,z,z.manualTarget,pathfinder);
  if(path===null){delete z.manualTarget;z.path=[];z.message='Path blocked';return true;}z.path=path;
 }
 let distance=STAFF_RULES.speed*dt;
 while(z.path.length&&distance>0){const p=z.path[0],dx=p.x-z.x,dy=p.y-z.y,n=Math.hypot(dx,dy);Object.assign(z,facingForMovement(dx,dy,z));
  if(n<=distance){z.x=p.x;z.y=p.y;z.path.shift();distance-=n;}else{z.x+=dx/n*distance;z.y+=dy/n*distance;distance=0;}record(z);
 }
 if(!z.path.length){delete z.manualTarget;z.message='';}
 return true;
}
function length(z,path){let total=0;for(const p of path){total+=Math.hypot(p.x-z.x,p.y-z.y);z=p;}return total;}
function approach(s,z,objects,pathfinder){
 const options=[];
 for(const f of objects)for(const p of adjacent(f))if(free(s,p)){
  const path=route(s,z,p,pathfinder);if(path!==null)options.push({f,path,distance:length(z,path)});
 }
 return options.sort((a,b)=>a.distance-b.distance)[0];
}
function assign(z,choice,phase){z.targetId=choice.f.id;z.path=choice.path;z.phase=phase;z.timer=0;}
function idle(z){z.deliveryCounterId=null;z.phase='idle';z.timer=0;z.path=[];z.targetId=null;z.guestId=null;z.message='';}
function face(z,f){if(f)Object.assign(z,facingForMovement(f.x-z.x,f.y-z.y,z));}
function handoff(z,phase,f){z.phase=phase;z.timer=STAFF_RULES.serveTime;face(z,f);z.action={phase,startedAt:z.t,north:z.north,flip:z.flip};const recipeId=z.batch?.recipeId??z.carrying?.recipeId;if(recipeId!==undefined)z.action.recipeId=recipeId;}
function availableCounters(s,z,recipeId=null){
 const reserved=new Set(s.staff.people.filter(p=>p!==z&&p.deliveryCounterId).map(p=>p.deliveryCounterId));
 return s.furniture.filter(f=>f.kind==='counter'&&!reserved.has(f.id)&&!s.stock.some(b=>b.counterId===f.id&&(recipeId===null||b.recipeId!==recipeId)));
}
export function assignStockCounters(s){
 // Legacy shared stock is attached to real counters without discarding overflow.
 for(const b of s.stock){if(b.counterId&&!s.furniture.some(f=>f.id===b.counterId&&f.kind==='counter'))delete b.counterId;
  if(!b.counterId){const counter=availableCounters(s,null).find(f=>!s.stock.some(other=>other.counterId===f.id));if(counter)b.counterId=counter.id;}
 }
}
function returnMeal(s,z,pathfinder){z.guestId=null;const c=approach(s,z,availableCounters(s,z,z.carrying?.recipeId),pathfinder);if(c)assign(z,c,'returnCounter');else{z.phase='returnCounter';z.path=[];z.targetId=null;z.message='Counter blocked';}}
export function advanceStaff(s,dt,pathfinder,record=()=>{}){
 const staff=ensureStaff(s);assignStockCounters(s);
 for(const z of staff.people){
  z.t+=dt;
  if(manualMove(s,z,dt,pathfinder,record))continue;
  z.timer=Math.max(0,z.timer-dt);
  // Complete the handoff clip even after its 350 ms inventory event.
  if(z.action&&!['pickup','serve','clear','wash','returnFood','collectBatch','dropBatch'].includes(z.phase)&&z.t-z.action.startedAt<handoffDuration(z.action.north))continue;
  const guest=()=>s.visitors.people.find(g=>g.id===z.guestId&&g.phase==='waiting');
  if(['counter','pickup','deliver','serve'].includes(z.phase)&&!guest()){
   if(z.carrying)returnMeal(s,z,pathfinder);else idle(z);
  }
  let target=s.furniture.find(f=>f.id===z.targetId);
  const moving=['counter','deliver','returnCounter','table','sink','stove','batchCounter'].includes(z.phase);
  if(moving){
   if(z.phase==='deliver')target=s.furniture.find(f=>f.id===guest()?.tableId);
   const objects=z.phase==='sink'?s.furniture.filter(f=>f.kind==='sink'):z.phase==='returnCounter'?availableCounters(s,z,z.carrying?.recipeId):z.phase==='batchCounter'?availableCounters(s,z):target?[target]:[];
   if(z.phase==='batchCounter'&&!objects.some(f=>f.id===target?.id))target=null;
   const endpoint=z.path.at(-1)??z;
   if(!target||!adjacent(target).some(p=>at(p,endpoint))||z.path.some(p=>!free(s,p))){
    const choice=approach(s,z,objects,pathfinder);
    if(choice){assign(z,choice,z.phase);target=choice.f;if(z.phase==='batchCounter')z.deliveryCounterId=target.id;z.message='';}
    else{z.path=[];if(z.carrying&&z.phase!=='returnCounter')returnMeal(s,z,pathfinder);else if(z.batch||z.dishes||z.carrying)z.message=z.dishes?'Sink blocked':'Waiting for an empty counter';else idle(z);continue;}
   }
  }
  if(['pickup','serve','clear','wash','returnFood','collectBatch','dropBatch'].includes(z.phase)&&(!target||!adjacent(target).some(p=>at(p,z)))){
   z.phase={pickup:'counter',serve:'deliver',clear:'table',wash:'sink',returnFood:'returnCounter',collectBatch:'stove',dropBatch:'batchCounter'}[z.phase];z.timer=0;continue;
  }
  let distance=STAFF_RULES.speed*dt;
  while(z.path.length&&distance>0){const p=z.path[0];if(!free(s,p)){z.path=[];if(z.phase==='roam')idle(z);break;}
   const dx=p.x-z.x,dy=p.y-z.y,n=Math.hypot(dx,dy);Object.assign(z,facingForMovement(dx,dy,z));
   if(n<=distance){z.x=p.x;z.y=p.y;z.path.shift();distance-=n;}else{z.x+=dx/n*distance;z.y+=dy/n*distance;distance=0;}
   record(z);
  }
  if(z.path.length)continue;
  switch(z.phase){
   case 'stove':if(s.stoves.find(st=>st.id===z.targetId)?.job?.remaining===0)handoff(z,'collectBatch',target);else idle(z);break;
   case 'collectBatch':if(!z.timer){
    const st=s.stoves.find(st=>st.id===z.targetId),counter=s.furniture.find(f=>f.id===z.deliveryCounterId),choice=counter&&availableCounters(s,z).some(f=>f.id===counter.id)&&approach(s,z,[counter],pathfinder);
    if(!st?.job?.output||st.job.remaining>0||!choice){idle(z);break;}
    z.batch={...st.job.output};st.job=null;assign(z,choice,'batchCounter');
   }break;
   case 'batchCounter':if(target)handoff(z,'dropBatch',target);break;
   case 'dropBatch':if(!z.timer){
    if(!availableCounters(s,z).some(f=>f.id===z.targetId)){z.phase='batchCounter';z.path=[];break;}
    if(z.batch){s.stock.push({recipeId:z.batch.recipeId,quantity:z.batch.quantity,price:z.batch.price,counterId:z.targetId});addXp(s,z.batch.xp);s.stats.cooked++;z.batch=null;z.completed++;}idle(z);
   }break;
   case 'counter':handoff(z,'pickup',target);break;
   case 'pickup':if(!z.timer){
    const batch=s.stock.find(b=>b.counterId===z.targetId);if(!batch){idle(z);break;}
    z.carrying={recipeId:batch.recipeId,price:batch.price};if(!--batch.quantity)s.stock.splice(s.stock.indexOf(batch),1);
    const table=s.furniture.find(f=>f.id===guest()?.tableId),choice=approach(s,z,table?[table]:[],pathfinder);
    if(choice)assign(z,choice,'deliver');else returnMeal(s,z,pathfinder);
   }break;
   case 'deliver':handoff(z,'serve',target);break;
   case 'serve':if(!z.timer){const g=guest();if(g&&z.carrying){g.meal=z.carrying;g.phase='served';g.timer=2;z.carrying=null;z.completed++;idle(z);}else if(z.carrying)returnMeal(s,z,pathfinder);else idle(z);}break;
   case 'returnCounter':if(target)handoff(z,'returnFood',target);break;
   case 'returnFood':if(!z.timer){if(!availableCounters(s,z,z.carrying?.recipeId).some(f=>f.id===z.targetId)){returnMeal(s,z,pathfinder);break;}if(z.carrying)s.stock.push({...z.carrying,quantity:1,counterId:z.targetId});z.carrying=null;idle(z);}break;
   case 'table':if(s.visitors.dirtyTables.some(d=>d.tableId===z.targetId))handoff(z,'clear',target);else idle(z);break;
   case 'clear':if(!z.timer){s.visitors.dirtyTables=s.visitors.dirtyTables.filter(d=>d.tableId!==z.targetId);z.dishes=true;z.phase='sink';z.targetId=null;}break;
   case 'sink':if(target)handoff(z,'wash',target);break;
   case 'wash':if(!z.timer){z.dishes=false;z.completed++;idle(z);}break;
   case 'roam':idle(z);break;
   case 'idle':{
    if(z.timer)break;
    // Reserve both stove and empty counter before collecting a finished batch.
    const claimedStoves=new Set(staff.people.filter(p=>p!==z&&['stove','collectBatch'].includes(p.phase)).map(p=>p.targetId));
    const empty=s.stoves.some(st=>st.job?.remaining===0&&st.job.output)&&approach(s,z,availableCounters(s,z),pathfinder);
    if(empty){const stove=approach(s,z,s.furniture.filter(f=>f.kind==='stove'&&!claimedStoves.has(f.id)&&s.stoves.some(st=>st.id===f.id&&st.job?.remaining===0&&st.job.output)),pathfinder);
     if(stove){z.deliveryCounterId=empty.f.id;assign(z,stove,'stove');break;}}
    // Serve queued diners before assigning cleanup work.
    const reserved=new Set(staff.people.filter(p=>p!==z).map(p=>p.guestId));
    let choice=null;
    if(s.stock.length)for(const g of s.visitors.people.filter(g=>g.phase==='waiting'&&!reserved.has(g.id))){
     const table=s.furniture.find(f=>f.id===g.tableId);if(!table||!approach(s,z,[table],pathfinder))continue;
     choice=approach(s,z,s.furniture.filter(f=>f.kind==='counter'&&s.stock.some(b=>b.counterId===f.id)),pathfinder);if(choice){z.guestId=g.id;assign(z,choice,'counter');break;}
    }
    if(choice)break;
    const claimed=new Set(staff.people.filter(p=>p!==z&&['table','clear'].includes(p.phase)).map(p=>p.targetId));
    if(s.visitors.dirtyTables.length&&approach(s,z,s.furniture.filter(f=>f.kind==='sink'),pathfinder)){
     choice=approach(s,z,s.furniture.filter(f=>s.visitors.dirtyTables.some(d=>d.tableId===f.id)&&!claimed.has(f.id)),pathfinder);
     if(choice){assign(z,choice,'table');break;}
    }
    if(!z.timer){z.timer=STAFF_RULES.idleTime;
     if(!free(s,z)||random(staff)<STAFF_RULES.wanderChance){const size=cafeSize(s),p={x:Math.floor(random(staff)*size.width),y:Math.floor(random(staff)*size.height)};
      if(free(s,p)){const path=route(s,z,p,pathfinder);if(path?.length){z.path=path;z.phase='roam';}}
     }
    }
   }break;
  }
 }
}
export function validateStaff(s,recipes){
 const staff=ensureStaff(s),num=(n,a,b)=>Number.isFinite(n)&&n>=a&&n<=b,ids=new Set();
 const fail=()=>{throw Error('Invalid zombie staff state.');};
 if(!staff||staff.version!==1||!Number.isInteger(staff.seed)||!num(staff.seed,0,4294967295)||!Array.isArray(staff.people)||staff.people.length>32)fail();
 for(const z of staff.people){
  if(z.zombieForm!==undefined&&(!Number.isInteger(z.customerDataId)||INFECTION_RULES[z.customerDataId]?.form!==z.zombieForm))fail();
  if(typeof z.id!=='string'||!/^zombie-\d+$/.test(z.id)||ids.has(z.id)||z.variant!==3||!num(z.x,0,cafeSize(s).width-1)||!num(z.y,0,cafeSize(s).height-1)||!num(z.t,0,1e10)||!phases.includes(z.phase)||!num(z.timer,0,10)||!Number.isInteger(z.completed)||!num(z.completed,0,1e9)||typeof z.north!=='boolean'||typeof z.flip!=='boolean'||typeof z.dishes!=='boolean'||typeof z.message!=='string'||z.message.length>60||!Array.isArray(z.path)||z.path.length>cafeSize(s).width*cafeSize(s).height)fail();ids.add(z.id);
  if(z.action&&(!['pickup','serve','clear','wash','returnFood','collectBatch','dropBatch'].includes(z.action.phase)||!num(z.action.startedAt,0,z.t)||typeof z.action.north!=='boolean'||typeof z.action.flip!=='boolean'))fail();
  if(z.manualTarget&&(!Number.isInteger(z.manualTarget.x)||!Number.isInteger(z.manualTarget.y)||!num(z.manualTarget.x,0,cafeSize(s).width-1)||!num(z.manualTarget.y,0,cafeSize(s).height-1)))fail();
  if(z.action?.recipeId!==undefined&&!recipes.some(r=>r.id===z.action.recipeId))fail();
  if(z.targetId!==null&&(typeof z.targetId!=='string'||!/^f\d+$/.test(z.targetId)))fail();
  if(z.guestId!==null&&(!Number.isInteger(z.guestId)||!num(z.guestId,1,1e9)))fail();
  for(const p of z.path)if(!Number.isInteger(p.x)||!Number.isInteger(p.y)||!num(p.x,0,cafeSize(s).width-1)||!num(p.y,0,cafeSize(s).height-1))fail();
  if(z.carrying){const r=recipes.find(r=>r.id===z.carrying.recipeId);if(!r||r.baseSellPrice!==z.carrying.price)fail();}
  if(z.deliveryCounterId!=null&&(typeof z.deliveryCounterId!=='string'||!/^f\d+$/.test(z.deliveryCounterId)))fail();
  if(z.batch){const r=recipes.find(r=>r.id===z.batch.recipeId);if(!r||r.baseServings!==z.batch.quantity||r.baseSellPrice!==z.batch.price||r.baseXp!==z.batch.xp)fail();}
  if(['batchCounter','dropBatch'].includes(z.phase)!==Boolean(z.batch))fail();
  if(z.carrying===undefined||(['deliver','serve','returnCounter','returnFood'].includes(z.phase)!==Boolean(z.carrying))||(['sink','wash'].includes(z.phase)!==z.dishes))fail();
 }
}
