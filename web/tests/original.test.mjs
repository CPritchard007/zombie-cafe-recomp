import {legacyState} from './legacy-fixture.mjs';
import {CafeScene,iso} from '../dist/scene.js';
import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import {pose,multiply,facingForMovement} from '../dist/characters.js';
import {furnitureRotation,furniturePose,rotateFurniture,configureOriginalCatalog,CATALOG,place,validateSave,furnitureImage} from '../dist/model.js';
const read=n=>JSON.parse(fs.readFileSync(new URL('../dist/assets/'+n,import.meta.url)));
const furniture=read('original/furniture-data.json'),characters=read('original/characters.json'),animations=read('original/animations.json'),recipes=read('recipes.json');
configureOriginalCatalog(furniture.items);
test('all 835 store records have art; all character forms have complete 27-part blocks',()=>{
 assert.equal(furniture.items.length,835);assert.equal(characters.forms.length,2104);
 for(const item of CATALOG.filter(c=>c.original))assert.ok(fs.existsSync(new URL('../dist/'+furnitureImage(item),import.meta.url)),item.name);
 for(const f of characters.forms){assert.equal(f.parts,27);assert.ok(f.base+27<=characters.atlases[f.sheet].length);}
});
test('all 85 native animations evaluate every frame without missing parents or invalid matrices',()=>{
 assert.equal(Object.keys(animations).length,85);
 for(const a of Object.values(animations))for(let frame=0;frame<a.frames;frame++){
  const nodes=pose(a,(frame+.1)/a.fps);for(const n of nodes){assert.ok(n.matrix.every(Number.isFinite));assert.ok(n.sprite<27);}
 }
 assert.deepEqual(multiply([1,0,0,1,10,20],[1,0,0,1,2,3]),[1,0,0,1,12,23]);
});
test('original furniture charges its source price, saves and honors level restrictions',()=>{
 const s=legacyState();assert.equal(s.speed,1);assert.ok(place(s,'original-6',7,6).ok);assert.equal(s.coins,645);
 assert.equal(s.furniture.at(-1).sprite,'o0-274');assert.deepEqual(validateSave(s,recipes),s);
 const locked=CATALOG.find(c=>c.original&&c.level>1&&!c.premium&&c.kind==='table');assert.equal(place(s,locked.id,7,5).ok,false);
});
test('floors use original artwork and purchase price without occupying a furniture cell',()=>{
 const s=legacyState(),item=CATALOG.find(c=>c.original&&c.kind==='floor'&&c.level===1&&!c.premium&&c.cost<=s.coins),count=s.furniture.length;
 assert.ok(place(s,item.id,0,0).ok);assert.equal(s.floor,item.sprite);assert.equal(s.furniture.length,count);assert.equal(s.coins,650-item.cost);assert.deepEqual(validateSave(s,recipes),s);
});

test('walking faces each projected grid direction and preserves facing at rest',()=>{
 // Positive x projects southeast; positive y projects southwest.
 assert.deepEqual(facingForMovement(1,0),{north:false,flip:true});
 assert.deepEqual(facingForMovement(0,1),{north:false,flip:false});
 assert.deepEqual(facingForMovement(-1,0),{north:true,flip:false});
 assert.deepEqual(facingForMovement(0,-1),{north:true,flip:true});
 const previous={north:true,flip:true};assert.equal(facingForMovement(0,0,previous),previous);
 assert.deepEqual(facingForMovement(.03,0),{north:false,flip:true});
});

test('rendered visitors retain simulation facing without changing saved positions',()=>{
 const guest={id:1,x:3,y:3,t:0,path:[{x:4,y:3}],phase:'seating',north:false,flip:true};
 const scene={reduced:false,last:1000,guests:[],state:{visitors:{people:[guest]}}};
 CafeScene.prototype.animateGuests.call(scene,.05);
 assert.equal(scene.guests[0].flip,true);assert.equal(guest.x,3);
});

test('chairs cycle four distinct views and preserve seating directions through saves',()=>{
 const s=legacyState(),chair=s.furniture.find(f=>f.kind==='chair');chair.direction=0;
 const views=[],directions=[];
 for(let i=0;i<4;i++){assert.equal(furnitureRotation(chair).count,4);views.push(JSON.stringify(furniturePose(chair)));directions.push(chair.direction);assert.ok(rotateFurniture(chair).ok);}
 assert.equal(new Set(views).size,4);assert.deepEqual(directions,[0,2,1,3]);assert.equal(chair.direction,0);
 assert.deepEqual(validateSave(s,recipes).furniture,s.furniture);
});
test('two-direction appliances skip absent back artwork; fixed decor cannot rotate',()=>{
 const s=legacyState(),stove=s.furniture.find(f=>f.kind==='stove'),plant=s.furniture.find(f=>f.sprite===331);
 assert.equal(furnitureRotation(stove).count,2);
 const first=furniturePose(stove);rotateFurniture(stove);assert.notDeepEqual(furniturePose(stove),first);rotateFurniture(stove);assert.deepEqual(furniturePose(stove),first);
 assert.equal(furnitureRotation(plant).count,1);assert.equal(rotateFurniture(plant).ok,false);
});
