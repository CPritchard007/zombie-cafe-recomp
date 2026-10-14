import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import vm from 'node:vm';
function worker(respond){
 const entries=new Map(),messages=[],attempts=new Map(),listeners={};
 const cache={match:async p=>entries.get(p),put:async(p,r)=>entries.set(p,r)};
 const context={URL,Response,Promise,Error,Boolean,setTimeout:fn=>{fn();},self:{addEventListener:(n,fn)=>listeners[n]=fn,clients:{matchAll:async()=>[{postMessage:m=>messages.push(m)}]}},caches:{open:async()=>cache},fetch:async(p,options)=>{
  if(p==='./offline-assets.json')return Response.json(['./a.png','./b.png','./c.png']);
  attempts.set(p,(attempts.get(p)||0)+1);return respond(p,attempts.get(p),options);
 }};
 vm.runInNewContext(fs.readFileSync(new URL('../dist/sw.js',import.meta.url),'utf8'),context);
 return {entries,messages,attempts,run:async()=>{let pending;listeners.message({data:'cache-game',waitUntil:p=>pending=p});await pending;}};
}
test('temporary HTTP failure retries without raising an error or losing remaining assets',async()=>{
 const w=worker((p,n,options)=>{if(p==='./a.png'&&n===1)return new Response('',{status:503});if(p==='./a.png')assert.equal(options.cache,'reload');return new Response('image');});
 await w.run();assert.equal(w.entries.size,3);assert.equal(w.attempts.get('./a.png'),2);assert.deepEqual(w.messages,['offline-ready']);
});
test('persistent missing asset reports status, continues downloads, and resumes without redownloading successes',async()=>{
 let missing=true;const w=worker(p=>p==='./a.png'&&missing?new Response('',{status:404}):new Response('image'));
 await w.run();assert.equal(w.entries.size,2);assert.equal(w.attempts.get('./a.png'),3);assert.equal(w.messages[0].type,'cache-error');assert.match(w.messages[0].message,/a\.png: HTTP 404/);assert(!w.messages.includes('offline-ready'));
 missing=false;await w.run();assert.equal(w.entries.size,3);assert.equal(w.attempts.get('./b.png'),1);assert.equal(w.messages.at(-1),'offline-ready');
});
