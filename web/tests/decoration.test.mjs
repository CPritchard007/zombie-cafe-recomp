import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import {initialState,configureOriginalCatalog,CATALOG,validateSave,applyStartingLayout} from '../dist/model.js';
import {wallDecor,floorSprite,wallSprite} from '../dist/surfaces.js';
import {applySurfacePaint,applyDecorationMove,placeWallDecoration,sellDecoration,saleOffer,moveSurface} from '../dist/decoration.js';
import {createDecorationUI} from '../dist/decoration-ui.js';
import {CafeScene,iso} from '../dist/scene.js';
configureOriginalCatalog(JSON.parse(fs.readFileSync(new URL('../dist/assets/original/furniture-data.json',import.meta.url))).items);
const finish=kind=>CATALOG.find(c=>c.kind===kind&&!c.premium&&c.level===1&&c.sprite!==(kind==='floor'?'o0-45':'o0-66'));
test('surface purchases affect only painted cells and charge each changed cell once',()=>{
 const s=initialState();s.coins=10000;const f=finish('floor'),before=floorSprite(s,4,4);
 assert(applySurfacePaint(s,f,[{x:4,y:3},{x:4,y:3},{x:3,y:3}]).ok);
 assert.equal(s.coins,10000-2*f.cost);assert.equal(floorSprite(s,4,4),before);
 assert.equal(floorSprite(s,4,3),f.sprite);assert.equal(Object.keys(s.floorTiles).length,2);
 const w=finish('wall');assert(applySurfacePaint(s,w,[{side:'right',index:2}]).ok);
 assert.equal(wallSprite(s,'right',2),w.sprite);assert.equal(wallSprite(s,'left',2),'o0-66');
 assert.deepEqual(validateSave(s,[]).floorTiles,s.floorTiles);
 const snapshot=structuredClone(s);assert.equal(applySurfacePaint(s,f,[{x:99,y:0}]).ok,false);assert.deepEqual(s,snapshot);
 s.coins=0;const broke=structuredClone(s);assert.equal(applySurfacePaint(s,f,[{x:4,y:4}]).ok,false);assert.deepEqual(s,broke);
});
test('windows migrate, move across walls, reject collisions and door, and survive reload',()=>{
 const s=initialState(),before=wallDecor(s);assert.equal(before.length,2);
 assert.equal(applyDecorationMove(s,'w0',{side:'left',index:1}).ok,false);
 assert.equal(applyDecorationMove(s,'w0',{side:'right',index:3}).ok,false);
 assert(applyDecorationMove(s,'w0',{side:'right',index:2}).ok);
 assert.equal(wallDecor(validateSave(s,[]))[0].side,'right');
 const item=CATALOG.find(c=>c.id==='original-5');
 assert(placeWallDecoration(s,item,'left',3).ok);assert.equal(wallDecor(s).length,3);
 assert.equal(placeWallDecoration(s,item,'left',3).ok,false);
 assert(validateSave(s,[]));
});
test('sales use the native half-price rate and protect active kitchen and diners',()=>{
 const s=initialState(),plant=s.furniture.find(f=>f.kind==='plant'),coins=s.coins;
 assert.equal(saleOffer(s,plant.id).coins,2);assert(sellDecoration(s,plant.id).ok);assert.equal(s.coins,coins+2);
 assert.equal(sellDecoration(s,plant.id).ok,false);
 assert.equal(sellDecoration(s,s.stoves[0].id).ok,false);
 const counter=s.furniture.find(f=>f.kind==='counter');s.stock.push({counterId:counter.id});
 assert.equal(sellDecoration(s,counter.id).ok,false);s.stock=[];
 s.staff.people[0].deliveryCounterId=counter.id;assert.equal(sellDecoration(s,counter.id).ok,false);delete s.staff.people[0].deliveryCounterId;
 assert.equal(saleOffer(s,'w0').coins,25);assert(sellDecoration(s,'w0').ok);assert.equal(wallDecor(s).length,1);
 assert(validateSave(s,[]));
});
test('surface moves swap finishes and malformed surface saves fail validation',()=>{
 const s=initialState(),before=floorSprite(s,0,0),other=floorSprite(s,4,4);
 assert(moveSurface(s,{kind:'floor',x:0,y:0},{x:4,y:4}).ok);
 assert.equal(floorSprite(s,4,4),before);assert.equal(floorSprite(s,0,0),other);assert(validateSave(s,[]));
 for(const bad of [{floorTiles:{'99,0':'o0-45'}},{wallTiles:{'left,99':'o0-66'}},{wallDecor:[{id:'w0',kind:'wallArt',catalogId:'original-5',sprite:'o0-267',side:'right',index:3}]}])assert.throws(()=>validateSave({...s,...bad},[]));
 applyStartingLayout(s);assert.equal(s.floorTiles,undefined);assert.equal(s.wallDecor,undefined);
});
test('editor previews and rotations are reversible and never mutate the save until Apply',()=>{
 const s=initialState(),scene={},nodes=new Map();
 const element=()=>({hidden:true,innerHTML:'',setAttribute(){},addEventListener(type,handler){this[type]=handler;}});
 globalThis.document={querySelector:selector=>{if(!nodes.has(selector))nodes.set(selector,element());return nodes.get(selector);},addEventListener(){}};
 let commits=0;const editor=createDecorationUI({scene,getState:()=>s,onCommit:()=>commits++,onMessage(){},onStart(){}});
 const panel=nodes.get('#decor-tools'),click=action=>panel.click({target:{closest:()=>({dataset:{decor:action}})}});
 const before=structuredClone(s);editor.move('w0');scene.onEditPoint({wall:{side:'right',index:2}});
 assert.equal(wallDecor(scene.editState)[0].side,'right');assert.deepEqual(s,before);
 click('cancel');assert.equal(scene.editState,null);assert.deepEqual(s,before);assert.equal(commits,0);
 const chair=s.furniture.find(f=>f.kind==='chair');editor.move(chair.id);click('rotate');assert.notEqual(scene.editState.furniture.find(f=>f.id===chair.id).direction,chair.direction);
 click('cancel');assert.deepEqual(s,before);
 editor.buy(finish('floor'));scene.onEditPoint({cell:{x:4,y:4}});assert.deepEqual(s,before);click('cancel');assert.deepEqual(s,before);
 editor.move('w0');scene.onEditPoint({wall:{side:'right',index:2}});click('apply');assert.equal(commits,1);assert.equal(wallDecor(s)[0].side,'right');
 editor.close();assert.equal(scene.editing,false);delete globalThis.document;
});
test('wall hit testing targets both sides and empty floor tiles',()=>{
 const s=initialState(),scene={state:s,hit:()=>null,cellAt:()=>({x:4,y:4})};
 for(const side of ['left','right']){const p=side==='left'?iso(-.5,2):iso(2,-.5);scene.worldPoint=()=>({x:p.x,y:p.y-70});assert.deepEqual(CafeScene.prototype.editHit.call(scene,{}).wall,{side,index:2});}
 scene.worldPoint=()=>iso(4,4);assert.equal(CafeScene.prototype.editHit.call(scene,{}).kind,'floor');
});
test('wall decorations remain clickable beneath overlapping character hitboxes',()=>{
 const scene={state:initialState(),worldPoint:()=>({x:10,y:10}),hitboxes:[{id:'w0',x:0,y:0,w:30,h:40},{id:'customer-1',x:0,y:0,w:100,h:100}]};
 assert.equal(CafeScene.prototype.hit.call(scene,{}).id,'w0');
 scene.worldPoint=()=>({x:50,y:50});assert.equal(CafeScene.prototype.hit.call(scene,{}).id,'customer-1');
});
test('a single click on an empty wall opens its editor while door clicks keep working',()=>{
 let selected=null,doors=0;
 const wall={kind:'wall',side:'right',index:1,wall:{side:'right',index:1}};
 const scene={cellAt:()=>({x:0,y:-2}),hit:()=>null,editHit:()=>wall,onEdit:p=>selected=p,onDoor:()=>doors++,onSelect:()=>assert.fail('Wall should open its editor')};
 CafeScene.prototype.handleClick.call(scene,{});assert.equal(selected,wall);
 scene.hit=()=>({id:'door'});CafeScene.prototype.handleClick.call(scene,{});assert.equal(doors,1);
});
