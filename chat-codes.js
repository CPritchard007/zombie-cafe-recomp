import {startSeasonalEvent} from './seasonal-events.js';
// Hidden codes are matched only after submission; never expose suggestions.
const codes=new Map([
 ['herecomesthemoney',state=>{
  const before=state.coins;
  state.coins=Math.min(1e9,before+500);
  return {message:`Added $${state.coins-before}.`};
 }],
 ['trickortreat',(state,now)=>startSeasonalEvent(state,'halloween',now)],
 ['seasonseatings',(state,now)=>startSeasonalEvent(state,'christmas',now)],
 ['loveatfirstbite',(state,now)=>startSeasonalEvent(state,'valentines',now)],
 ['utterlyvile',state=>{
  const before=state.toxin||0;
  state.toxin=Math.min(1e9,before+150);
  return {message:`Added ${state.toxin-before} toxin vials.`};
 }],
]);

export function applyChatCode(state,message,now=Date.now()){
 const code=message.trim().replace(/^\//,'').toLowerCase();
 const apply=codes.get(code);
 return state&&apply?apply(state,now):null;
}
