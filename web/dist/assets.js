import {reportError} from './diagnostics.js';
// Decode small images asynchronously and share concurrent requests.
export function loadImage(src){return new Promise((resolve,reject)=>{const image=new Image();image.decoding='async';image.onload=()=>resolve(image);image.onerror=()=>reject(Error('Could not load '+src));image.src=src;});}
export async function loadJSON(url){const response=await fetch(url);if(!response.ok)throw Error('Could not load '+url);return response.json();}
export function furnitureURL(id){return 'assets/original/furniture/'+String(id).replace(/^o/,'').replace(/^(\d+)$/,'0-$1')+'.png';}
export function createFurnitureAssets(load=loadImage){
 const ready=Object.create(null),pending=new Map(),failed=new Map();
 const key=id=>String(id).startsWith('o')?String(id):'o0-'+id;
 const ensure=id=>{id=key(id);if(ready[id])return Promise.resolve(ready[id]);if(pending.has(id))return pending.get(id);
  const promise=load(furnitureURL(id)).then(image=>{ready[id]=image;failed.delete(id);return image;}).catch(error=>{failed.set(id,Date.now());reportError(error,'furniture '+id);throw error;}).finally(()=>pending.delete(id));pending.set(id,promise);return promise;
 };
 const furniture=new Proxy(ready,{get(target,id){if(typeof id!=='string')return target[id];id=key(id);if(!target[id]&&(!failed.has(id)||Date.now()-failed.get(id)>5000))ensure(id).catch(()=>{});return target[id];}});
 return {furniture,ensure};
}

// Recipe artwork already includes its plate/bowl. Load only dishes used in the café.
export function createFoodAssets(recipes,load=loadImage){
 const ready=new Map(),pending=new Map(),retry=new Map(),catalog=new Map(recipes.map(r=>[r.id,r.field_0x14]));
 function food(id){
  if(!catalog.has(id))return null;
  if(!ready.has(id)&&!pending.has(id)&&Date.now()>=(retry.get(id)||0)){
   pending.set(id,load('assets/recipes/'+catalog.get(id)+'.png').then(image=>ready.set(id,image)).catch(error=>{retry.set(id,Date.now()+5000);reportError(error,'recipe artwork '+id);}).finally(()=>pending.delete(id)));
  }
  return ready.get(id)||null;
 }
 return {food};
}
