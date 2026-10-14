import {cafeDoor} from './world.js';
import {CATALOG,furnitureRotation,rotateFurniture,place,canPlace} from './model.js';
import {doorDestination,moveDoor,decorItem,saleOffer,sellDecoration,placeWallDecoration,applySurfacePaint,applyDecorationMove,moveSurface} from './decoration.js';
import {wallDecor,canPlaceWallDecor,floorSprite,wallSprite,floorKey,wallKey} from './surfaces.js';
const esc=s=>String(s).replace(/[&<>"']/g,c=>({'&':'&amp;','<':'&lt;','>':'&gt;','"':'&quot;',"'":'&#39;'}[c]));
export function createDecorationUI({scene,getState,onCommit,onMessage,onStart}){
 const panel=document.querySelector('#decor-tools');
 let selection=null,item=null,draft=null,target=null,targets=new Map(),operation=null;
 const state=()=>getState();
 function clear(){item=null;draft=null;target=null;targets.clear();operation=null;scene.editState=null;scene.editDrag=false;scene.editTarget=null;}
 function open(){onStart();scene.editing=true;panel.hidden=false;}
 function close(){clear();selection=null;scene.editing=false;scene.selected=null;panel.hidden=true;}
 function select(p){clear();open();selection=p;scene.selected=p?.id||null;scene.editTarget=p?.kind==='floor'?p.cell:p?.kind==='wall'?p.wall:null;render();}
 function buy(next){clear();open();selection=null;item=next;operation=['floor','wall'].includes(item.kind)?'paint':'buy';scene.editDrag=true;render();}
 function itemName(f){return CATALOG.find(c=>c.id===f?.catalogId)?.name||f?.kind||'Item';}
 function preview(){
  const s=state(),view={...s};scene.editTarget=target;
  if(operation==='door'&&target){view.door={...target};
  }else if(operation==='reset'){const isFloor=selection.kind==='floor',field=isFloor?'floorTiles':'wallTiles';view[field]={...s[field],[isFloor?floorKey(selection.x,selection.y):wallKey(selection.side,selection.index)]:isFloor?'o0-45':'o0-66'};
  }else if(operation==='paint'){
   const field=item.kind==='floor'?'floorTiles':'wallTiles';view[field]={...s[field],...Object.fromEntries([...targets].map(([key])=>[key,item.sprite]))};
  }else if(operation==='move'&&draft&&target){
   if(draft.kind==='wallArt'){view.wallDecor=wallDecor(s).map(f=>f.id===draft.id?{...draft,side:target.side,index:target.index}:f);}
   else view.furniture=s.furniture.map(f=>f.id===draft.id?{...draft,x:target.x,y:target.y}:f);
  }else if(operation==='buy'&&target){
   if(item.kind==='wallArt')view.wallDecor=[...wallDecor(s),{...item,id:'preview',side:target.side,index:target.index}];
   else view.furniture=[...s.furniture,{...item,id:'preview',x:target.x,y:target.y,flip:false}];
  }else if(operation==='swap'&&target){moveSurface(view,selection,target);}
  scene.editState=view;
 }
 function point(p){
  if(!p)return;
  if(!operation){select(p);return;}
  if(operation==='reset')return;
  const s=state();
  if(operation==='door'){
   if(!p.wall)return;target=doorDestination(s,p.wall)?p.wall:null;scene.editTarget={...p.wall,valid:!!target};if(target)preview();else scene.editState=null;render();return;
  }else if(operation==='paint'){
   const dest=item.kind==='floor'?p.cell:p.wall;if(!dest)return;
   const key=item.kind==='floor'?floorKey(dest.x,dest.y):wallKey(dest.side,dest.index);
   if((item.kind==='floor'?floorSprite(s,dest.x,dest.y):wallSprite(s,dest.side,dest.index))===item.sprite)return;
   targets.set(key,dest);target=dest;
  }else if(operation==='swap'){
   target=selection.kind==='floor'?p.cell:p.wall;if(!target)return;
  }else{
   const f=draft||item,dest=f.kind==='wallArt'?p.wall:p.cell;
   if(!dest)return;
   const valid=f.kind==='wallArt'?canPlaceWallDecor(s,dest.side,dest.index,draft?.id):canPlace(s,dest.x,dest.y,draft?.id);
   scene.editTarget={...dest,valid};
   if(!valid){target=null;scene.editState=null;render();return;}
   target=dest;
  }
  preview();render();
 }
 function render(){
  const f=selection?.id&&decorItem(state(),selection.id),surface=selection&&['floor','wall'].includes(selection.kind);
  let text='Tap an item, floor tile, or wall section to edit. Hold an item to move it.';
  if(operation==='door')text='Move door. Choose a clear wall section, then Apply.';
  else if(operation==='paint')text=`${item.name} · ${targets.size} selected · ${targets.size*item.cost} coins. Tap or drag across ${item.kind==='floor'?'tiles':'wall sections'}.`;
  else if(operation==='buy')text=`Place ${item.name} · ${item.cost} coins. Choose ${item.kind==='wallArt'?'a wall section':'an empty tile'}.`;
  else if(operation==='move')text=`Move ${itemName(draft)}. Drag or tap a new spot, then Apply. Drag to Store to sell.`;
  else if(operation==='reset')text='Remove this finish and restore the plain surface?';
  else if(operation==='swap')text='Choose another surface to swap finishes.';
  else if(f)text=itemName(f);
  else if(surface)text=selection.kind==='floor'?'Floor tile selected':'Wall section selected';
  const offer=f&&saleOffer(state(),f.id);
  panel.innerHTML=`<p role="status">${esc(text)}</p><div class="decor-actions">${operation?`<button data-decor="apply" ${!(operation==='paint'?targets.size:target)?'disabled':''}>Apply</button>${draft&&draft.kind!=='wallArt'?`<button data-decor="rotate" ${furnitureRotation(draft).count===1?'disabled':''}>Rotate ↻</button>`:''}<button data-decor="cancel">Cancel</button>`:f?`<button data-decor="move">Move</button>${f.kind!=='wallArt'?`<button data-decor="rotate" ${furnitureRotation(f).count===1?'disabled':''}>Rotate ↻</button>`:''}<button data-decor="sell" ${offer.ok?'':'disabled'} title="${esc(offer.ok?'':offer.message)}">Sell${offer.ok?' · '+offer.coins+' coins':''}</button>`:surface?'<button data-decor="swap">Move finish</button><button data-decor="reset">Remove finish</button>':''}<button data-decor="store">Store</button><button data-decor="close">Done</button></div>`;
 }
 function beginMove(){const f=decorItem(state(),selection?.id);if(!f)return;clear();draft=structuredClone(f);operation='move';target=f.kind==='wallArt'?{side:f.side,index:f.index}:{x:f.x,y:f.y};scene.editDrag=true;preview();render();}
 function apply(){
  const s=state();let result;
  if(operation==='door')result=moveDoor(s,target);
  else if(operation==='paint')result=applySurfacePaint(s,item,[...targets.values()]);
  else if(operation==='buy')result=item.kind==='wallArt'?placeWallDecoration(s,item,target?.side,target?.index):place(s,item.id,target?.x,target?.y);
  else if(operation==='move')result=applyDecorationMove(s,draft.id,target,draft);
  else if(operation==='swap')result=moveSurface(s,selection,target);
  else if(operation==='door'&&target){view.door={...target};
  }else if(operation==='reset'){const isFloor=selection.kind==='floor',field=isFloor?'floorTiles':'wallTiles';s[field]={...s[field],[isFloor?floorKey(selection.x,selection.y):wallKey(selection.side,selection.index)]:isFloor?'o0-45':'o0-66'};result={ok:true,message:'Finish removed. Plain surface restored.'};}
  if(!result)return;
  if(result.ok){clear();selection=null;scene.selected=null;onCommit(result);}else onMessage(result.message);
  render();
 }
 function confirmSale(){
  const offer=saleOffer(state(),selection?.id);if(!offer.ok){onMessage(offer.message);return;}
  clear();panel.innerHTML=`<p>Sell ${esc(itemName(decorItem(state(),selection.id)))} for ${offer.coins} coins?</p><div class="decor-actions"><button data-decor="confirm-sale">Sell item</button><button data-decor="cancel">Keep item</button></div>`;
 }
 scene.onEditDrop=e=>{if(!draft)return;const r=document.querySelector('#nav-store').getBoundingClientRect();if(e.clientX>=r.left&&e.clientX<=r.right&&e.clientY>=r.top&&e.clientY<=r.bottom)confirmSale();};
 panel.addEventListener('click',e=>{const action=e.target.closest('[data-decor]')?.dataset.decor;if(!action)return;
  if(action==='close'){close();return;}
  if(action==='cancel'){clear();render();return;}
  if(action==='apply'){apply();return;}
  if(action==='move'){beginMove();return;}
  if(action==='rotate'){if(!draft)beginMove();if(draft){rotateFurniture(draft);preview();render();}return;}
  if(action==='swap'){operation='swap';scene.editDrag=true;render();return;}
  if(action==='reset'){operation='reset';target=selection;preview();render();return;}
  if(action==='sell'){confirmSale();return;}
  if(action==='confirm-sale'){const result=sellDecoration(state(),selection.id);if(result.ok){selection=null;scene.selected=null;onCommit(result);}else onMessage(result.message);render();return;}
  if(action==='store'){clear();render();document.querySelector('#nav-store').click();}
 });
 scene.onEdit=p=>{select(p);if(p?.id==='door'){operation='door';target={...cafeDoor(state())};scene.editDrag=true;preview();render();}else if(p?.id)beginMove();};scene.onEditPoint=point;
 document.addEventListener('keydown',e=>{if(!scene.editing||e.defaultPrevented||e.target.closest('input,textarea,select,[contenteditable]')||document.querySelector('dialog[open]'))return;
  if(e.key==='Escape'){e.preventDefault();if(operation){clear();render();}else close();}
 });
 return {buy,select,close,move:id=>{select({id});beginMove();}};
}
