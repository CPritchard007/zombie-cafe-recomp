import test from 'node:test';
import assert from 'node:assert/strict';
import {initialState,validateSave,entranceAccess,reconcile} from '../dist/model.js';
import {moveDoor} from '../dist/decoration.js';
import {visitorPath} from '../dist/visitors.js';
import {entrance,doorstep} from '../dist/world.js';
import {canPlaceWallDecor} from '../dist/surfaces.js';
test('door moves to either wall, persists, and relocates the only entrance crossing',()=>{
 const s=initialState();s.speed=0;
 for(const door of [{side:'right',index:4},{side:'left',index:2}]){
  assert(moveDoor(s,door).ok);assert.deepEqual(validateSave(s,[]).door,door);
  const path=visitorPath(s,{x:3,y:-1},entrance(s));assert(path);assert(path.some(p=>p.x===doorstep(s).x&&p.y===doorstep(s).y));
  assert(entranceAccess(s).reachable.size>0);assert.equal(canPlaceWallDecor(s,door.side,door.index),false);
 }
 s.doorOpen=false;assert.equal(visitorPath(s,doorstep(s),entrance(s)),null);
 assert(visitorPath(s,entrance(s),doorstep(s)));
});
test('blocked positions and mid-crossing movement do not change the saved door',()=>{
 const s=initialState(),before=structuredClone(s);
 for(const door of [{side:'left',index:3},{side:'left',index:4},{side:'right',index:100}]){assert.equal(moveDoor(s,door).ok,false);assert.deepEqual(s,before);}
 s.visitors.people=[{x:3,y:-.5}];assert.equal(moveDoor(s,{side:'right',index:4}).ok,false);assert.equal(s.door,undefined);
});
test('customers continue arriving through a moved left entrance and saves remain valid',()=>{
 const s=initialState(0);assert(moveDoor(s,{side:'left',index:2}).ok);
 for(let i=1;i<=200;i++){reconcile(s,i*1000);validateSave(s,[]);}
 assert(s.visitors.arrived>0);
});
