import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import {addXp} from '../dist/progression.js';
import {initialState,claim,validateSave,configureOriginalCatalog,applyStartingLayout} from '../dist/model.js';
import {advanceStaff} from '../dist/staff.js';
import {visitorPath} from '../dist/visitors.js';
const read=p=>JSON.parse(fs.readFileSync(new URL('../dist/'+p,import.meta.url)));
const recipes=read('assets/recipes.json');configureOriginalCatalog(read('assets/original/furniture-data.json').items);
test('each crossed level awards 15 vials, including several at once',()=>{
 const s=initialState();addXp(s,19);assert.equal(s.toxin,0);
 addXp(s,1);assert.equal(s.toxin,15);
 addXp(s,61);assert.equal(s.toxin,60);
 addXp(s,0);assert.equal(s.toxin,60);
});
test('goal rewards persist without replay on reload or repeated claim',()=>{
 const s=initialState();s.xp=19;s.stats.cooked=1;
 assert(claim(s,'first-batch').ok);assert.equal(s.toxin,15);
 const restored=validateSave(JSON.parse(JSON.stringify(s)),recipes);
 assert.equal(restored.toxin,15);assert.equal(claim(restored,'first-batch').ok,false);
 assert.equal(restored.toxin,15);
});
test('legacy saves do not receive retroactive rewards but earn the next level',()=>{
 const s=initialState();s.xp=39;delete s.toxin;
 const restored=validateSave(s,recipes);addXp(restored,1);assert.equal(restored.toxin,15);
});
test('delivering a cooked batch awards its crossed levels exactly once',()=>{
 const s=initialState(),z=s.staff.people[0],counter=s.furniture.find(f=>f.kind==='counter');
 s.xp=19;z.x=counter.x;z.y=counter.y+1;z.phase='dropBatch';z.timer=0;z.targetId=counter.id;
 z.batch={recipeId:recipes[0].id,quantity:12,price:1,xp:41};
 advanceStaff(s,.25,visitorPath);assert.equal(s.toxin,45);assert.equal(s.xp,60);
 advanceStaff(s,.25,visitorPath);assert.equal(s.toxin,45);
});
test('restoring the layout rewards carried batch XP only once',()=>{
 const s=initialState();s.xp=19;s.staff.people[0].batch={recipeId:recipes[0].id,quantity:12,price:1,xp:1};
 applyStartingLayout(s);assert.equal(s.toxin,15);
 applyStartingLayout(s);assert.equal(s.toxin,15);
});
