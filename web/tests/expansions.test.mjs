import test from 'node:test';
import assert from 'node:assert/strict';
import {readFileSync} from 'node:fs';
import {CATALOG,configureOriginalCatalog,initialState,expandCafe,expansionStatus,validateSave,canPlace} from '../dist/model.js';
import {visitorPath} from '../dist/visitors.js';
const data=JSON.parse(readFileSync(new URL('../dist/assets/original/furniture-data.json',import.meta.url)));
configureOriginalCatalog(data.items);
const offers=CATALOG.filter(c=>c.kind==='expansion'&&!c.premium);
test('expansions charge original prices once, in order, without moving existing objects',()=>{
 const s=initialState();s.coins=1e7;const original=structuredClone(s.furniture);
 assert.equal(expandCafe(s,offers[1].id).ok,false);
 for(const item of offers){const before=s.coins;assert.equal(expandCafe(s,item.id).ok,true);assert.equal(s.coins,before-item.cost);assert.deepEqual(s.size,{width:item.width,height:item.height});assert.equal(expandCafe(s,item.id).ok,false);}
 assert.deepEqual(s.furniture,original);assert.deepEqual(s.size,{width:16,height:15});
 assert.equal(canPlace(s,15,14),true);assert.equal(canPlace(s,16,14),false);
 s.staff.people[0].x=15;s.staff.people[0].y=14;s.staff.people[0].path=[{x:14,y:14}];
 s.floorTiles=Object.fromEntries(Array.from({length:100},(_,i)=>[`${i%16},${Math.floor(i/16)}`,'o0-45']));
 assert.deepEqual(validateSave(s,[]).size,s.size);
 assert(visitorPath(s,{x:15,y:14},{x:14,y:14}).length>0);
});
test('unaffordable and invalid purchases leave state untouched; legacy square cafés never shrink',()=>{
 const s=initialState(),before=structuredClone(s);assert.equal(expandCafe(s,offers[0].id).ok,false);assert.deepEqual(s,before);
 assert.equal(expandCafe(s,'missing').ok,false);assert.deepEqual(s,before);
 delete s.size;s.coins=1e7;assert.equal(expansionStatus(s,offers[0]).ok,false);assert.equal(expandCafe(s,offers[1].id).ok,true);assert.deepEqual(s.size,{width:9,height:8});
});
