import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import {characterAnimation,createAnimationPlayer,handoffDuration,pose,drawCharacter} from '../dist/characters.js';
const animations=JSON.parse(fs.readFileSync(new URL('../dist/assets/startup/animations.json',import.meta.url)));
const zombie={id:'zombie-1',staff:true,t:900,north:false,flip:false,phase:'idle',moving:false};
test('every staff task uses an available clip and each handoff starts at frame zero',()=>{
 for(const north of [false,true])for(const phase of ['pickup','serve','clear','wash','returnFood','collectBatch','dropBatch']){
  const g={...zombie,north,action:{phase,startedAt:900,north,flip:true}},a=characterAnimation(g);
  assert(animations[a.clip]);assert.equal(a.seconds,0);assert.equal(a.loop,false);assert.equal(a.flip,true);
  assert.equal(handoffDuration(north),animations[a.clip].frames/animations[a.clip].fps);
  assert.equal(characterAnimation({...g,t:900+.5}).clip,a.clip);
 }
 for(const phase of ['idle','roam','counter','deliver','returnCounter','table','sink']){
  const a=characterAnimation({...zombie,phase,moving:phase!=='idle',carrying:phase==='deliver'?{}:null,dishes:phase==='sink'});assert(animations[a.clip]);
 }
});
test('locomotion resets its clock on transition and stationary carriers do not walk in place',()=>{
 const player=createAnimationPlayer();assert.equal(player.sample(zombie).seconds,0);
 assert.equal(player.sample({...zombie,t:901}).seconds,1);
 assert.equal(player.sample({...zombie,t:901,moving:true}).seconds,0);
 assert.equal(player.sample({...zombie,t:901.25,moving:true}).seconds,.25);
 const holding=player.sample({...zombie,t:903,carrying:{}});assert.equal(holding.clip,'carrySW');assert.equal(holding.seconds,0);
});
test('one-shot poses clamp at the end rather than looping or starting at an arbitrary lifetime frame',()=>{
 const a=animations.serveNW;assert.deepEqual(pose(a,100,false),pose(a,(a.frames-1)/a.fps,false));assert.deepEqual(pose(a,-1,false),pose(a,0,false));
});
test('carried props use the animated attachment and native layer order, in both directions',()=>{
 const catalog=JSON.parse(fs.readFileSync(new URL('../dist/assets/startup/characters.json',import.meta.url))),prop={},sheet={};
 for(const clip of ['carrySW','carryNW','serveSW','serveNW']){
  const calls=[],ctx=new Proxy({drawImage:(...args)=>calls.push(['draw',...args]),translate:(...args)=>calls.push(['translate',...args])},{get:(o,k)=>o[k]??(()=>{})});
  drawCharacter(ctx,{catalog,animations,sheets:[sheet]},catalog.forms[3],clip,.2,0,0,.19,false,{prop});
  const i=calls.findIndex(c=>c[0]==='draw'&&c[1]===prop),anchor=pose(animations[clip],.2).find(n=>n.sprite===0);
  assert(i>0);assert.deepEqual(calls[i-1],['translate',anchor.matrix[4],anchor.matrix[5]]);assert.equal(calls.filter(c=>c[0]==='draw'&&c[1]===prop).length,1);
 }
});
