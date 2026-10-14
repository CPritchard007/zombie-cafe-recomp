import {CATALOG,expansionStatus,furnitureRotation,furnitureImage,levelOf} from './model.js';
import {drawCharacter} from './characters.js';
const esc=s=>String(s).replace(/[&<>"']/g,c=>({'&':'&amp;','<':'&lt;','>':'&gt;','"':'&quot;',"'":'&#39;'}[c]));
const categories={all:'All',0:'Decorations',1:'Stoves',2:'Counters',3:'Tables',4:'Chairs',5:'Walls',6:'Windows',7:'Floors',8:'Fridges',9:'Dividers',10:'Toxin',11:'Sinks',12:'Expansions',13:'Special decor',14:'Tombstones',15:'Piggy bank',16:'Ampoules',17:'Planters'};
// The recovered catalog includes tint variants and alternate currency offers.
// Until tint rendering is supported, expose one card per named artwork set.
// Keep CATALOG intact: placed furniture and old saves still reference every ID.
export function storeItems(catalog=CATALOG){
 const unique=new Map();
 for(const item of catalog){
  if(!item.original)continue;
  const key=JSON.stringify([item.type,item.name.trim().toLowerCase(),item.sprites||[item.sprite]]),prior=unique.get(key);
  if(!prior||Number(item.premium)-Number(prior.premium)<0||item.premium===prior.premium&&(item.level<prior.level||item.level===prior.level&&item.cost<prior.cost))unique.set(key,item);
 }
 return [...unique.values()];
}
export function createCatalog({container,storeDialog,assets,getState,onBuy,onClose,onRemember,preferences={}}){
 let characterAssets=null,opening=0;
 let mode='store',query=typeof preferences.query==='string'?preferences.query:'',category=String(preferences.category||'all'),page=0,frame;
 const pageSize=20;
 const remember=()=>onRemember({query,category});
 async function open(next){mode=next;if(mode==='store'){opening++;openStore();return;}closeStore();page=0;const request=++opening;if(mode==='characters'&&!characterAssets){container.innerHTML='<button id="catalog-close" class="original-panel-close" aria-label="Close panel">×</button><p role="status">Loading character collection…</p>';container.querySelector('#catalog-close').onclick=()=>{opening++;onClose();};try{characterAssets=await assets.characters.loadCollection();}catch{if(request===opening)container.innerHTML='<p role="status">Could not load the collection. Close and reopen to retry.</p>';return;}if(request!==opening)return;}render();}
 function render(){
  cancelAnimationFrame(frame);const state=getState();
  let list=mode==='store'?storeItems().filter(c=>category==='all'||String(c.type)===category):characterAssets.catalog.forms;
  list=list.filter(c=>c.name.toLowerCase().includes(query.toLowerCase()));page=Math.max(0,Math.min(page,Math.ceil(list.length/pageSize)-1));const slice=list.slice(page*pageSize,(page+1)*pageSize);
  container.innerHTML=`<button class="original-panel-close" id="catalog-close" aria-label="Close panel">×</button><div class="panel-heading"><h2>${mode==='store'?'Store':'Character collection'}</h2></div><div class="catalog-filter"><input id="catalog-search" type="search" aria-label="Search ${mode==='store'?'furniture':'characters'}" placeholder="Search…" value="${esc(query)}">${mode==='store'?`<select id="catalog-category" aria-label="Furniture category">${Object.entries(categories).map(([id,name])=>`<option value="${id}" ${id===category?'selected':''}>${name}</option>`).join('')}</select>`:''}</div><p class="catalog-count">${list.length} ${mode==='store'?'original store entries':'original art forms'} · ${mode==='store'?'Coins '+state.coins+' · Toxin '+(state.toxin||0):'Human, zombie and costume variants'}</p><div class="catalog-grid">${slice.map(c=>mode==='store'?`<article class="catalog-card"><img src="${furnitureImage(c)}" alt="" loading="lazy"><strong>${esc(c.name)}</strong><p>${c.cost} ${c.premium?'toxin':'coins'} · Level ${c.level}</p>${['chair','table','stove','counter','fridge','plant','lamp','divider','sink'].includes(c.kind)?`<p>${furnitureRotation(c).count===1?'Fixed orientation':furnitureRotation(c).count+' rotation directions'}</p>`:''}<button data-original-buy="${c.id}" ${c.level>levelOf(state)||c.premium||c.kind==='special'||c.cost>state.coins?'disabled':''}>${c.level>levelOf(state)?'Locked':c.premium?'Toxin unavailable':c.kind==='special'?'Not yet implemented':'Buy'}</button></article>`:`<article class="catalog-card"><canvas class="character-preview" width="220" height="190" data-form="${esc(c.id)}" aria-label="${esc(c.name)} animated preview"></canvas><strong>${esc(c.name.replaceAll('-',' '))}</strong></article>`).join('')}</div><div class="pager"><button id="catalog-prev" ${page===0?'disabled':''}>←</button><span>${page+1} / ${Math.max(1,Math.ceil(list.length/pageSize))}</span><button id="catalog-next" ${(page+1)*pageSize>=list.length?'disabled':''}>→</button></div>`;
  container.querySelector('#catalog-close').onclick=onClose;
  container.querySelector('#catalog-search').oninput=e=>{const focus=e.target.selectionStart;query=e.target.value;page=0;remember();render();const input=container.querySelector('#catalog-search');input.focus();try{input.setSelectionRange(focus,focus);}catch{}};
  const selector=container.querySelector('#catalog-category');if(selector)selector.onchange=e=>{category=e.target.value;page=0;remember();render();};
  container.querySelector('#catalog-prev').onclick=()=>{page--;render();};container.querySelector('#catalog-next').onclick=()=>{page++;render();};
  container.querySelectorAll('[data-original-buy]').forEach(b=>b.onclick=()=>onBuy(CATALOG.find(c=>c.id===b.dataset.originalBuy)));
  if(mode==='characters'){
   for(const sheet of new Set(slice.map(f=>f.sheet)))characterAssets.ensureSheet(sheet).catch(()=>{});
   const previews=[...container.querySelectorAll('canvas')].map(canvas=>({canvas,form:slice.find(f=>f.id===canvas.dataset.form)}));
   const animate=time=>{if(container.closest('[hidden]')||!container.querySelector('canvas'))return;for(const {canvas,form} of previews){const ctx=canvas.getContext('2d');ctx.clearRect(0,0,220,190);drawCharacter(ctx,characterAssets,form,'idleSW',matchMedia('(prefers-reduced-motion: reduce)').matches?0:time/1000,110,178,.32);}frame=requestAnimationFrame(animate);};frame=requestAnimationFrame(animate);
  }
 }
 let storeResize,storeFrame,storeList=[],storeColumns=1,storeRange='',storeScroll=0;
 const rowHeight=252;
 function closeStore(){if(storeDialog.open)storeDialog.close();}
 storeDialog.addEventListener('close',()=>{storeResize?.disconnect();cancelAnimationFrame(storeFrame);storeScroll=storeDialog.querySelector('.store-viewport')?.scrollTop||0;});
 storeDialog.addEventListener('click',e=>{if(e.target===storeDialog){const r=storeDialog.getBoundingClientRect();if(e.clientX<r.left||e.clientX>r.right||e.clientY<r.top||e.clientY>r.bottom)closeStore();}});
 function openStore(){
  storeResize?.disconnect();cancelAnimationFrame(storeFrame);
  storeDialog.innerHTML=`<header class="store-header"><div><span class="eyebrow">MAKE YOURSELF AT HOME</span><h2 id="store-title">Store</h2></div><button class="original-panel-close" aria-label="Close store">×</button></header><div class="catalog-filter"><input type="search" id="store-search" aria-label="Search furniture" placeholder="Search furniture…" value="${esc(query)}"><select id="store-category" aria-label="Furniture category">${Object.entries(categories).map(([id,name])=>`<option value="${id}" ${id===category?'selected':''}>${name}</option>`).join('')}</select></div><p class="catalog-count" role="status"></p><div class="store-viewport" tabindex="0" aria-label="Shop items"><div class="store-spacer"><div class="store-items" role="list" aria-label="Furniture"></div></div><p class="store-empty" hidden>No items match your search.</p></div>`;
  storeDialog.querySelector('button').onclick=closeStore;
  storeDialog.querySelector('#store-search').oninput=e=>{query=e.target.value;remember();filterStore(true);};
  storeDialog.querySelector('#store-category').onchange=e=>{category=e.target.value;remember();filterStore(true);};
  const viewport=storeDialog.querySelector('.store-viewport');
  viewport.onscroll=()=>{cancelAnimationFrame(storeFrame);storeFrame=requestAnimationFrame(()=>drawStore());};
  viewport.onclick=e=>{const b=e.target.closest('[data-store-buy]');if(b&&!b.disabled)onBuy(CATALOG.find(c=>c.id===b.dataset.storeBuy));};
  viewport.onkeydown=e=>{const b=e.target.closest('[data-store-index]');if(!b)return;const i=Number(b.dataset.storeIndex),delta={ArrowRight:1,ArrowLeft:-1,ArrowDown:storeColumns,ArrowUp:-storeColumns}[e.key];if(delta===undefined&&e.key!=='Home'&&e.key!=='End')return;e.preventDefault();const next=Math.max(0,Math.min(storeList.length-1,e.key==='Home'?0:e.key==='End'?storeList.length-1:i+delta));const top=Math.floor(next/storeColumns)*rowHeight;if(top<viewport.scrollTop)viewport.scrollTop=top;else if(top+rowHeight>viewport.scrollTop+viewport.clientHeight)viewport.scrollTop=top+rowHeight-viewport.clientHeight;drawStore();storeDialog.querySelector(`[data-store-index="${next}"]`)?.focus({preventScroll:true});};
  if(!storeDialog.open)storeDialog.showModal();
  filterStore(false);viewport.scrollTop=storeScroll;drawStore();
  storeResize=new ResizeObserver(()=>{storeRange='';drawStore();});storeResize.observe(viewport);
 }
 function filterStore(reset){storeList=storeItems().filter(c=>(category==='all'||String(c.type)===category)&&c.name.toLowerCase().includes(query.toLowerCase()));if(reset)storeDialog.querySelector('.store-viewport').scrollTop=0;storeRange='';drawStore();}
 function drawStore(){
  if(!storeDialog.open)return;
  const viewport=storeDialog.querySelector('.store-viewport'),state=getState();
  storeColumns=Math.max(1,Math.floor((viewport.clientWidth+12)/182));
  const range=virtualRange(storeList.length,storeColumns,viewport.scrollTop,viewport.clientHeight,rowHeight);
  storeDialog.querySelector('.catalog-count').textContent=`${storeList.length} items · ${state.coins} coins · ${state.toxin||0} toxin`;
  storeDialog.querySelector('.store-spacer').style.height=range.height+'px';
  storeDialog.querySelector('.store-empty').hidden=storeList.length>0;
  const signature=[range.start,range.end,storeColumns,state.coins,state.size?.width,state.size?.height,levelOf(state)].join(':');if(signature===storeRange)return;storeRange=signature;
  const layer=storeDialog.querySelector('.store-items'),focus=document.activeElement?.dataset?.storeIndex;
  layer.style.gridTemplateColumns=`repeat(${storeColumns},minmax(0,1fr))`;layer.style.transform=`translateY(${range.offset}px)`;
  layer.innerHTML=storeList.slice(range.start,range.end).map((c,n)=>{const locked=c.level>levelOf(state),unsupported=c.kind==='special',expansion=c.kind==='expansion'?expansionStatus(state,c):null,unavailable=expansion?!expansion.ok:locked||c.premium||unsupported||c.cost>state.coins;return `<article class="catalog-card" role="listitem" aria-posinset="${range.start+n+1}" aria-setsize="${storeList.length}" tabindex="0" data-store-index="${range.start+n}"><img src="${furnitureImage(c)}" alt="" loading="lazy" decoding="async"><strong title="${esc(c.name)}">${esc(c.name)}</strong><p>${c.cost} ${c.premium?'toxin':'coins'} · Level ${c.level}</p><p class="store-rotation">${['chair','table','stove','counter','fridge','plant','lamp','divider','sink'].includes(c.kind)?furnitureRotation(c).count===1?'Fixed orientation':furnitureRotation(c).count+' rotation directions':''}</p><button data-store-buy="${c.id}" aria-label="Buy ${esc(c.name)}" ${unavailable?'disabled':''}>${expansion?esc(expansion.message):locked?'Locked':c.premium?'Toxin unavailable':unsupported?'Not yet implemented':'Buy'}</button></article>`;}).join('');
  if(focus!==undefined)layer.querySelector(`[data-store-index="${focus}"]`)?.focus({preventScroll:true});
 }
 return {open,closeStore,refresh:()=>{if(storeDialog.open){storeRange='';drawStore();}}};
}

// Fixed-height rows keep layout stable while only visible rows plus overscan exist in the DOM.
export function virtualRange(count,columns,scrollTop,height,rowHeight=252){
 columns=Math.max(1,columns);const rows=Math.ceil(count/columns),first=Math.max(0,Math.min(rows-1,Math.floor(scrollTop/rowHeight))-2),last=Math.min(rows,Math.ceil((scrollTop+height)/rowHeight)+2);
 return {start:first*columns,end:Math.min(count,last*columns),offset:first*rowHeight,height:rows*rowHeight};
}
