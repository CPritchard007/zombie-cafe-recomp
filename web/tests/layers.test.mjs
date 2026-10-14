import test from 'node:test';
import assert from 'node:assert/strict';
import {CafeScene,sceneEntities,wallImageRect} from '../dist/scene.js';
import {initialState} from '../dist/model.js';
test('chairs share normal tile depth with characters',()=>{
 const furniture=[{id:'front-chair',kind:'chair',x:6,y:6},{id:'table',kind:'table',x:2,y:2}],guests=[{id:'walker',x:1,y:1},{id:'chef',x:0,y:0},{id:'diner',x:6,y:6}];
 const entities=sceneEntities(furniture,guests);assert.deepEqual(entities.map(e=>e.f?.id??e.g.id),['chef','walker','table','front-chair','diner']);assert.deepEqual(entities.filter(e=>e.type==='guest').map(e=>e.g.id),['chef','walker','diner']);assert.equal(furniture[0].id,'front-chair');
});
test('render pass keeps floors before indoor and doorway characters',()=>{
 const events=[],image={width:96,height:150},ctx=new Proxy({drawImage:()=>events.push('floor'),measureText:()=>({width:20})},{get:(o,k)=>o[k]??(()=>{})});
 const state=initialState();const scene={state,ctx,dpr:1,width:900,height:700,scale:1,pan:{x:0,y:0},assets:{furniture:new Proxy({},{get:()=>image})},guests:[{id:'outside',x:3,y:-.75},{id:'inside',x:0,y:0},{id:'seated',x:1,y:2}],placement:{moveId:'f7'},hover:{x:3,y:3},drawWall:()=>events.push('wall'),drawOutdoors(){},paintTerrain(){},poly(){},diamond(){},label(){},drawGuest:g=>events.push('guest:'+g.id),sprite:(id)=>{events.push('sprite:'+id);return {};}};
 CafeScene.prototype.draw.call(scene,0);
 const firstGuest=events.findIndex(e=>e.startsWith('guest:')),lastFloor=events.indexOf('wall')-1,chairDraws=events.map((e,i)=>e==='sprite:o0-285'?i:-1).filter(i=>i>=0);
 assert(firstGuest>lastFloor);assert(chairDraws.length>=2);assert(chairDraws.some(i=>i>firstGuest));assert(events.includes('guest:outside'));assert(events.includes('guest:seated'));
});

test('walls interleave with objects by ground depth, from corner to outer ends',()=>{
 const entities=sceneEntities([{id:'back',x:0,y:0},{id:'front',x:3,y:3}],[],{width:6,height:7});
 const walls=entities.filter(e=>e.type==='wall');
 assert.equal(walls.length,13);
 assert.deepEqual(walls.filter(e=>e.side==='left').map(e=>e.index),[0,1,2,3,4,5,6]);
 assert(entities.findIndex(e=>e.f?.id==='back')>entities.findIndex(e=>e.side==='left'&&e.index===0));
 assert(entities.findIndex(e=>e.f?.id==='back')<entities.findIndex(e=>e.side==='left'&&e.index===1));
 assert(entities.findIndex(e=>e.f?.id==='front')>entities.findIndex(e=>e.side==='left'&&e.index===6));
});

test('near wall section covers the preceding section side lip on both mirrored sides',()=>{
 const r=wallImageRect({width:72,height:251}),stride=48,lip=r.w*8/72;
 // Left side: previous section sits one stride to the right.
 assert(r.x+r.w>=stride+r.x+lip);
 // Right side is the exact mirror, including the overlap direction.
 assert(-(r.x+r.w)<=-stride-r.x-lip);
 assert.equal(r.x,-24);assert.equal(r.w,55.5);
 assert(r.x+r.w-(stride+r.x+lip)>1);
});
