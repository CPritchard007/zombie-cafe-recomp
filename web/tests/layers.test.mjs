import test from 'node:test';
import assert from 'node:assert/strict';
import {CafeScene,sceneEntities} from '../dist/scene.js';
import {initialState} from '../dist/model.js';
test('chairs share normal tile depth with characters',()=>{
 const furniture=[{id:'front-chair',kind:'chair',x:6,y:6},{id:'table',kind:'table',x:2,y:2}],guests=[{id:'walker',x:1,y:1},{id:'chef',x:0,y:0},{id:'diner',x:6,y:6}];
 const entities=sceneEntities(furniture,guests);assert.deepEqual(entities.map(e=>e.f?.id??e.g.id),['chef','walker','table','front-chair','diner']);assert.deepEqual(entities.filter(e=>e.type==='guest').map(e=>e.g.id),['chef','walker','diner']);assert.equal(furniture[0].id,'front-chair');
});
test('render pass keeps floors before indoor and doorway characters',()=>{
 const events=[],image={width:96,height:150},ctx=new Proxy({drawImage:()=>events.push('floor'),measureText:()=>({width:20})},{get:(o,k)=>o[k]??(()=>{})});
 const state=initialState();const scene={state,ctx,dpr:1,width:900,height:700,scale:1,pan:{x:0,y:0},assets:{furniture:new Proxy({},{get:()=>image})},guests:[{id:'outside',x:3,y:-.75},{id:'inside',x:0,y:0},{id:'seated',x:1,y:2}],placement:{moveId:'f7'},hover:{x:3,y:3},drawOutdoors(){},paintTerrain(){},poly(){},diamond(){},label(){},drawGuest:g=>events.push('guest:'+g.id),sprite:(id)=>{events.push('sprite:'+id);return {};}};
 CafeScene.prototype.draw.call(scene,0);
 const firstGuest=events.findIndex(e=>e.startsWith('guest:')),lastFloor=events.lastIndexOf('floor'),chairDraws=events.map((e,i)=>e==='sprite:o0-285'?i:-1).filter(i=>i>=0);
 assert(firstGuest>lastFloor);assert(chairDraws.length>=2);assert(chairDraws.some(i=>i>firstGuest));assert(events.includes('guest:outside'));assert(events.includes('guest:seated'));
});
