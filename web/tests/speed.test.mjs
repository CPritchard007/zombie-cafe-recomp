import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import {initialState,nextGameSpeed,setGameSpeed,reconcile,validateSave} from '../dist/model.js';
const recipes=JSON.parse(fs.readFileSync(new URL('../dist/assets/recipes.json',import.meta.url)));
test('speed changes settle elapsed time at the old multiplier, then accelerate all simulation time',()=>{
 const s=initialState(1700000000000);s.stoves[0].job={recipeId:0,total:120,remaining:120};s.doorOpen=false;
 assert(setGameSpeed(s,5,s.lastTick+10000).ok);assert.equal(s.stoves[0].job.remaining,110);
 const before=s.staff.people[0].t;reconcile(s,s.lastTick+10000);assert.equal(s.stoves[0].job.remaining,60);assert.equal(s.staff.people[0].t-before,50);
 assert(setGameSpeed(s,1,s.lastTick).ok);reconcile(s,s.lastTick+10000);assert.equal(s.stoves[0].job.remaining,50);
});
test('all six speed states persist, invalid speeds do not mutate progress, and old quick shift migrates',()=>{
 for(let speed=0;speed<=5;speed++){const s=initialState();s.speed=speed;assert.equal(validateSave(s,recipes).speed,speed);}
 const s=initialState(),before=structuredClone(s);for(const speed of [-1,6,12,1.5,NaN])assert.equal(setGameSpeed(s,speed).ok,false);assert.deepEqual(s,before);
 s.speed=12;assert.equal(validateSave(s,recipes).speed,5);s.speed=6;assert.throws(()=>validateSave(s,recipes));
});

test('triangle clicks advance through 0–5 and wrap to pause without accruing paused time',()=>{
 let speed=0;const sequence=[];for(let i=0;i<7;i++){speed=nextGameSpeed(speed);sequence.push(speed);}assert.deepEqual(sequence,[1,2,3,4,5,0,1]);
 const s=initialState(1700000000000);s.stoves[0].job={recipeId:0,total:120,remaining:120};setGameSpeed(s,0,s.lastTick);const staff=structuredClone(s.staff),visitors=structuredClone(s.visitors);
 reconcile(s,s.lastTick+3600000);assert.equal(s.stoves[0].job.remaining,120);assert.deepEqual(s.staff,staff);assert.deepEqual(s.visitors,visitors);
 setGameSpeed(s,1,s.lastTick);reconcile(s,s.lastTick+1000);assert.equal(s.stoves[0].job.remaining,119);
});
