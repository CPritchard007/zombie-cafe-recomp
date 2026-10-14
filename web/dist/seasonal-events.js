// Local holiday visitor pools, not reconstructed server schedules or rewards.
export const EVENT_DURATION=60*60*1000;
export const SEASONAL_EVENTS=Object.freeze({
 halloween:{name:'Halloween',customers:[1374,1375,1377,1715]},
 christmas:{name:'Christmas',customers:[476,477,936,937,1306,1307,1548,1549]},
 valentines:{name:"Valentine’s Day",customers:[951,1364]},
});
export function activeSeasonalEvent(event,now=Date.now()){
 return event&&Object.hasOwn(SEASONAL_EVENTS,event.id)&&Number.isFinite(event.startedAt)&&Number.isFinite(event.endsAt)&&event.endsAt-event.startedAt===EVENT_DURATION&&event.startedAt<=now&&now<event.endsAt?SEASONAL_EVENTS[event.id]:null;
}
export function startSeasonalEvent(state,id,now=Date.now()){
 state.seasonalEvent={id,startedAt:now,endsAt:now+EVENT_DURATION};
 return {message:`${SEASONAL_EVENTS[id].name} visitors enabled for one hour.`};
}
export function validateSeasonalEvent(event){
 if(event===undefined)return;
 if(!event||!Object.hasOwn(SEASONAL_EVENTS,event.id)||!Number.isSafeInteger(event.startedAt)||event.startedAt<0||!Number.isSafeInteger(event.endsAt)||event.endsAt-event.startedAt!==EVENT_DURATION||event.startedAt>Date.now())throw Error('Invalid seasonal event.');
}
