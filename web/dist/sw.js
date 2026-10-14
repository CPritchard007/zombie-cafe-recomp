const CACHE='zombie-cafe-offline-v57';
let caching;
async function cacheError(error){for(const client of await self.clients.matchAll())client.postMessage({type:'cache-error',message:error?.message||String(error)});}
async function coreCache(){const cache=await caches.open(CACHE),paths=await fetch('./offline-core.json').then(r=>r.json());await Promise.all(paths.map(async path=>{const response=await fetch(path);if(!response.ok)throw Error('Missing '+path);await cache.put(path,response);}));}
function cacheGame(){return caching||(caching=fillCache().finally(()=>{caching=null;}));}
async function fillCache(){
 const cache=await caches.open(CACHE),manifest=await fetch('./offline-assets.json').then(r=>r.json());
 // Two background downloads at a time; never redownload a complete pack on each visit.
 let cursor=0;
 async function next(){while(cursor<manifest.length){const path=manifest[cursor++];if(await cache.match(path))continue;try{const response=await fetch(path,{priority:'low'});if(response.ok)await cache.put(path,response);else throw Error(path);}catch(error){await cacheError(new Error('Could not cache '+path+': '+error.message));return false;}}return true;}
 const results=await Promise.all([next(),next()]);
 if(results.every(Boolean))for(const client of await self.clients.matchAll())client.postMessage('offline-ready');
}
self.addEventListener('install',event=>event.waitUntil(coreCache().then(()=>self.skipWaiting())));
self.addEventListener('activate',event=>event.waitUntil((async()=>{
 // Retain previously cached original art, then remove the obsolete app shell.
 const cache=await caches.open(CACHE);
 for(const key of await caches.keys())if(key.startsWith('zombie-cafe-offline-')&&key!==CACHE){const old=await caches.open(key);for(const request of await old.keys())if(new URL(request.url).pathname.includes('/assets/')&&!new URL(request.url).pathname.includes('/assets/startup/')&&!await cache.match(request)){const response=await old.match(request);await cache.put(request,response);}await caches.delete(key);}
 await self.clients.claim();
 for(const client of await self.clients.matchAll())client.postMessage('cache-ready');
})()));
self.addEventListener('message',event=>{if(event.data==='cache-game')event.waitUntil(cacheGame().catch(cacheError));});
self.addEventListener('fetch',event=>{
 const url=new URL(event.request.url);
 if(url.origin!==self.location.origin){event.respondWith(new Response('External networking disabled',{status:503}));return;}
 if(event.request.method!=='GET')return;
 if(url.pathname.startsWith('/api/')||url.pathname.endsWith('.php'))return;
 event.respondWith((async()=>{
  const cache=await caches.open(CACHE),cached=await cache.match(event.request);
  if(url.pathname.includes('/assets/')&&cached)return cached;
  try{const response=await fetch(event.request);if(response.ok)await cache.put(event.request,response.clone());return response;}catch{return cached||new Response('Unavailable offline',{status:503});}
 })());
});
