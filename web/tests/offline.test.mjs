import {legacyState} from './legacy-fixture.mjs';
import test from 'node:test';
import assert from 'node:assert/strict';
import {readFile} from 'node:fs/promises';
import {respond,createOfflineService} from '../dist/offline-service.js';
import {initialState} from '../dist/model.js';
const recipes=JSON.parse(await readFile(new URL('../dist/assets/recipes.json',import.meta.url)));
test('entry matches the nested string JSON and numeric strings consumed by Android',()=>{
 const {body,status}=respond('/v170/jpfiles/getEntry.php');assert.equal(status,200);
 for(const [key,fields] of Object.entries({entry:['rwd_adways','news_idx'],vip:['flg','rk']})){
  assert.equal(typeof body[key],'string');const nested=JSON.parse(body[key]);
  for(const field of fields)assert.match(nested[field],/^\d+$/);
 }
});
test('shop time is deterministic and all Android-required fields exist',()=>{
 const hco=JSON.parse(respond('/pco/zombie/azcjp/v170/getGameInfo.php',{now:1800000123456}).body.hco);
 assert.equal(hco.time,1800000123);for(const k of ['tiertype','saleid','mc','starttime','endtime','time'])assert.ok(Number.isInteger(hco[k]));assert.deepEqual(hco.items,[]);
});
test('inactive survival still provides the mandatory first object and survival fields',()=>{
 const [row]=respond('/survival/azcjp/getCurrentEvent.php').body;
 for(const k of ['eventid','status','theme','start','end','interval_time','position','butcher','totalbutcher','span'])assert.match(row.survival[k],/^\d+$/);
 assert.equal(row.survival.status,'0');assert.equal(typeof row.survival.title,'string');assert.equal(typeof row.survival.description,'string');
});
test('unknown endpoints and writes never claim success; transfer cannot issue credentials',()=>{
 assert.equal(respond('/v170/getgamestate.php').status,501);
 assert.equal(respond('/v170/savegamestate.php',{method:'POST'}).status,501);
 const reply=respond('/app/getTransfer.php');assert.ok(Number(reply.body.code)>=200);assert.equal(reply.body.transferid,undefined);
});
test('web service preserves existing saves and rejects invalid replacement',()=>{
 const values=new Map();const storage={getItem:k=>values.get(k),setItem:(k,v)=>values.set(k,v)};
 const service=createOfflineService(storage,recipes,()=>123000);assert.equal(service.load(),null);
 const state=legacyState();service.save(state);assert.deepEqual(service.load(),state);
 assert.throws(()=>service.save({...state,coins:-10}));assert.deepEqual(service.load(),state);
 assert.equal(service.request('/api/offline/status').body.time,123);
});
test('offline cache manifest includes every runtime asset and every entry exists',async()=>{
 const root=new URL('../dist/',import.meta.url);const paths=JSON.parse(await readFile(new URL('offline-assets.json',root)));
 for(const p of ['app.js','model.js','scene.js','offline-service.js','styles.css','assets/recipes.json'])assert.ok(paths.includes('./'+p));
 for(const manifest of ['offline-assets.json','offline-core.json']){
  for(const p of JSON.parse(await readFile(new URL(manifest,root)))){
   assert(!p.replace(/^\.\//,'').split('/').some(part=>part.startsWith('.')),manifest+' contains hidden file: '+p);
   await readFile(new URL(p==='./'?'index.html':p,root));
  }
 }
});
test('local storage restores game memory and view preferences across service instances',()=>{
 const values=new Map(),storage={getItem:k=>values.get(k),setItem:(k,v)=>values.set(k,v)};
 const first=createOfflineService(storage,recipes);const state=legacyState();state.muted=false;
 first.save(state);first.saveView({tab:'decorate',filter:'all',search:'soup',zoom:1.4,selectedStove:'f2'});
 const reopened=createOfflineService(storage,recipes);
 assert.equal(reopened.load().muted,false);
 assert.deepEqual(reopened.loadView(),{tab:'decorate',filter:'all',search:'soup',zoom:1.4,pan:{x:0,y:0},selectedStove:'f2',catalog:{query:'',category:'all'}});
 first.saveView({tab:'invalid',zoom:500});assert.equal(reopened.loadView().tab,'recipes');assert.equal(reopened.loadView().zoom,2.25);
});
test('storage write failures are reported rather than returning a successful save',()=>{
 const service=createOfflineService({getItem:()=>null,setItem:()=>{throw Error('Storage full');}},recipes);
 assert.throws(()=>service.save(legacyState()),/Storage full/);
 assert.throws(()=>service.saveView({}),/Storage full/);
});
