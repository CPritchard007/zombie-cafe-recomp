import {reportError} from './diagnostics.js';
import {clampZoom} from './world.js';
// Shared by the browser and localhost HTTP adapter. Never contacts upstream services.
import {SAVE_KEY,validateSave} from './model.js';
export function respond(path,{method='GET',now=Date.now()}={}) {
 const json=(body,status=200)=>({status,body,headers:{'Content-Type':'application/json; charset=utf-8','X-ZombieCafe-Simulation':'inferred-inactive-v1'}});
 if(method!=='GET')return json({error:'unsupported_legacy_write',message:'Original acknowledgement and binary save formats are not yet verified.'},501);
 switch(path){
 case '/api/offline/status':return json({mode:'offline',protocol:'web-v1',time:Math.floor(now/1000),scenario:'inactive-events',legacyCompatibility:'partial'});
 case '/v170/jpfiles/getEntry.php':return json({entry:JSON.stringify({rwd_adways:'0',news_idx:'0'}),vip:JSON.stringify({flg:'0',rk:'0'})});
 case '/pco/zombie/azcjp/v170/getGameInfo.php':return json({hco:JSON.stringify({tiertype:0,saleid:0,mc:0,starttime:0,endtime:0,time:Math.floor(now/1000),items:[]})});
 case '/survival/azcjp/getCurrentEvent.php':return json([{survival:{eventid:'0',status:'0',title:'',description:'',theme:'0',start:'0',end:'0',interval_time:'0',position:'0',butcher:'0',totalbutcher:'0',span:'0'},milestones:[]}]);
 case '/app/setTransfer.php':case '/app/getTransfer.php':return json({code:'503',title:'Offline mode',msg:'Online device transfer is unavailable. Use the web save export and import.'});
 default:return json({error:'unverified_contract',path,message:'No verified response contract; no upstream request was made.'},501);
 }
}
// Web saves deliberately use a separate protocol from Android binary game states.
export const VIEW_KEY='zombie-cafe.view.v1';
export function normalizeView(value={}){
 return {tab:['recipes','decorate','goals','store','characters'].includes(value?.tab)?value.tab:'recipes',
 filter:value?.filter==='all'?'all':'foryou',search:typeof value?.search==='string'?value.search.slice(0,100):'',
 pan:{x:Number.isFinite(value?.pan?.x)?Math.max(-4000,Math.min(4000,value.pan.x)):0,y:Number.isFinite(value?.pan?.y)?Math.max(-4000,Math.min(4000,value.pan.y)):0},
 zoom:Number.isFinite(value?.zoom)?clampZoom(value.zoom):1,
 selectedStove:typeof value?.selectedStove==='string'?value.selectedStove:null,
 catalog:{query:typeof value?.catalog?.query==='string'?value.catalog.query.slice(0,100):'',category:typeof value?.catalog?.category==='string'?value.catalog.category:'all'}};
}
export function createOfflineService(storage,recipes,clock=Date.now){
 return {
  request(path,options={}){return respond(path,{...options,now:clock()});},
  loadView(){try{return normalizeView(JSON.parse(storage.getItem(VIEW_KEY)||'{}'));}catch(error){reportError(error,'load view preferences');return normalizeView();}},
  saveView(view){storage.setItem(VIEW_KEY,JSON.stringify(normalizeView(view)));},
  load(){const raw=storage.getItem(SAVE_KEY);return raw?validateSave(JSON.parse(raw),recipes):null;},
  save(state){validateSave(state,recipes);storage.setItem(SAVE_KEY,JSON.stringify(state));return {ok:true};}
 };
}
