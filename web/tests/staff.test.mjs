import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import {initialState,reconcile,validateSave,applyStartingLayout} from '../dist/model.js';
import {STAFF_RULES,newStaffState} from '../dist/staff.js';
import {visitorRenderPose} from '../dist/visitors.js';
const recipes=JSON.parse(fs.readFileSync(new URL('../dist/assets/recipes.json',import.meta.url)));
function cafe(){const s=initialState(1700000000000);s.doorOpen=false;s.stock=[{recipeId:0,price:recipes[0].baseSellPrice,quantity:12}];s.visitors.nextId=2;s.visitors.people=[{id:1,x:1,y:2,variant:0,phase:'waiting',timer:60,path:[],chairId:'f7',tableId:'f6',meal:null,exitX:32,t:0,north:false,flip:false,message:''}];return s;}
function tick(s,n=.25){reconcile(s,s.lastTick+n*1000);}
function until(s,predicate){for(let i=0;i<800;i++){tick(s);if(predicate())return;}assert.fail('Task did not complete: '+JSON.stringify(s.staff.people));}
const stock=s=>s.stock.reduce((n,b)=>n+b.quantity,0);
test('handoff timing uses the recovered native constant',()=>{const rules=JSON.parse(fs.readFileSync(new URL('../../reports/staff-constants.json',import.meta.url)));assert.equal(STAFF_RULES.serveTime,rules.ServeTask_SERVE_TIME.value/1000);});
test('pickup, delivery and table service require separate physical trips',()=>{
 const s=cafe(),z=s.staff.people[0];tick(s);assert.equal(z.phase,'counter');assert.equal(stock(s),12);assert.equal(s.visitors.people[0].meal,null);
 until(s,()=>z.carrying);assert.equal(stock(s),11);assert.equal(s.visitors.people[0].phase,'waiting');assert.equal(z.phase,'deliver');
 until(s,()=>s.visitors.people[0].phase==='served');assert.equal(z.carrying,null);assert.equal(z.completed,1);assert.equal(s.stats.served,0);
 until(s,()=>s.stats.served===1);assert.equal(s.coins,650+recipes[0].baseSellPrice);
});
test('dirty tables require a worker and a reachable sink; dishes are carried before washing',()=>{
 const s=cafe(),z=s.staff.people[0];s.visitors.people=[];s.stock=[];s.visitors.dirtyTables=[{tableId:'f6',remaining:5}];
 until(s,()=>z.phase==='clear');assert.equal(s.visitors.dirtyTables.length,1);
 until(s,()=>z.dishes);assert.equal(s.visitors.dirtyTables.length,0);assert.equal(z.completed,0);
 until(s,()=>z.phase==='wash');assert(z.dishes);until(s,()=>!z.dishes);assert.equal(z.completed,1);
 const blocked=cafe();blocked.visitors.people=[];blocked.stock=[];blocked.furniture=blocked.furniture.filter(f=>f.kind!=='sink');blocked.visitors.dirtyTables=[{tableId:'f6',remaining:5}];tick(blocked,30);assert.equal(blocked.visitors.dirtyTables.length,1);
});
test('food is returned to a counter when the diner leaves during delivery',()=>{
 const s=cafe(),z=s.staff.people[0];until(s,()=>z.carrying);s.visitors.people=[];
 tick(s);assert.equal(stock(s),11);assert(z.carrying);assert(['returnCounter','returnFood'].includes(z.phase));
 until(s,()=>!z.carrying);assert.equal(stock(s),12);assert.equal(s.stats.served,0);assert.equal(s.coins,650);
});
test('removed counters retain carried food until a reachable counter is available',()=>{
 const s=cafe(),z=s.staff.people[0];until(s,()=>z.carrying);s.visitors.people=[];
 const counters=s.furniture.filter(f=>f.kind==='counter');s.furniture=s.furniture.filter(f=>f.kind!=='counter');tick(s,5);assert(z.carrying);assert.equal(stock(s),11);
 s.furniture.push(...counters);until(s,()=>!z.carrying);assert.equal(stock(s),12);
});
test('staff task progress and carried food survive save/load and offline stepping identically',()=>{
 const s=cafe();until(s,()=>s.staff.people[0].carrying);const saved=validateSave(JSON.parse(JSON.stringify(s)),recipes),whole=structuredClone(saved);
 for(let i=0;i<320;i++)tick(saved);tick(whole,80);assert.deepEqual(saved,whole);assert.equal(saved.stats.served,1);assert.equal(stock(saved),11);
});
test('multiple staff reserve a diner only once and respect newly blocked routes',()=>{
 const s=cafe(),second=newStaffState().people[0];second.id='zombie-2';second.x=4;second.y=4;s.staff.people.push(second);
 for(let i=0;i<160;i++){tick(s);const reservations=s.staff.people.map(z=>z.guestId).filter(Boolean);assert.equal(new Set(reservations).size,reservations.length);}
 assert.equal(stock(s),11);assert.equal(s.stats.served,1);
 const blocked=cafe();blocked.furniture=blocked.furniture.filter(f=>f.kind!=='counter');tick(blocked,30);assert.equal(stock(blocked),12);assert.equal(blocked.visitors.people[0].meal,null);
});
test('staff render positions interpolate smoothly between fixed simulation steps',()=>{
 const s=cafe();until(s,()=>s.staff.people[0].path.length>0);tick(s);const z=s.staff.people[0],a=visitorRenderPose(s.visitors,z);tick(s,.125);const b=visitorRenderPose(s.visitors,z);
 assert(Math.hypot(b.x-a.x,b.y-a.y)>0);assert(Math.hypot(b.x-a.x,b.y-a.y)<=STAFF_RULES.speed*.125+1e-8);
});
test('old saves gain staff without resetting the cafe; malformed staff saves are rejected',()=>{
 const s=cafe();delete s.staff;const restored=validateSave(structuredClone(s),recipes);assert.equal(restored.staff.people.length,1);assert.deepEqual(restored.furniture,s.furniture);assert.equal(restored.coins,s.coins);
 for(const mutate of [z=>z.x=Infinity,z=>z.phase='invent-money',z=>z.carrying={recipeId:0,price:999},z=>z.path=[{x:-1,y:0}],z=>z.timer=-1]){const bad=structuredClone(restored);mutate(bad.staff.people[0]);assert.throws(()=>validateSave(bad,recipes));}
});

test('moving a delivery target replans the worker without consuming a second portion',()=>{
 const s=cafe(),z=s.staff.people[0];until(s,()=>z.carrying);
 const table=s.furniture.find(f=>f.id==='f6'),chair=s.furniture.find(f=>f.id==='f7'),g=s.visitors.people[0];
 table.x=4;table.y=2;chair.x=3;chair.y=2;g.x=3;g.y=2;
 until(s,()=>g.phase==='served');assert.equal(stock(s),11);assert.equal(z.carrying,null);
});
test('sink removal after clearing keeps the dishes and resumes washing when restored',()=>{
 const s=cafe(),z=s.staff.people[0];s.visitors.people=[];s.stock=[];s.visitors.dirtyTables=[{tableId:'f6',remaining:5}];until(s,()=>z.dishes);
 const sink=s.furniture.find(f=>f.kind==='sink');s.furniture=s.furniture.filter(f=>f!==sink);tick(s,5);assert(z.dishes);assert.equal(z.completed,0);
 const saved=validateSave(structuredClone(s),recipes);assert(saved.staff.people[0].dishes);
 s.furniture.push(sink);until(s,()=>!z.dishes);assert.equal(z.completed,1);
});
test('layout restoration returns carried portions before resetting staff routes',()=>{
 const s=cafe();until(s,()=>s.staff.people[0].carrying);assert.equal(stock(s),11);applyStartingLayout(s);assert.equal(stock(s),12);assert.equal(s.staff.people[0].carrying,null);
});
