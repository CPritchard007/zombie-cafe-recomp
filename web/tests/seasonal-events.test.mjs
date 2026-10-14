import test from 'node:test';
import assert from 'node:assert/strict';
import {applyChatCode} from '../dist/chat-codes.js';
import {SEASONAL_EVENTS,EVENT_DURATION,activeSeasonalEvent} from '../dist/seasonal-events.js';
import {chooseCustomer} from '../dist/customer-selection.js';
import {initialState,validateSave} from '../dist/model.js';
import {INFECTION_RULES} from '../dist/infection-rules.js';
const now=1700000000000;
const codes={halloween:'trickortreat',christmas:'seasonseatings',valentines:'loveatfirstbite'};
test('holiday codes persist one real-time hour and replace or refresh the active event',()=>{
 const s=initialState();
 for(const [id,code] of Object.entries(codes)){
  applyChatCode(s,code,now);
  assert.deepEqual(s.seasonalEvent,{id,startedAt:now,endsAt:now+EVENT_DURATION});
  const loaded=validateSave(JSON.parse(JSON.stringify(s)),[]);
  assert.deepEqual(loaded.seasonalEvent,s.seasonalEvent);
  assert.equal(activeSeasonalEvent(loaded.seasonalEvent,now+EVENT_DURATION-1),SEASONAL_EVENTS[id]);
  assert.equal(activeSeasonalEvent(loaded.seasonalEvent,now+EVENT_DURATION),null);
  assert.equal(activeSeasonalEvent(loaded.seasonalEvent,now-1),null);
 }
 applyChatCode(s,'/LOVEATFIRSTBITE',now+1000);
 assert.equal(s.seasonalEvent.endsAt,now+1000+EVENT_DURATION);
});
test('each holiday admits only its own special visitors with infectable art, and expires to the original pool',()=>{
 const s=initialState();
 for(const [id,code] of Object.entries(codes)){
  applyChatCode(s,code,now);
  const event=SEASONAL_EVENTS[id];
  for(let i=0;i<event.customers.length;i++){
   const draw=(i+.5)/event.customers.length/2;
   const guest=chooseCustomer(1,0,draw,s.seasonalEvent,now);
   assert.equal(guest.id,event.customers[i]);assert.notEqual(guest.variant,null);assert(INFECTION_RULES[guest.id].form);
   assert.deepEqual(chooseCustomer(1,0,draw,s.seasonalEvent,now+EVENT_DURATION),chooseCustomer(1,0,draw));
  }
  assert.deepEqual(chooseCustomer(1,0,.75,s.seasonalEvent,now),chooseCustomer(1,0,.5));
 }
});
test('invalid event saves are rejected; legacy saves still load',()=>{
 const s=initialState();assert(validateSave(s,[]));
 for(const event of [null,{}, {id:'unknown',startedAt:now,endsAt:now+EVENT_DURATION},{id:'halloween',startedAt:now,endsAt:now+EVENT_DURATION*2},{id:'halloween',startedAt:'bad',endsAt:now}]){
  s.seasonalEvent=event;assert.throws(()=>validateSave(s,[]),/Invalid seasonal event/);
 }
});
