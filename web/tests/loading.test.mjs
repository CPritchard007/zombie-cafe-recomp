import test from 'node:test';
import assert from 'node:assert/strict';
import fs from 'node:fs';
import vm from 'node:vm';
import {createFurnitureAssets,createFoodAssets,furnitureURL} from '../dist/assets.js';
import {loadCharacters} from '../dist/characters.js';
import {startupFurniture} from '../dist/scene.js';
import {initialState,configureOriginalCatalog} from '../dist/model.js';
const root=new URL('../dist/',import.meta.url),read=p=>JSON.parse(fs.readFileSync(new URL(p,root)));
configureOriginalCatalog(read('assets/original/furniture-data.json').items);
test('startup requests only visible furniture; later sprites are loaded once and shared',async()=>{
 const requests=[],assets=createFurnitureAssets(async url=>{requests.push(url);return {url};});
 const needed=startupFurniture(initialState());assert(needed.length<60);
 await Promise.all(needed.map(assets.ensure));assert.equal(requests.length,new Set(needed.map(furnitureURL)).size);
 for(const id of needed)assert(assets.furniture[id]);
 const a=assets.ensure('o1-30'),b=assets.ensure('o1-30');assert.equal(a,b);await a;
 assert.equal(requests.filter(p=>p.endsWith('/1-30.png')).length,1);
 assert.equal(assets.furniture[84],assets.furniture['o0-84']);
 for(const path of requests)assert(fs.existsSync(new URL(path,root)));
});
test('only the compact character bundle loads at startup; collection sheets are demand-loaded',async()=>{
 const saved=globalThis.fetch,requests=[],images=[];globalThis.fetch=async path=>{requests.push(path);return {ok:true,json:async()=>read(path)};};
 try{
  const characters=await loadCharacters(async path=>{images.push(path);return {path};});
  assert.equal(characters.catalog.forms.length,4);assert.equal(Object.keys(characters.animations).length,12);
  assert.deepEqual(images,['assets/startup/characters.png']);assert.equal(requests.length,2);
  const a=characters.loadCollection(),b=characters.loadCollection();assert.equal(a,b);const collection=await a;
  assert.equal(collection.catalog.forms.length,2104);assert.equal(images.length,1);
  await Promise.all([collection.ensureSheet(3),collection.ensureSheet(3)]);assert.deepEqual(images,['assets/startup/characters.png','assets/original/characters-3.png']);
  const source=read('assets/original/characters.json');for(const form of characters.catalog.forms){const original=source.forms.find(f=>f.id===form.id);for(let i=0;i<27;i++)assert.deepEqual(characters.catalog.atlases[0][form.base+i].slice(2),source.atlases[original.sheet][original.base+i].slice(2));}
 }finally{globalThis.fetch=saved;}
});
test('offline installation is small; background caching is bounded and skips cached files',async()=>{
 const listeners={},entries=new Map(),requests=[],messages=[];let busy=0,maxBusy=0;
 const key=p=>new URL(typeof p==='string'?p:p.url,'https://game.test/').href;
 const cache={match:async p=>entries.get(key(p))?.clone(),put:async(p,r)=>entries.set(key(p),r.clone()),keys:async()=>[...entries.keys()].map(url=>({url}))};
 const context={URL,Response,Promise,Error,Boolean,self:{location:{origin:'https://game.test'},addEventListener:(name,fn)=>listeners[name]=fn,skipWaiting:async()=>{},clients:{claim:async()=>{},matchAll:async()=>[{postMessage:m=>messages.push(m)}]}},caches:{open:async()=>cache,keys:async()=>[],delete:async()=>true},fetch:async p=>{requests.push(p);if(p==='./offline-core.json')return Response.json(['./index.html']);if(p==='./offline-assets.json')return Response.json(['./index.html','./a.png','./b.png','./c.png']);busy++;maxBusy=Math.max(maxBusy,busy);await new Promise(r=>setTimeout(r,2));busy--;return new Response('asset');}};
 vm.runInNewContext(fs.readFileSync(new URL('sw.js',root),'utf8'),context);
 let pending;listeners.install({waitUntil:p=>pending=p});await pending;assert.deepEqual(requests,['./offline-core.json','./index.html']);
 listeners.message({data:'cache-game',waitUntil:p=>pending=p});await pending;assert(maxBusy<=2);assert(messages.includes('offline-ready'));
 const before=requests.length;listeners.message({data:'cache-game',waitUntil:p=>pending=p});await pending;assert.equal(requests.length,before+1);
});

test('food artwork uses recipe sprite IDs, shares requests and leaves empty dishes untextured',async()=>{
 const requests=[],image={width:96,height:72};
 const assets=createFoodAssets([{id:0,field_0x14:28}],async url=>{requests.push(url);return image;});
 assert.equal(assets.food(undefined),null);
 assert.equal(assets.food(0),null);assert.equal(assets.food(0),null);
 await new Promise(resolve=>setImmediate(resolve));
 assert.equal(assets.food(0),image);
 assert.deepEqual(requests,['assets/recipes/28.png']);
});
test('new visitor forms load their original atlas on demand and share it',async()=>{
 const {HUMAN_FORMS}=await import('../dist/human-forms.js');
 const saved=globalThis.fetch,images=[];globalThis.fetch=async path=>({ok:true,json:async()=>read(path)});
 try{
  const assets=await loadCharacters(async path=>{images.push(path);return {path};});
  assert.equal(assets.human(0).form.name,'generic-human');assert.equal(images.length,1);
  const variant=HUMAN_FORMS.findIndex(f=>f.name==='genericfemale-human');
  assert.equal(assets.human(variant),null);assets.human(variant);
  await new Promise(resolve=>setImmediate(resolve));
  assert.equal(assets.human(variant).form.name,'genericfemale-human');
  assert.equal(images.length,2);
 }finally{globalThis.fetch=saved;}
});
test('recruited zombie forms load their matching atlas lazily and only once',async()=>{
 const {INFECTION_RULES}=await import('../dist/infection-rules.js');
 const saved=globalThis.fetch,images=[];globalThis.fetch=async path=>({ok:true,json:async()=>read(path)});
 try{
  const assets=await loadCharacters(async path=>{images.push(path);return {path};});
  const id=INFECTION_RULES[0].form;
  assert.equal(assets.zombie(id),null);assets.zombie(id);
  await new Promise(resolve=>setImmediate(resolve));
  assert.equal(assets.zombie(id).form.name,'generic-zombie');assert.equal(images.length,2);
 }finally{globalThis.fetch=saved;}
});
test('alternate zombie heads retain each customer body and share atlas downloads',async()=>{
 const {INFECTION_RULES}=await import('../dist/infection-rules.js');
 const saved=globalThis.fetch,images=[];globalThis.fetch=async path=>({ok:true,json:async()=>read(path)});
 try{
  const assets=await loadCharacters(async path=>{images.push(path);return {path};});
  // Both use Faris heads, but one has an old-man body and one has a nerd body.
  for(const id of [1,5])assets.zombie(INFECTION_RULES[id].form,id);
  await new Promise(resolve=>setImmediate(resolve));
  const a=assets.zombie(INFECTION_RULES[1].form,1),b=assets.zombie(INFECTION_RULES[5].form,5);
  assert.equal(a.form.name,'oldman-zombie');assert.equal(b.form.name,'nerd-zombie');
  assert.equal(a.form.headForm.name,'faris-zombie');assert.equal(b.form.headForm.name,'faris-zombie');
  for(const result of [a,b]){
   const torso=result.assets.catalog.atlases[result.form.sheet][result.form.base+5];assert(torso[2]>1&&torso[3]>1);
  }
  assert.equal(images.length,2);
 }finally{globalThis.fetch=saved;}
});
