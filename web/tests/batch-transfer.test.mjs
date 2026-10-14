import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import {initialState,reconcile,recipeOutput,validateSave} from '../dist/model.js';
import {newStaffState} from '../dist/staff.js';
const recipes=JSON.parse(fs.readFileSync(new URL('../dist/assets/recipes.json',import.meta.url)));
function cafe(){const s=initialState(1700000000000);s.doorOpen=false;s.stoves[0].job={recipeId:0,total:120,remaining:1,output:recipeOutput(recipes[0])};return s;}
function tick(s,t=.25){reconcile(s,s.lastTick+t*1000);}
function until(s,p){for(let i=0;i<800;i++){tick(s);if(p())return;}assert.fail(JSON.stringify(s.staff));}
test('finished food stays on the stove until physical pickup and on a worker until counter drop',()=>{
 const s=cafe(),z=s.staff.people[0];tick(s,.5);assert.equal(s.stoves[0].job.remaining,.5);assert.equal(s.stock.length,0);
 until(s,()=>z.phase==='collectBatch');assert(s.stoves[0].job);assert.equal(s.stock.length,0);
 until(s,()=>z.batch);assert.equal(s.stoves[0].job,null);assert.equal(z.batch.quantity,12);assert.equal(s.stock.length,0);assert.equal(s.stats.cooked,0);
 until(s,()=>s.stock.length);assert.equal(z.batch,null);assert.equal(s.stock[0].quantity,12);assert(s.furniture.some(f=>f.id===s.stock[0].counterId&&f.kind==='counter'));assert.equal(s.stats.cooked,1);assert.equal(s.xp,1);
});
test('full counters leave a finished batch on the stove; freeing one resumes delivery',()=>{
 const s=cafe();s.stock=s.furniture.filter(f=>f.kind==='counter').map(f=>({recipeId:0,price:1,quantity:12,counterId:f.id}));tick(s,30);assert(s.stoves[0].job);assert.equal(s.stats.cooked,0);assert(!s.staff.people[0].batch);
 const emptyId=s.stock.pop().counterId;until(s,()=>s.stats.cooked===1);assert(s.stock.some(b=>b.counterId===emptyId&&b.quantity===12));
});
test('removing the destination preserves a carried batch and another empty counter receives it',()=>{
 const s=cafe(),z=s.staff.people[0];until(s,()=>z.batch);const old=z.deliveryCounterId;s.furniture=s.furniture.filter(f=>f.id!==old);until(s,()=>s.stock.length);assert.notEqual(s.stock[0].counterId,old);assert.equal(s.stock[0].quantity,12);
});
test('mid-transfer saves and offline catch-up preserve batch quantity and reward exactly once',()=>{
 const s=cafe();until(s,()=>s.staff.people[0].batch);const saved=validateSave(structuredClone(s),recipes),whole=structuredClone(saved);
 for(let i=0;i<400;i++)tick(saved);tick(whole,100);assert.deepEqual(saved,whole);assert.equal(whole.stats.cooked,1);assert.equal(whole.stock[0].quantity,12);assert.equal(whole.xp,1);
});
test('two workers reserve different empty counters and never collect the same batch twice',()=>{
 const s=cafe();s.furniture.push({id:'f99',kind:'stove',sprite:'o0-84',x:5,y:4,flip:false});s.stoves.push({id:'f99',job:structuredClone(s.stoves[0].job)});const z=newStaffState().people[0];z.id='zombie-2';z.x=4;z.y=3;s.staff.people.push(z);
 for(let i=0;i<240;i++){tick(s);const ids=s.staff.people.map(z=>z.deliveryCounterId).filter(Boolean);assert.equal(new Set(ids).size,ids.length);}
 assert.equal(s.stats.cooked,2);assert.equal(s.stock.reduce((n,b)=>n+b.quantity,0),24);assert.equal(new Set(s.stock.map(b=>b.counterId)).size,2);
});
test('counter serving removes exactly one portion from the counter actually visited',()=>{
 const s=cafe();s.stoves[0].job=null;s.stock=[{recipeId:0,price:1,quantity:12,counterId:'f5'}];s.doorOpen=true;s.visitors.nextId=2;s.visitors.people=[{id:1,x:1,y:2,variant:0,phase:'waiting',timer:60,path:[],chairId:'f7',tableId:'f6',meal:null,exitX:32,t:0,north:false,flip:false,message:''}];
 until(s,()=>s.staff.people[0].phase==='pickup');assert.equal(s.staff.people[0].targetId,'f5');until(s,()=>s.staff.people[0].carrying);assert.equal(s.stock[0].quantity,11);assert.equal(s.stock[0].counterId,'f5');
});
