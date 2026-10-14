import {INFECTION_RULES,ZOMBIE_CAPS} from './infection-rules.js';
import {CUSTOMER_RULES} from './customer-rules.js';
import {levelOf} from './progression.js';
import {newStaffState,moveStaff} from './staff.js';
import {cafeSize} from './world.js';
export function staffCap(s){return ZOMBIE_CAPS[Math.min(ZOMBIE_CAPS.length-1,levelOf(s)-1)];}
export function infectionOffer(s,id){
 const guest=s.visitors.people.find(g=>g.id===id);
 if(!guest)return {ok:false,message:'This customer has already left.'};
 const customer=CUSTOMER_RULES.find(r=>r.id===guest.customerDataId)??CUSTOMER_RULES.find(r=>r.variant===guest.variant&&!r.eventOnly);
 const rule=INFECTION_RULES[customer?.id];
 const result={guest,customer,rule,cap:staffCap(s)};
 if(!rule?.form)return {...result,ok:false,message:'This customer cannot be infected.'};
 if(guest.x<0||guest.y<0||guest.x>=cafeSize(s).width||guest.y>=cafeSize(s).height||['leaving','passing'].includes(guest.phase))return {...result,ok:false,message:'Wait until this customer is inside the café.'};
 if(s.staff.people.length>=result.cap)return {...result,ok:false,message:'Your staff is full. Level up to unlock more workers.'};
 if((s[rule.currency]||0)<rule.cost)return {...result,ok:false,message:'You need '+rule.cost+' '+(rule.currency==='toxin'?'toxin vials':'coins')+' to infect this customer.'};
 const blocked=new Set(s.furniture.map(f=>f.x+','+f.y));
 const positions=[];for(let y=0;y<cafeSize(s).height;y++)for(let x=0;x<cafeSize(s).width;x++)if(!blocked.has(x+','+y))positions.push({x,y});
 positions.sort((a,b)=>Math.hypot(a.x-guest.x,a.y-guest.y)-Math.hypot(b.x-guest.x,b.y-guest.y));
 if(!positions.length)return {...result,ok:false,message:'Make room on the café floor first.'};
 return {...result,ok:true,position:positions[0]};
}
export function infectCustomer(s,id){
 if(s.pendingInfection)return {ok:false,message:'The chef is already following a customer to infect.'};
 const offer=infectionOffer(s,id);if(!offer.ok)return offer;
 if(s.infectionTutorialComplete!==true){
  const chef=s.staff.people[0];if(!chef)return {ok:false,message:'No chef is available.'};
  s.pendingInfection={guestId:id,staffId:chef.id};
  return {ok:true,message:'The chef will approach this customer to infect them.'};
 }
 return completeInfection(s,id);
}
function completeInfection(s,id){
 const offer=infectionOffer(s,id);if(!offer.ok)return offer;
 const {guest,rule,customer,position}=offer;
 const nextId=1+Math.max(0,...s.staff.people.map(z=>Number(z.id.slice(7))));
 const z={...newStaffState().people[0],...position,id:'zombie-'+nextId,customerDataId:customer.id,zombieForm:rule.form};
 // Release the visitor's seat. In-flight servers return their portion via existing AI.
 if(guest.meal&&guest.tableId&&!s.visitors.dirtyTables.some(d=>d.tableId===guest.tableId))s.visitors.dirtyTables.push({tableId:guest.tableId,remaining:5});
 s[rule.currency]=(s[rule.currency]||0)-rule.cost;
 s.visitors.people=s.visitors.people.filter(g=>g.id!==id);
 s.staff.people.push(z);
 s.infectionTutorialComplete=true;
 return {ok:true,message:'Customer infected! Your new zombie is ready to work.',zombieId:z.id};
}

// Native InfectTask uses FollowTask and succeeds on arrival, not after a fixed timer.
export function advanceInfection(s,pathfinder){
 const task=s.pendingInfection;if(!task)return;
 const chef=s.staff.people.find(z=>z.id===task.staffId),offer=infectionOffer(s,task.guestId);
 const cancel=message=>{delete s.pendingInfection;if(chef){delete chef.manualTarget;chef.path=[];chef.message=message.slice(0,60);}};
 if(!chef||!offer.ok){cancel(offer.message||'Infection cancelled');return;}
 const g=offer.guest;
 if(Math.hypot(chef.x-g.x,chef.y-g.y)<=1.01){cancel('');completeInfection(s,g.id);return;}
 const target={x:Math.round(g.x),y:Math.round(g.y)};
 const candidates=[target,{x:target.x+1,y:target.y},{x:target.x-1,y:target.y},{x:target.x,y:target.y+1},{x:target.x,y:target.y-1}];
 candidates.sort((a,b)=>Math.hypot(a.x-chef.x,a.y-chef.y)-Math.hypot(b.x-chef.x,b.y-chef.y));
 if(chef.manualTarget&&candidates.some(p=>p.x===chef.manualTarget.x&&p.y===chef.manualTarget.y)){chef.message='Following customer to infect';return;}
 for(const p of candidates)if(moveStaff(s,chef.id,p,pathfinder).ok){chef.message='Following customer to infect';return;}
 cancel('Customer cannot be reached');
}
