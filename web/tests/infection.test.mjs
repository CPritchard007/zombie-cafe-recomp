import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import {initialState,configureOriginalCatalog,validateSave,applyStartingLayout,reconcile} from '../dist/model.js';
import {infectionOffer,infectCustomer,staffCap} from '../dist/infection.js';
import {CUSTOMER_RULES} from '../dist/customer-rules.js';
import {INFECTION_RULES} from '../dist/infection-rules.js';
const read=p=>JSON.parse(fs.readFileSync(new URL('../dist/'+p,import.meta.url)));
const recipes=read('assets/recipes.json');configureOriginalCatalog(read('assets/original/furniture-data.json').items);
function cafe(record=0){const s=initialState();s.xp=20;s.infectionTutorialComplete=true;s.visitors.nextId=2;const r=CUSTOMER_RULES[record];s.visitors.people.push({id:1,x:3,y:0,variant:r.variant,customerDataId:r.id,phase:'entryPause',timer:1,t:0,path:[],chairId:null,tableId:null,meal:null,exitX:32,north:false,flip:false,message:''});return s;}
test('original free infection creates a permanent worker with matching zombie artwork',()=>{
 const s=cafe(),coins=s.coins;assert(infectCustomer(s,1).ok);assert.equal(s.coins,coins);assert.equal(s.visitors.people.length,0);assert.equal(s.staff.people.length,2);
 assert.equal(s.staff.people[1].zombieForm,INFECTION_RULES[0].form);
 assert(!infectCustomer(s,1).ok);assert.equal(s.staff.people.length,2);
 const restored=validateSave(JSON.parse(JSON.stringify(s)),recipes);assert.deepEqual(restored.staff,s.staff);
 applyStartingLayout(restored);assert.equal(restored.staff.people.length,2);assert.equal(restored.staff.people[1].zombieForm,INFECTION_RULES[0].form);
 reconcile(restored,restored.lastTick+10000);validateSave(restored,recipes);
});
test('coin and toxin costs come from each original customer record and charge once',()=>{
 for(const currency of ['coins','toxin']){
  const rule=INFECTION_RULES.find(r=>r.cost>0&&r.currency===currency&&r.form&&CUSTOMER_RULES[r.id].variant!==null);
  const s=cafe(rule.id);s[currency]=rule.cost-1;const before=structuredClone(s);assert(!infectCustomer(s,1).ok);assert.deepEqual(s,before);
  s[currency]=rule.cost+7;assert(infectCustomer(s,1).ok);assert.equal(s[currency],7);assert(!infectCustomer(s,1).ok);assert.equal(s[currency],7);
 }
});
test('level cap, outdoor visitors, departed visitors and invalid saved forms are guarded',()=>{
 const s=cafe();s.xp=0;assert.equal(staffCap(s),1);assert(!infectionOffer(s,1).ok);
 s.xp=20;s.visitors.people[0].y=-1;assert(!infectCustomer(s,1).ok);
 s.visitors.people[0].y=0;assert(infectCustomer(s,1).ok);s.staff.people[1].zombieForm='bogus';assert.throws(()=>validateSave(s,recipes));
});
test('infecting a seated diner releases their seat and leaves a cleanable dirty plate',()=>{
 const s=cafe(),g=s.visitors.people[0],chair=s.furniture.find(f=>f.kind==='chair'),table=s.furniture.find(f=>f.kind==='table');
 Object.assign(g,{x:chair.x,y:chair.y,chairId:chair.id,tableId:table.id,phase:'eating',meal:{recipeId:recipes[0].id,price:recipes[0].baseSellPrice}});
 assert(infectCustomer(s,1).ok);assert.equal(s.visitors.dirtyTables[0].tableId,table.id);validateSave(s,recipes);
 assert(!s.furniture.some(f=>f.x===s.staff.people[1].x&&f.y===s.staff.people[1].y));
});
test('infection prices and limits agree with recovered APK records',()=>{
 const records=JSON.parse(fs.readFileSync(new URL('../../reports/customer-records.json',import.meta.url))).records;
 for(const r of records){assert.equal(INFECTION_RULES[r.id].cost,r.int);assert.equal(INFECTION_RULES[r.id].currency,r.bytes[0]?'toxin':'coins');}
 const s=initialState();assert.equal(staffCap(s),1);s.xp=20;assert.equal(staffCap(s),2);s.xp=40;assert.equal(staffCap(s),3);
});
test('first infection follows the customer over time, persists and honors pause',async()=>{
 const {advanceInfection}=await import('../dist/infection.js');
 const {advanceStaff}=await import('../dist/staff.js');
 const {visitorPath}=await import('../dist/visitors.js');
 let s=cafe();delete s.infectionTutorialComplete;s.visitors.people[0].x=4;s.visitors.people[0].y=5;
 assert(infectCustomer(s,1).ok);assert.equal(s.staff.people.length,1);assert(!infectCustomer(s,1).ok);
 advanceInfection(s,visitorPath);advanceStaff(s,.25,visitorPath);assert.equal(s.staff.people.length,1);
 s=validateSave(JSON.parse(JSON.stringify(s)),recipes);s.speed=0;const before=structuredClone(s.staff);
 reconcile(s,s.lastTick+5000);assert.deepEqual(s.staff,before);assert(s.pendingInfection);
 for(let i=0;i<100&&s.pendingInfection;i++){advanceInfection(s,visitorPath);advanceStaff(s,.25,visitorPath);}
 assert.equal(s.staff.people.length,2);assert.equal(s.infectionTutorialComplete,true);assert.equal(s.pendingInfection,undefined);validateSave(s,recipes);
});
test('an escaping customer cancels the follow task without charging',async()=>{
 const {advanceInfection}=await import('../dist/infection.js');const {visitorPath}=await import('../dist/visitors.js');
 const s=cafe(16);delete s.infectionTutorialComplete;const balance=s.coins;
 assert(infectCustomer(s,1).ok);s.visitors.people[0].phase='leaving';advanceInfection(s,visitorPath);
 assert.equal(s.pendingInfection,undefined);assert.equal(s.coins,balance);assert.equal(s.staff.people.length,1);validateSave(s,recipes);
});
