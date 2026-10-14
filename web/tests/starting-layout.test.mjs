import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import {initialState,applyStartingLayout,validateSave,canPlace,entranceAccess,configureOriginalCatalog} from '../dist/model.js';
import {startingFloor,startingWall} from '../dist/starting-layout.js';
import {CafeScene} from '../dist/scene.js';
import {MIN_ZOOM,MAX_ZOOM} from '../dist/world.js';
import {legacyState} from './legacy-fixture.mjs';
const read=p=>JSON.parse(fs.readFileSync(new URL('../dist/assets/'+p,import.meta.url)));
const recipes=read('recipes.json');configureOriginalCatalog(read('original/furniture-data.json').items);
test('original starter uses native positions, original art, one empty stove and a usable entrance',()=>{
 const s=initialState();assert.deepEqual(s.size,{width:6,height:7});assert.equal(s.furniture.length,8);assert.equal(s.stoves.length,1);assert.equal(s.stoves[0].job,null);
 assert.deepEqual(s.furniture.map(f=>[f.catalogId,f.x,f.y]),[['original-1',0,6],['original-2',0,4],['original-0',0,3],['original-6',5,6],['original-16',2,4],['original-16',3,4],['original-3',2,2],['original-4',1,2]]);
 assert(entranceAccess(s).canServe);assert.equal(canPlace(s,6,0),false);assert.equal(canPlace(s,0,7),false);assert.deepEqual(validateSave(s,recipes),s);
 for(let x=0;x<6;x++)for(let y=0;y<7;y++)assert(fs.existsSync(new URL('../dist/assets/original/furniture/0-'+startingFloor(x,y)+'.png',import.meta.url)));
 for(const side of ['left','right'])for(let i=0;i<(side==='left'?7:6);i++)assert(fs.existsSync(new URL('../dist/assets/original/furniture/0-'+startingWall(side,i)+'.png',import.meta.url)));
});
test('applying the original layout preserves balances and progression; legacy layouts remain loadable',()=>{
 const s=legacyState();s.coins=1234;s.xp=73;s.stock=[{recipeId:0,quantity:2,price:recipes[0].baseSellPrice}];const before=structuredClone(s);assert.deepEqual(validateSave(before,recipes),before);
 applyStartingLayout(s);assert.equal(s.coins,1234);assert.equal(s.xp,73);assert.deepEqual(s.stock,before.stock);assert.deepEqual(validateSave(s,recipes),s);
});
test('zoom respects min/max, preserves the point beneath the gesture and eases button changes',()=>{
 const camera={width:900,height:700,zoom:1,targetZoom:1,pan:{x:0,y:0},zoomAt:CafeScene.prototype.zoomAt};const anchor={x:200,y:160};
 const world=()=>({x:(anchor.x-450-camera.pan.x)/camera.zoom,y:(anchor.y-359-camera.pan.y)/camera.zoom});const before=world();
 camera.zoomAt(999,anchor);assert.equal(camera.zoom,MAX_ZOOM);assert.deepEqual(world(),before);camera.zoomAt(.001,anchor);assert.equal(camera.zoom,MIN_ZOOM);assert(Math.abs(world().x-before.x)<1e-9);
 camera.targetZoom=1;camera.zoomAnchor=anchor;let previous=camera.zoom;for(let i=0;i<60;i++){CafeScene.prototype.updateZoom.call(camera,1/60);assert(camera.zoom>=previous&&camera.zoom<=1);previous=camera.zoom;}assert(Math.abs(camera.zoom-1)<.001);
});
test('panning keeps tile picking aligned with the shifted map',()=>{
 const camera={width:900,height:700,scale:1.2,pan:{x:0,y:0},canvas:{getBoundingClientRect:()=>({left:0,top:0})}};
 const before=CafeScene.prototype.worldPoint.call(camera,{clientX:300,clientY:300});
 CafeScene.prototype.panBy.call(camera,180,-90);
 assert.deepEqual(CafeScene.prototype.worldPoint.call(camera,{clientX:480,clientY:210}),before);
 CafeScene.prototype.panBy.call(camera,1e9,-1e9);assert.deepEqual(camera.pan,{x:4000,y:-4000});
});
test('dragging and pinching never select or place furniture, while a tap still selects',()=>{
 const names=['ResizeObserver','requestAnimationFrame','matchMedia','devicePixelRatio'],saved=names.map(n=>globalThis[n]);
 globalThis.ResizeObserver=class{observe(){}};globalThis.requestAnimationFrame=()=>0;globalThis.matchMedia=()=>({matches:false});globalThis.devicePixelRatio=1;
 try{
  const handlers={},canvas={style:{},getContext:()=>({}),getBoundingClientRect:()=>({left:0,top:0,width:900,height:700}),setPointerCapture(){},addEventListener(n,f){(handlers[n]??=[]).push(f);}};
  let selected=0,placed=0,remembered=0;
  const scene=new CafeScene(canvas,initialState(),{},()=>selected++,()=>placed++,()=>{},()=>{},()=>remembered++);
  const event=(name,id,x,y)=>{for(const f of handlers[name]||[])f({pointerId:id,clientX:x,clientY:y,button:0,pointerType:'touch'});};
  event('pointerdown',1,300,300);event('pointermove',1,304,302);assert.deepEqual(scene.pan,{x:0,y:0});event('pointermove',1,420,350);event('pointerup',1,420,350);event('click',1,420,350);
  assert.deepEqual(scene.pan,{x:120,y:50});assert.equal(selected,0);assert.equal(remembered,1);
  scene.placement={itemId:'chair'};event('pointerdown',1,300,300);event('pointermove',1,400,300);event('pointerup',1,400,300);event('click',1,400,300);assert.equal(placed,0);scene.placement=null;
  event('pointerdown',1,300,300);event('pointerdown',2,400,300);event('pointermove',2,500,300);assert.equal(scene.zoom,2);event('pointerup',2,500,300);event('pointerup',1,300,300);event('click',1,300,300);assert.equal(selected,0);
  event('pointerdown',1,300,300);event('pointerup',1,300,300);event('click',1,300,300);assert.equal(selected,1);
 }finally{names.forEach((n,i)=>{if(saved[i]===undefined)delete globalThis[n];else globalThis[n]=saved[i];});}
});
test('normal pan and zoom reuse the terrain cache rather than rebuilding it every frame',()=>{
 const previous=globalThis.document;let created=0;
 const ctx={save(){},restore(){},translate(){},scale(){},fillRect(){},drawImage(){}};
 globalThis.document={createElement(){created++;return {getContext:()=>ctx};}};
 try{
  const scene={width:900,height:700,dpr:1,scale:1,pan:{x:0,y:0},ctx,assets:{furniture:{}},paintTerrain:CafeScene.prototype.paintTerrain};
  CafeScene.prototype.drawOutdoors.call(scene);assert.equal(created,1);
  scene.pan={x:100,y:50};scene.scale=1.2;CafeScene.prototype.drawOutdoors.call(scene);assert.equal(created,1);
  scene.pan.x=2000;CafeScene.prototype.drawOutdoors.call(scene);assert.equal(created,2);
 }finally{if(previous===undefined)delete globalThis.document;else globalThis.document=previous;}
});
