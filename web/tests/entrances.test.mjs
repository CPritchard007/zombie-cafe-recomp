import {legacyState} from './legacy-fixture.mjs';
import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import {ENTRANCE,DOORSTEP,entranceAccess,place,move,reconcile,serve,setCafeOpen,validateSave} from '../dist/model.js';
import {CafeScene} from '../dist/scene.js';
const recipes=JSON.parse(fs.readFileSync(new URL('../dist/assets/recipes.json',import.meta.url)));
const now=1700000000000;
test('new café has a usable wall entrance and paths to its service furniture',()=>{
 const a=entranceAccess(legacyState(now));assert.equal(a.doorBlocked,false);assert.equal(a.canServe,true);assert.equal(a.blocked.length,0);
});
test('furniture may block the actual door; moving it restores service without moving other furniture',()=>{
 const s=legacyState(now);assert(place(s,'plant',ENTRANCE.x,ENTRANCE.y).ok);assert(entranceAccess(s).doorBlocked);
 serve(s,'f1',recipes,now);assert.equal(reconcile(s,now+60000).sold,0);
 assert(move(s,'f100',7,7).ok);assert.equal(entranceAccess(s).canServe,true);assert(reconcile(s,now+180000).sold>0);
 assert.deepEqual(validateSave(s,recipes),s);
});
test('closed state survives saves and offline time; cooking continues without new sales',()=>{
 const s=legacyState(now);serve(s,'f1',recipes,now);s.stoves[1].job={recipeId:0,total:120,remaining:120};setCafeOpen(s,false,now);
 const restored=validateSave(JSON.parse(JSON.stringify(s)),recipes);assert.equal(restored.doorOpen,false);
 assert.equal(reconcile(restored,now+3600000).sold,0);assert.equal(restored.stoves[1].job,null);assert(restored.stock.some(b=>b.counterId));
 setCafeOpen(restored,true,now+3600000);assert(reconcile(restored,now+3720000).sold>0);
 const legacy=structuredClone(s);delete legacy.doorOpen;assert.equal(validateSave(legacy,recipes).doorOpen,true);
 assert.throws(()=>validateSave({...s,doorOpen:'false'},recipes));
});
test('a partition can disconnect the door from service even with the entrance tile empty',()=>{
 const s=legacyState(now);s.furniture=s.furniture.filter(f=>f.y!==1);
 for(let x=0;x<8;x++)s.furniture.push({id:'block'+x,x,y:1,kind:'divider'});
 const a=entranceAccess(s);assert.equal(a.doorBlocked,false);assert.equal(a.canServe,false);assert(a.blocked.some(f=>f.kind==='chair'));
});
test('customers cross only the doorway and cannot enter a closed café; exits remain available',()=>{
 const state=legacyState(now),scene={state};
 const path=(from,to)=>CafeScene.prototype.pathTo.call(scene,from,to);
 assert.deepEqual(path(DOORSTEP,ENTRANCE),[ENTRANCE]);
 assert.deepEqual(path({x:2,y:-1},ENTRANCE),[DOORSTEP,ENTRANCE]);
 state.furniture=state.furniture.filter(f=>!(f.x===2&&f.y===0));
 assert.deepEqual(path({x:2,y:-1},{x:2,y:0}),[DOORSTEP,ENTRANCE,{x:2,y:0}]);
 state.doorOpen=false;assert.equal(path(DOORSTEP,ENTRANCE).length,0);
 assert.deepEqual(path(ENTRANCE,DOORSTEP),[DOORSTEP]);
});
