import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import {initialState,startCooking,recipeOutput} from '../dist/model.js';
const recipes=JSON.parse(fs.readFileSync(new URL('../dist/assets/recipes.json',import.meta.url)));
test('every recipe cost, duration, batch yield and sale price matches original APK bytes',()=>{
 const bytes=fs.readFileSync(new URL('../../recovered/apk/assets/data/foodData.bin.mid',import.meta.url));let offset=1;
 assert.equal(recipes.length,bytes[0]);
 for(const r of recipes){
  const length=bytes.readUInt16BE(offset);offset+=2;
  assert.equal(r.name,bytes.subarray(offset,offset+length).toString('utf8'));offset+=length;
  const fields={baseCost:bytes.readInt16BE(offset),field_0x16:bytes.readInt8(offset+2),cookMinutes:bytes.readInt16BE(offset+3),baseServings:bytes.readInt16BE(offset+5),baseSellPrice:bytes.readInt16BE(offset+7),baseXp:bytes.readInt16BE(offset+9),field_0x14:bytes.readInt16BE(offset+11),field_0x17:bytes.readInt8(offset+13),field_0x18:bytes.readInt8(offset+14)};
  for(const [key,value] of Object.entries(fields))assert.equal(r[key],value,r.name+' '+key);
  offset+=15;
 }
 assert.equal(offset,bytes.length);
});
test('speed changes wait time, not the ingredient bill or number of portions',()=>{
 for(const speed of [0,1,2,3,4,5]){
  const s=initialState(1000);s.speed=speed;const r=recipes[0],coins=s.coins;
  assert(startCooking(s,s.stoves[0].id,r,1000).ok);
  assert.equal(coins-s.coins,8);assert.equal(s.stoves[0].job.total,120);
  assert.deepEqual(s.stoves[0].job.output,{recipeId:0,quantity:12,price:1,xp:1});
  assert.equal(startCooking(s,s.stoves[0].id,r,1000).ok,false);assert.equal(coins-s.coins,8);
 }
 for(const r of recipes)assert.deepEqual(recipeOutput(r),{recipeId:r.id,quantity:r.baseServings,price:r.baseSellPrice,xp:r.baseXp});
});
