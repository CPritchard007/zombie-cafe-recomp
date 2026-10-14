import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import {initialState,configureOriginalCatalog,validateSave,reconcile} from '../dist/model.js';
import {visitorPath} from '../dist/visitors.js';
import {moveStaff,advanceStaff,STAFF_RULES} from '../dist/staff.js';
const read=p=>JSON.parse(fs.readFileSync(new URL('../dist/'+p,import.meta.url)));
const recipes=read('assets/recipes.json');configureOriginalCatalog(read('assets/original/furniture-data.json').items);
function cafe(){const s=initialState(1000);s.doorOpen=false;return s;}
function run(s,condition){for(let i=0;i<400;i++){advanceStaff(s,.25,visitorPath);if(condition())return;}assert.fail('Movement did not finish');}
test('manual command follows a smooth obstacle-avoiding path without teleporting',()=>{
 const s=cafe(),z=s.staff.people[0],before={x:z.x,y:z.y};
 assert(moveStaff(s,z.id,{x:4,y:4},visitorPath).ok);assert.equal(z.x,before.x);assert.equal(z.y,before.y);
 const points=[];advanceStaff(s,.25,visitorPath,p=>points.push({x:p.x,y:p.y}));
 assert(Math.hypot(z.x-before.x,z.y-before.y)<=STAFF_RULES.speed*.25+1e-8);
 run(s,()=>!z.manualTarget);assert.equal(z.x,4);assert.equal(z.y,4);
});
test('invalid and unreachable destinations leave the current task untouched',()=>{
 const s=cafe(),z=s.staff.people[0],before=structuredClone(z);
 for(const target of [{x:-1,y:0},{x:1.2,y:2},{x:s.furniture[0].x,y:s.furniture[0].y}]){assert(!moveStaff(s,z.id,target,visitorPath).ok);assert.deepEqual(z,before);}
 assert(!moveStaff(s,z.id,{x:4,y:4},()=>null).ok);assert.deepEqual(z,before);
});
test('carried batch and reservation survive manual movement and reload then deliver once',()=>{
 const s=cafe(),z=s.staff.people[0];Object.assign(z,{phase:'batchCounter',targetId:'f5',deliveryCounterId:'f5',batch:{recipeId:0,quantity:12,price:1,xp:1}});
 assert(moveStaff(s,z.id,{x:4,y:4},visitorPath).ok);advanceStaff(s,.25,visitorPath);
 const restored=validateSave(s,recipes),worker=restored.staff.people[0];assert.deepEqual(worker.manualTarget,{x:4,y:4});assert.equal(worker.batch.quantity,12);
 run(restored,()=>!worker.batch);assert.equal(restored.stock.reduce((n,b)=>n+b.quantity,0),12);assert.equal(restored.stats.cooked,1);assert.equal(restored.xp,1);
});
test('new obstacles cancel an impossible command safely, and pause prevents motion',()=>{
 const s=cafe(),z=s.staff.people[0];moveStaff(s,z.id,{x:4,y:4},visitorPath);s.speed=0;reconcile(s,11000);assert.equal(z.x,1);assert.equal(z.y,1);
 s.furniture.push({id:'f999',kind:'table',x:4,y:4});advanceStaff(s,.25,visitorPath);assert.equal(z.manualTarget,undefined);assert.equal(z.message,'Destination blocked');
});
test('manual save destinations outside the café are rejected',()=>{
 const s=cafe();s.staff.people[0].manualTarget={x:99,y:0};assert.throws(()=>validateSave(s,recipes));
});
