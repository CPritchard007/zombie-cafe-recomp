import test from 'node:test';
import assert from 'node:assert/strict';
import {virtualRange,storeItems} from '../dist/catalog.js';
test('shop window stays bounded for large catalogs and includes the final item',()=>{
 const count=5000,columns=5,height=520;
 for(const top of [0,252,12000,251000]){const r=virtualRange(count,columns,top,height);assert(r.end-r.start<=40);assert(r.start>=0);assert(r.end<=count);assert.equal(r.offset%252,0);}
 const last=virtualRange(count,columns,1000*252-height,height);assert.equal(last.end,count);assert.equal(last.height,252000);
});
test('shop window adapts to narrow screens and empty filtered results',()=>{
 assert.deepEqual(virtualRange(0,1,0,500),{start:0,end:0,offset:0,height:0});
 assert.deepEqual(virtualRange(3,2,0,500),{start:0,end:3,offset:0,height:504});
 const r=virtualRange(100,1,2520,504);assert.equal(r.start,8);assert.equal(r.end,14);
});

test('store collapses matching artwork offers without removing variants or save IDs',()=>{
 const base={original:true,type:4,name:'Plain Chair',sprites:['o0-285','o0-285','o0-105','o0-105'],premium:false,level:1,cost:75};
 const entries=[{...base,id:'premium',premium:true,cost:1},{...base,id:'later',level:2,cost:20},{...base,id:'costly',cost:100},{...base,id:'base'},{...base,id:'different-art',sprites:['o1-285']},{...base,id:'different-type',type:3},{...base,id:'legacy',original:false}];
 assert.deepEqual(storeItems(entries).map(c=>c.id),['base','different-art','different-type']);
 assert.equal(entries.length,7);assert.equal(entries[0].id,'premium');
});
