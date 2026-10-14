import test from 'node:test';
import assert from 'node:assert/strict';
import {initialState,validateSave,startCooking} from '../dist/model.js';
import {receiveFridgeFood,fridgeAction,recipeUnlocked,FRIDGE_CAPACITY} from '../dist/fridge.js';
const recipe={id:42,name:'Test stew',baseServings:20,baseSellPrice:3,baseXp:1,baseCost:5,cookMinutes:1,field_0x16:8};
test('shared fridge saves food, analyzes a dish and unlocks cooking without XP rewards',()=>{
 const s=initialState();receiveFridgeFood(s,recipe);assert.equal(fridgeAction(s,[recipe],'serve',0).ok,false);
 assert.equal(fridgeAction(s,[recipe],'analyze',0).ok,true);assert.equal(s.fridge.length,0);assert(recipeUnlocked(s,recipe));assert.equal(s.xp,0);
 assert.equal(startCooking(s,'f0',recipe,s.lastTick).ok,true);assert.deepEqual(validateSave(s,[recipe]).unlockedRecipes,[42]);
});
test('serve all transfers only known dishes, preserves portions and does not award cooking XP',()=>{
 const s=initialState(),known={...recipe,id:43,field_0x16:1};receiveFridgeFood(s,recipe);receiveFridgeFood(s,known,51);
 assert(fridgeAction(s,[recipe,known],'serveAll').ok);assert.equal(s.fridge.length,1);assert.equal(s.stock.reduce((n,b)=>n+b.quantity,0),51);assert(s.stock.every(b=>b.counterId));assert.equal(s.stats.cooked,0);assert.equal(s.xp,0);validateSave(s,[recipe,known]);
});
test('missing counters and full inventory never lose food; discard only removes selected dish',()=>{
 const s=initialState(),r={...recipe,field_0x16:1};s.furniture=s.furniture.filter(f=>f.kind!=='counter');receiveFridgeFood(s,r);const before=structuredClone(s);
 assert.equal(fridgeAction(s,[r],'serve',0).ok,false);assert.deepEqual(s,before);
 assert(fridgeAction(s,[r],'discard',0).ok);assert.equal(s.fridge.length,0);
 for(let i=0;i<FRIDGE_CAPACITY;i++)assert(receiveFridgeFood(s,r).ok);
 assert.equal(receiveFridgeFood(s,r).ok,false);assert.equal(s.fridge.length,500);
});
test('old saves remain valid and malformed fridge data is rejected',()=>{
 const s=initialState();validateSave(s,[recipe]);s.fridge=[{recipeId:42,quantity:-1,price:3}];assert.throws(()=>validateSave(s,[recipe]),/stored dish/);
 s.fridge=[];s.unlockedRecipes=[42,42];assert.throws(()=>validateSave(s,[recipe]),/analyzed/);
});
