import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import {CUSTOMER_RULES} from '../dist/customer-rules.js';
import {HUMAN_FORMS} from '../dist/human-forms.js';
import {eligibleCustomers,chooseCustomer} from '../dist/customer-selection.js';
import {configureOriginalCatalog,initialState,validateSave} from '../dist/model.js';
import {advanceVisitors} from '../dist/visitors.js';
const read=p=>JSON.parse(fs.readFileSync(new URL('../dist/'+p,import.meta.url)));
const recipes=read('assets/recipes.json');configureOriginalCatalog(read('assets/original/furniture-data.json').items);
test('full human registry retains legacy appearances and maps every ordinary native record',()=>{
 const forms=read('assets/original/characters.json').forms;
 assert.equal(HUMAN_FORMS.length,1064);
 assert.deepEqual(HUMAN_FORMS.slice(0,3).map(f=>f.name),['generic-human','oldman-human','businessman-human']);
 for(const f of HUMAN_FORMS)assert(forms.some(source=>source.id===f.id&&source.name===f.name&&source.name.endsWith('-human')));
 assert.equal(CUSTOMER_RULES.length,1724);assert.equal(eligibleCustomers(254,1).length,132);
 for(const r of eligibleCustomers(254,1))assert(HUMAN_FORMS[r.variant]);
});
test('weighted drawing reproduces each original record weight exactly',()=>{
 const pool=eligibleCustomers(20,1),total=pool.reduce((n,r)=>n+r.weight,0),counts=new Map();
 for(let ticket=0;ticket<total;ticket++){const r=chooseCustomer(20,1,(ticket+.5)/total);counts.set(r.id,(counts.get(r.id)||0)+1);}
 for(const r of pool)assert.equal(counts.get(r.id),r.weight);
});
test('level and rating gates apply to every ordinary character at their boundaries',()=>{
 for(const r of eligibleCustomers(254,1)){
  const threshold=r.minRatingByte/255;
  assert(eligibleCustomers(r.minLevel,threshold).some(c=>c.id===r.id));
  assert(!eligibleCustomers(r.minLevel-1,1).some(c=>c.id===r.id));
  if(threshold>0)assert(!eligibleCustomers(254,threshold-1e-8).some(c=>c.id===r.id));
 }
 const pool=eligibleCustomers(1000,1);
 assert(pool.every(r=>r.weight>0&&r.minLevel<255&&!r.eventOnly));
 assert(!pool.some(r=>[1100,1101,1102].includes(r.id)));
});
test('early cafés spawn ordinary people instead of unrestricted costumes',()=>{
 const pool=eligibleCustomers(2,.3),weights={};
 for(const r of pool){const name=HUMAN_FORMS[r.variant].name;weights[name]=(weights[name]||0)+r.weight;}
 assert.deepEqual(weights,{'generic-human':21,'oldman-human':8,'genericfemale-human':29,'nerd-human':18,'businessman-human':18,'firefighter-human':7,'businesswoman-human':15,'teen-human':9,'military-human':2});
});
test('spawned appearance and source record survive save validation',()=>{
 const s=initialState(1000);advanceVisitors(s,2);assert(s.visitors.people.length);
 const visitor=s.visitors.people[0],record=CUSTOMER_RULES[visitor.customerDataId];assert.equal(visitor.variant,record.variant);
 assert.deepEqual(validateSave(s,recipes).visitors.people,s.visitors.people);
 const bad=structuredClone(s);bad.visitors.people[0].customerDataId=99999;assert.throws(()=>validateSave(bad,recipes));
});
test('unrestricted-build visitors migrate to eligible native records without changing paths',()=>{
 const s=initialState(1000);advanceVisitors(s,2);const g=s.visitors.people[0];delete g.customerDataId;g.variant=1000;
 const fixed=validateSave(s,recipes).visitors.people[0];assert(eligibleCustomers(1,s.visitors.rating).some(r=>r.id===fixed.customerDataId));assert.deepEqual(fixed.path,g.path);assert.equal(fixed.x,g.x);
});
