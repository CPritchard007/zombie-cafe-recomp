import {legacyState} from './legacy-fixture.mjs';
import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import {reconcile,serve,setCafeOpen,validateSave,move} from '../dist/model.js';
import {VISITOR_RULES as R,visitorPath,chairTable,WALKWAY_START,WALKWAY_END} from '../dist/visitors.js';
const recipes=JSON.parse(fs.readFileSync(new URL('../dist/assets/recipes.json',import.meta.url))),now=1700000000000;
function cafe(){const s=legacyState(now);serve(s,'f1',recipes,now);return s;}
function run(s,seconds){reconcile(s,s.lastTick+seconds*1000);}
function until(s,predicate){for(let i=0;i<480;i++){run(s,.25);if(predicate())return;}assert.fail('Visitor never reached expected phase');}
test('visitor timings match the recovered APK constants',()=>{
 const raw=JSON.parse(fs.readFileSync(new URL('../../reports/visitor-constants.json',import.meta.url)));
 for(const [k,n] of [['waitForFood','EatTask_WAIT_FOR_FOOD_TIME'],['foodPause','EatTask_WAIT_WITH_FOOD_TIME'],['eatTime','EatTask_EAT_TIME'],['minInterval','GameStateCafe_MIN_CUSTOMER_INTERVAL'],['maxInterval','GameStateCafe_MAX_CUSTOMER_INTERVAL']])assert.equal(R[k],raw[n].value/1000);
});
test('customers consume a portion before eating and pay only after the meal, once',()=>{
 const s=cafe();let g;
 for(let i=0;i<480;i++){run(s,.25);g=s.visitors.people.find(g=>g.phase==='served');if(g)break;}
 assert(g);assert.equal(s.stock[0].quantity,11);assert.equal(s.coins,650);assert.equal(s.stats.served,0);
 // Stop new arrivals; isolate this seated customer's payment.
 setCafeOpen(s,false,s.lastTick);s.stock=[];const id=g.id;run(s,R.foodPause+R.eatTime-.25);assert.equal(s.coins,650);
 run(s,.25);assert.equal(s.coins,651);assert.equal(s.stats.served,1);assert.equal(s.visitors.people.find(p=>p.id===id).phase,'leaving');
 run(s,120);assert.equal(s.coins,651);assert(!s.visitors.people.some(p=>p.id===id));
});
test('one diner reserves each table even when several chairs face it',()=>{
 const s=cafe();s.furniture.push({id:'f100',kind:'chair',sprite:363,x:1,y:3,flip:false,direction:0});s.nextId=101;
 for(let i=0;i<400;i++){run(s,.25);const ids=s.visitors.people.map(g=>g.tableId).filter(Boolean);assert.equal(new Set(ids).size,ids.length);}
});
test('starved and seatless visitors leave unhappy; closing prevents new diners',()=>{
 const s=legacyState(now);s.stoves.forEach(st=>st.job=null);run(s,240);assert(s.visitors.unhappy>0);assert.equal(s.coins,650);assert(s.visitors.rating<.5);
 const c=cafe();c.furniture=c.furniture.filter(f=>f.kind!=='chair');run(c,90);assert(c.visitors.unhappy>0);assert.equal(c.stock[0].quantity,12);
 const closed=cafe();setCafeOpen(closed,false,now);run(closed,120);assert.equal(closed.visitors.arrived,0);assert.equal(closed.visitors.unhappy,0);assert(closed.visitors.people.every(g=>g.phase==='passing'));
});
test('restoring mid-meal and splitting offline time produces identical state and payment',()=>{
 const s=cafe();until(s,()=>s.visitors.people.some(g=>g.phase==='eating'));
 const restored=validateSave(JSON.parse(JSON.stringify(s)),recipes),whole=structuredClone(s);
 for(let i=0;i<400;i++)run(restored,.25);run(whole,100);
 assert.deepEqual(restored,whole);const before=whole.coins;reconcile(whole,whole.lastTick);assert.equal(whole.coins,before);
});
test('blocked counters cannot serve; moved chairs invalidate reservations safely',()=>{
 const s=cafe();s.furniture=s.furniture.filter(f=>f.kind!=='counter');run(s,100);assert.equal(s.stock.length,0);assert.equal(s.stoves[0].job.output.quantity,12);assert.equal(s.coins,650);
 const c=cafe();until(c,()=>c.visitors.people.some(g=>g.chairId));const g=c.visitors.people.find(g=>g.chairId);assert(g);assert(move(c,g.chairId,7,7).ok);run(c,.25);assert.equal(g.phase,'leaving');assert.equal(g.tableId,null);
});
test('chair orientation chooses the table in front, not an arbitrary adjacent table',()=>{
 const s=legacyState(now),c=s.furniture.find(f=>f.kind==='chair');assert(chairTable(s,c));c.direction=(c.direction+2)%4;assert.equal(chairTable(s,c),undefined);
});
test('walls can only be crossed at the entrance and paths avoid furniture',()=>{
 const s=legacyState(now),path=visitorPath(s,{x:0,y:-1},{x:4,y:2});assert(path);const crossing=path.findIndex(p=>p.y===0);assert.deepEqual(path[crossing],{x:3,y:0});
 assert(path.every(p=>!s.furniture.some(f=>f.x===p.x&&f.y===p.y)));
});
test('visitor saves reject invalid phases, timers, meal prices and duplicate table claims',()=>{
 const s=cafe();until(s,()=>s.visitors.people[0]?.phase==='eating');
 for(const mutate of [v=>v.people[0].phase='free-money',v=>v.people[0].timer=Infinity,v=>v.people[0].meal.price=999,v=>v.people.push({...v.people[0],id:v.nextId++}),v=>v.seed=-1]){const bad=structuredClone(s);mutate(bad.visitors);assert.throws(()=>validateSave(bad,recipes));}
 const legacy=legacyState(now);delete legacy.visitors;assert.deepEqual(validateSave(legacy,recipes).visitors.people,[]);
});
test('walking simulation faces the actual movement in all four grid directions',async()=>{
 const {advanceVisitors}=await import('../dist/visitors.js');
 for(const [dx,dy] of [[1,0],[-1,0],[0,1],[0,-1]]){
  const s=legacyState(now);s.furniture=[];s.visitors.spawnIn=20;
  const g={id:1,x:3,y:3,variant:0,phase:'leaving',timer:1,path:[{x:3+dx,y:3+dy}],chairId:null,tableId:null,meal:null,exitX:-1,t:0,north:false,flip:false,message:''};s.visitors.people=[g];s.visitors.nextId=2;
  advanceVisitors(s,.25);assert.equal(g.flip,dx-dy>0);assert.equal(g.north,dx+dy<0);assert(Math.abs(g.x-3)+Math.abs(g.y-3)>0);
 }
});

test('new visitors approach along the extended pavement from outside the café area',()=>{
 const s=cafe();run(s,1);const g=s.visitors.people[0];assert(g);assert(g.x<-20||g.x>28);assert.equal(g.y,-1);
 const path=visitorPath(s,{x:WALKWAY_START,y:-1},{x:3,y:0});assert(path.length>24);
 assert(path.slice(0,-1).every(p=>p.y===-1));assert.deepEqual(path.at(-1),{x:3,y:0});
 assert.deepEqual(validateSave(s,recipes),s);
});
test('old exit endpoints migrate without teleporting or losing diner progress',()=>{
 const s=cafe();until(s,()=>s.visitors.people[0]?.phase==='eating');const g=s.visitors.people[0];g.exitX=-1;
 const restored=validateSave(s,recipes),r=restored.visitors.people[0];assert.equal(r.exitX,WALKWAY_START);
 for(const k of ['x','y','phase','timer','meal'])assert.deepEqual(r[k],g[k]);
});
test('departing diners stay on the walkway past the old café-boundary exit',()=>{
 const s=cafe();until(s,()=>s.visitors.people[0]?.phase==='eating');setCafeOpen(s,false,s.lastTick);
 const g=s.visitors.people[0],id=g.id;until(s,()=>g.phase==='leaving');
 until(s,()=>g.y===-1&&(g.x< -2||g.x>9));assert(s.visitors.people.some(p=>p.id===id));
 run(s,90);assert(!s.visitors.people.some(p=>p.id===id));
});
test('rendering moves continuously at walking speed between simulation ticks and follows corners',async()=>{
 const {advanceVisitors,visitorRenderPose}=await import('../dist/visitors.js');
 const s=legacyState(now);s.furniture=[];s.visitors.spawnIn=20;
 const g={id:1,x:3,y:3,variant:0,phase:'leaving',timer:1,path:[{x:3,y:4},{x:4,y:4}],chairId:null,tableId:null,meal:null,exitX:WALKWAY_START,t:0,north:false,flip:false,message:''};s.visitors.people=[g];s.visitors.nextId=2;
 let previous;
 for(let frame=0;frame<130;frame++){
  advanceVisitors(s,1/60);const saved=JSON.stringify(s),p=visitorRenderPose(s.visitors,g);assert.equal(JSON.stringify(s),saved);
  if(frame>16){const distance=Math.abs(p.x-previous.x)+Math.abs(p.y-previous.y);assert(Math.abs(distance-.9/60)<1e-7,`frame ${frame}: ${distance}`);}
  assert(Math.abs(p.x-3)<1e-7||Math.abs(p.y-4)<1e-7,'must follow the L-shaped path instead of cutting diagonally');previous=p;
 }
});
