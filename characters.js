import {INFECTION_RULES} from './infection-rules.js';
import {HUMAN_FORMS} from './human-forms.js';
import {reportError} from './diagnostics.js';
import {loadImage,loadJSON} from './assets.js';
// Port of CCToon::UpdateAnimation / PrepareRenderList and CImage::draw(matrix).
// Native SW and NW clips face screen-left. Mirror only for eastward travel.
// Grid movement projects to screen x = (dx-dy), screen y = (dx+dy).
export function facingForMovement(dx,dy,previous={north:false,flip:false}){
 if(Math.abs(dx)+Math.abs(dy)<1e-8)return previous;
 return {north:dx+dy<0,flip:dx-dy>0};
}
export function multiply(a,b){return [a[0]*b[0]+a[2]*b[1],a[1]*b[0]+a[3]*b[1],a[0]*b[2]+a[2]*b[3],a[1]*b[2]+a[3]*b[3],a[0]*b[4]+a[2]*b[5]+a[4],a[1]*b[4]+a[3]*b[5]+a[5]];}
export function pose(animation,seconds,loop=true){
 const elapsed=Math.max(0,Math.floor(seconds*animation.fps)),frame=loop?elapsed%animation.frames:Math.min(elapsed,animation.frames-1),world=[];
 for(let i=0;i<animation.tracks.length;i++){
  const track=animation.tracks[i],key=track[Math.min(frame,track.length-1)];
  const parent=animation.parents[i];world.push({matrix:parent<0?key.slice(0,6):multiply(world[parent].matrix,key),flags:key[6],sprite:key[7]});
 }
 let layer=animation.layers[0];for(const next of animation.layers)if(next.frame<=frame)layer=next;
 return layer.order.map(i=>world[i]).filter(v=>!(v.flags&1)&&v.sprite>=0);
}
export function drawCharacter(ctx,assets,form,animation,seconds,x,y,scale=1,flip=false,options={}){
 if(!form)return;
 const sheet=assets.sheets[form.sheet];if(!sheet){assets.ensureSheet?.(form.sheet).catch(()=>{});return;}

 ctx.save();ctx.translate(x,y);ctx.scale(flip?-scale:scale,scale);
 for(const node of pose(assets.animations[animation]||assets.animations.idleSW,seconds,options.loop!==false)){
  if(node.sprite===0&&options.prop){
   // Slot zero is the native carried-object replacement, ordered with the arm layers.
   ctx.save();ctx.translate(node.matrix[4],node.matrix[5]);const h=options.prop.width?126*options.prop.height/options.prop.width:80;ctx.drawImage(options.prop,-63,40-h,126,h);ctx.restore();continue;
  }
  const partForm=form.headForm&&[3,16].includes(node.sprite)?form.headForm:form;
  const partSheet=assets.sheets[partForm.sheet],e=assets.catalog.atlases[partForm.sheet][partForm.base+node.sprite];if(!e||!partSheet)continue;
  const [sx,sy,w,h,left,top,right,bottom]=e;
  // Literal at native CharacterData::createAnimation + 0xa4 (Ghidra 0xc6ee0).
  const spriteScale=4.56620979309082;
  ctx.save();ctx.transform(...node.matrix);ctx.scale(spriteScale,spriteScale);ctx.drawImage(partSheet,sx,sy,w,h,-w/2+(left-right)/2,-h/2+(top-bottom)/2,w,h);ctx.restore();
 }
 ctx.restore();
}
export async function loadCharacters(load=loadImage){
 const [catalog,animations,sheet]=await Promise.all([loadJSON('assets/startup/characters.json'),loadJSON('assets/startup/animations.json'),load('assets/startup/characters.png')]);
 let collection;
 const zombieReady=new Map(),zombiePending=new Map(),zombieRetry=new Map();
 const readyHumans=new Map(),pendingHumans=new Map(),retryHumans=new Map();
 const assets={catalog,animations,sheets:[sheet],zombie(id,customerDataId){
  if(!id)return null;
  const rule=INFECTION_RULES[customerDataId],bodyId=rule?.form===id?rule.bodyForm:id,key=bodyId+':'+id;
  const starter=catalog.forms.find(f=>f.id===bodyId);if(starter&&bodyId===id)return {assets,form:starter};
  if(!zombieReady.has(key)&&!zombiePending.has(key)&&Date.now()>=(zombieRetry.get(key)||0))zombiePending.set(key,assets.loadCollection().then(async full=>{
   const body=full.catalog.forms.find(f=>f.id===bodyId),head=full.catalog.forms.find(f=>f.id===id);
   if(!body||!head)throw Error('Missing zombie form '+id);
   await Promise.all([full.ensureSheet(body.sheet),full.ensureSheet(head.sheet)]);
   zombieReady.set(key,{assets:full,form:bodyId===id?body:{...body,headForm:head}});
  }).catch(error=>{zombieRetry.set(key,Date.now()+5000);reportError(error,'zombie appearance '+id);}).finally(()=>zombiePending.delete(key)));
  return zombieReady.get(key)||null;
 },human(variant){
  const entry=HUMAN_FORMS[variant];if(!entry)return null;
  const starter=catalog.forms.find(f=>f.id===entry.id);if(starter)return {assets,form:starter};
  if(!readyHumans.has(variant)&&!pendingHumans.has(variant)&&Date.now()>=(retryHumans.get(variant)||0)){
   pendingHumans.set(variant,assets.loadCollection().then(async full=>{const form=full.catalog.forms.find(f=>f.id===entry.id);if(!form)throw Error("Missing human form "+entry.id);await full.ensureSheet(form.sheet);readyHumans.set(variant,{assets:full,form});}).catch(error=>{retryHumans.set(variant,Date.now()+5000);reportError(error,"human appearance "+entry.id);}).finally(()=>pendingHumans.delete(variant)));
  }
  return readyHumans.get(variant)||null;
 },loadCollection(){return collection||(collection=loadJSON('assets/original/characters.json').then(catalog=>{
  const sheets=[],pending=new Map();
  return {catalog,animations,sheets,ensureSheet(i){if(sheets[i])return Promise.resolve(sheets[i]);if(!pending.has(i))pending.set(i,load('assets/original/characters-'+i+'.png').then(image=>sheets[i]=image).catch(error=>{pending.delete(i);throw error;}));return pending.get(i);}};
 }).catch(error=>{collection=null;throw error;}));}};
 return assets;
}

// Native serve clips contain 16 SW / 17 NW frames at 24 fps.
export const handoffDuration=north=>(north?17:16)/24;
export function characterAnimation(g){
 const action=g.staff&&g.action,age=action?g.t-action.startedAt:-1;
 if(action&&age>=0&&age<handoffDuration(action.north))return {clip:'serve'+(action.north?'NW':'SW'),seconds:age,loop:false,flip:action.flip,prop:['serve','returnFood','wash','dropBatch'].includes(action.phase)||Boolean(g.batch||g.carrying||g.dishes)};
 const seated=['waiting','served','eating'].includes(g.phase),carrying=Boolean(g.batch||g.carrying||g.dishes);
 const mode=g.moving?(carrying?'carry':'walk'):carrying?'carry':g.phase==='eating'?'eat':seated?'sit':'idle';
 return {clip:mode+(g.north?'NW':'SW'),loop:true,flip:g.flip,prop:carrying,frozen:carrying&&!g.moving};
}
export function createAnimationPlayer(){
 const clocks=new Map();
 return {sample(g){const spec=characterAnimation(g);let clock=clocks.get(g.id);
  if(!clock||clock.clip!==spec.clip||clock.flip!==spec.flip||g.t<clock.last){clock={clip:spec.clip,flip:spec.flip,start:g.t,last:g.t};clocks.set(g.id,clock);}clock.last=g.t;
  return {...spec,seconds:spec.seconds??(spec.frozen?0:Math.max(0,g.t-clock.start))};
 },retain(ids){const keep=new Set(ids);for(const id of clocks.keys())if(!keep.has(id))clocks.delete(id);}};
}
