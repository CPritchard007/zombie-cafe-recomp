import {reportError} from './diagnostics.js';
import {createFurnitureAssets,createFoodAssets} from './assets.js';
import {startingFloor,startingWall,STARTING_WINDOWS} from './starting-layout.js';
import {cafeSize,clampZoom} from './world.js';
import {visitorPath,visitorRenderPose} from './visitors.js';
import {loadCharacters,drawCharacter,facingForMovement,createAnimationPlayer} from './characters.js';
import {GRID,ENTRANCE,DOORSTEP,entranceAccess,canPlace,furniturePose,CATALOG} from './model.js';
const W=96,H=58;
export function iso(x,y){return {x:(x-y)*W/2,y:(x+y)*H/2};}
export function uniso(x,y){return {x:Math.round(x/W+y/H),y:Math.round(y/H-x/W)};}
// Original exterior textures; intersecting streets run behind the two café walls.
export function outdoorTile(x,y){
 const roadX=x>=-5&&x<=-2,roadY=y>=-5&&y<=-2;
 if(roadX||roadY)return {sprite:'o0-'+((x===-4&&!roadY||y===-4&&!roadX)?121:118),flip:y===-4&&!roadX};
 if(x===-1||y===-1||x===-6||y===-6)return {sprite:'o0-117',flip:false};
 return {sprite:'o0-116',flip:false};
}
// Furniture and indoor characters share tile depth; floors draw before this pass.
export function sceneEntities(furniture,guests){
 const rest=furniture.map(f=>({type:'furniture',f,depth:f.x+f.y}));
 for(const g of guests)if(g.y>=-.5)rest.push({type:'guest',g,depth:g.x+g.y+.1});
 return rest.sort((a,b)=>a.depth-b.depth);
}
// Center the dish footprint on the isometric top, excluding furniture legs.
// Recipe art includes food/steam above the plate: anchor the plate near its base,
// not the bounding-box midpoint, so tall dishes stay on the same surface.
export function tablePlateRect(box,plate,width=34){
 const height=width*plate.height/plate.width;
 const centerX=box.x+box.w/2,centerY=box.y+Math.min(box.w*.34,box.h*.5);
 const plateCenterFromBottom=Math.min(height/2,width*.34);
 return {x:centerX-width/2,y:centerY-height+plateCenterFromBottom,w:width,h:height};
}
// Outdoor paving is centered at iso(x,y); the indoor floor artwork uses
// a lower foot anchor. Blend across the doorway without a visible jump.
export function guestGroundOffset(y){return Math.max(0,Math.min(1,y+1));}
export class CafeScene {
 constructor(canvas,state,assets,onSelect,onPlace,onDoor=()=>{},onTick=()=>{},onView=()=>{}){
  this.canvas=canvas;this.ctx=canvas.getContext('2d');this.state=state;this.assets=assets;this.onSelect=onSelect;this.onPlace=onPlace;this.onDoor=onDoor;this.onTick=onTick;this.onView=onView;this.zoom=1;this.targetZoom=1;this.pan={x:0,y:0};this.pointers=new Map();this.suppressClick=false;this.hover=null;this.placement=null;this.selected=null;this.hitboxes=[];this.guests=[];this.last=0;this.reduced=matchMedia('(prefers-reduced-motion: reduce)').matches;

  this.resize=new ResizeObserver(()=>this.fit());this.resize.observe(canvas);this.fit();
  canvas.addEventListener('pointermove',e=>{this.hover=this.cellAt(e);canvas.style.cursor=this.placement?'crosshair':this.dragging?'grabbing':this.hit(e)?'pointer':'grab';});
  canvas.addEventListener('pointerleave',()=>{this.hover=null;});
  canvas.addEventListener('click',e=>{if(this.suppressClick){this.suppressClick=false;return;}const cell=this.cellAt(e);if(this.placement)this.onPlace(cell.x,cell.y);else{const hit=this.hit(e);if(hit?.id==='door')this.onDoor();else this.onSelect(hit?.id||null,cell);}});
  canvas.style.touchAction='none';
  const point=e=>{const r=canvas.getBoundingClientRect();return {x:e.clientX-r.left,y:e.clientY-r.top};};
  const pinch=()=>{const [a,b]=[...this.pointers.values()];return a&&b?{distance:Math.hypot(a.x-b.x,a.y-b.y),x:(a.x+b.x)/2,y:(a.y+b.y)/2}:null;};
  canvas.addEventListener('pointerdown',e=>{if(e.button!==0&&e.pointerType==='mouse')return;if(!this.pointers.size){this.dragStart=point(e);this.dragging=false;this.suppressClick=false;this.targetZoom=this.zoom;}this.pointers.set(e.pointerId,point(e));canvas.setPointerCapture(e.pointerId);this.pinch=pinch();if(this.pinch)this.suppressClick=true;});
  canvas.addEventListener('pointermove',e=>{if(!this.pointers.has(e.pointerId))return;const previous=this.pointers.get(e.pointerId),current=point(e);this.pointers.set(e.pointerId,current);const next=pinch();if(next&&this.pinch){this.zoomAt(this.zoom*next.distance/Math.max(1,this.pinch.distance),this.pinch);this.pan.x+=next.x-this.pinch.x;this.pan.y+=next.y-this.pinch.y;this.targetZoom=this.zoom;this.suppressClick=true;this.hover=null;}else if(!next&&!this.pinch){if(this.dragging){this.panBy(current.x-previous.x,current.y-previous.y);}else if(Math.hypot(current.x-this.dragStart.x,current.y-this.dragStart.y)>6){this.dragging=true;this.panBy(current.x-this.dragStart.x,current.y-this.dragStart.y);}if(this.dragging){this.suppressClick=true;this.hover=null;canvas.style.cursor='grabbing';}}this.pinch=next;});
  const end=e=>{this.pointers.delete(e.pointerId);this.pinch=pinch();if(!this.pointers.size){this.dragging=false;canvas.style.cursor=this.placement?'crosshair':'grab';this.onView();}else this.dragStart=[...this.pointers.values()][0];};
  canvas.addEventListener('pointerup',end);canvas.addEventListener('pointercancel',end);
  canvas.addEventListener('wheel',e=>{e.preventDefault();const delta=e.deltaY*(e.deltaMode===1?16:e.deltaMode===2?this.height:1);this.zoomAnchor=point(e);this.targetZoom=clampZoom(this.targetZoom*Math.exp(-delta*(e.ctrlKey ? .008 : .002)));clearTimeout(this.zoomSave);this.zoomSave=setTimeout(()=>this.onView(),250);},{passive:false});
  this.frame=this.frame.bind(this);requestAnimationFrame(this.frame);
 }
 fit(){const r=this.canvas.getBoundingClientRect();this.width=r.width;this.height=r.height;const dpr=Math.min(devicePixelRatio||1,2);this.canvas.width=r.width*dpr;this.canvas.height=r.height*dpr;this.dpr=dpr;}
 get scale(){return Math.min(this.width/870,this.height/710)*this.zoom;}
 worldPoint(e){const r=this.canvas.getBoundingClientRect(),s=this.scale;return {x:(e.clientX-r.left-this.width/2-this.pan.x)/s,y:(e.clientY-r.top-this.height/2-9-this.pan.y)/s+180};}
 cellAt(e){const p=this.worldPoint(e);return uniso(p.x,p.y);}
 hit(e){const p=this.worldPoint(e);return [...this.hitboxes].reverse().find(b=>p.x>=b.x&&p.x<=b.x+b.w&&p.y>=b.y&&p.y<=b.y+b.h);}
 panBy(dx,dy){this.pan.x=Math.max(-4000,Math.min(4000,this.pan.x+dx));this.pan.y=Math.max(-4000,Math.min(4000,this.pan.y+dy));}
 zoomAt(value,anchor={x:this.width/2,y:this.height/2+9}){const next=clampZoom(value),ratio=next/this.zoom;this.pan.x=anchor.x-this.width/2-(anchor.x-this.width/2-this.pan.x)*ratio;this.pan.y=anchor.y-this.height/2-9-(anchor.y-this.height/2-9-this.pan.y)*ratio;this.zoom=next;}
 setZoom(delta){this.zoomAnchor={x:this.width/2,y:this.height/2+9};this.targetZoom=delta===0?1:clampZoom(this.targetZoom*Math.exp(delta));if(delta===0)this.pan={x:0,y:0};}
 updateZoom(dt){if(Math.abs(this.targetZoom-this.zoom)<.0001){this.zoomAt(this.targetZoom,this.zoomAnchor);return;}this.zoomAt(this.zoom+(this.targetZoom-this.zoom)*(1-Math.exp(-14*dt)),this.zoomAnchor);}
 poly(points,fill,stroke,width=1){const c=this.ctx;c.beginPath();points.forEach((p,i)=>i?c.lineTo(p[0],p[1]):c.moveTo(p[0],p[1]));c.closePath();if(fill){c.fillStyle=fill;c.fill();}if(stroke){c.strokeStyle=stroke;c.lineWidth=width;c.stroke();}}
 diamond(x,y,fill,stroke){const p=iso(x,y);this.poly([[p.x,p.y-H/2],[p.x+W/2,p.y],[p.x,p.y+H/2],[p.x-W/2,p.y]],fill,stroke);}
 sprite(id,x,y,scale=.78,flip=false,alpha=1){const image=this.assets.furniture[id];if(!image)return;const c=this.ctx,p=iso(x,y),w=image.width*scale,h=image.height*scale;c.save();c.globalAlpha=alpha;c.translate(p.x,p.y+H/2-4);c.scale(flip?-1:1,1);c.drawImage(image,-w/2,-h,w,h);c.restore();return {x:p.x-w/2,y:p.y+H/2-4-h,w,h};}
 label(x,y,text,fill='#fffdf4',color='#24221d'){const c=this.ctx;c.font='bold 11px Arial';const w=c.measureText(text).width+20;c.fillStyle=fill;c.strokeStyle='#28251f';c.lineWidth=2;c.beginPath();c.roundRect(x-w/2,y-13,w,25,3);c.fill();c.stroke();c.beginPath();c.moveTo(x-5,y+11);c.lineTo(x-7,y+19);c.lineTo(x+5,y+11);c.fill();c.stroke();c.fillStyle=fill;c.fillRect(x-4,y+9,8,3);c.fillStyle=color;c.textAlign='center';c.fillText(text,x,y+3);}
 pathTo(from,to){return visitorPath(this.state,from,to)||[];}
 animateGuests(dt){
  for(const stove of this.state.stoves||[])if(stove.job)this.assets?.food?.(stove.job.recipeId);
  this.guests=(this.state.visitors?.people||[]).map(g=>visitorRenderPose(this.state.visitors,g));
  for(const g of this.guests)this.assets?.characters?.human?.(g.variant);
  this.guests.push(...(this.state.staff?.people||[]).map(z=>({...visitorRenderPose(this.state.visitors,z),staff:true,taskPhase:z.phase})));
  (this.animationPlayer??=createAnimationPlayer()).retain(this.guests.map(g=>g.id));
 }
 frame(time){try{const dt=Math.min(.06,(time-this.last)/1000||0);this.last=time;if(!document.hidden){this.onTick();this.updateZoom(dt);this.animateGuests(dt);this.draw(time);}requestAnimationFrame(this.frame);}catch(error){reportError(error,'scene rendering stopped; reload to retry');}}
 foodArt(id){return this.assets.food?.(id)||this.assets.furniture['o0-119'];}
 drawGuest(g){const animation=(this.animationPlayer??=createAnimationPlayer()).sample(g),c=this.ctx;const p=iso(g.x,g.y);if(!g.staff)this.hitboxes.push({id:'customer-'+g.id,x:p.x-20,y:p.y-78,w:40,h:96});if(g.staff){this.hitboxes.push({id:g.id,x:p.x-22,y:p.y-82,w:44,h:104});if(this.selectedZombie===g.id)this.diamond(g.x,g.y,'#ddef9366','#a9d349');}const seated=['waiting','served','eating'].includes(g.phase),bounce=this.reduced||seated?0:Math.sin(g.t*8)*1.6*(g.moving?1:.2);c.fillStyle='#1e32182b';c.beginPath();c.ellipse(p.x,p.y+14*guestGroundOffset(g.y),15,6,0,0,7);c.fill();c.save();c.translate(p.x,p.y+18*guestGroundOffset(g.y)+bounce);c.scale(animation.flip?-1:1,1);const characterAssets=this.assets.characters,forms=characterAssets.catalog.forms,human=g.staff?characterAssets.zombie?.(g.zombieForm,g.customerDataId):characterAssets.human?.(g.variant),form=human?.form||forms.find(f=>f.name===(g.staff?'chef-zombie':'generic-human'));drawCharacter(c,human?.assets||characterAssets,form,animation.clip,animation.seconds,0,0,.19,false,{loop:animation.loop,prop:animation.prop?this.foodArt(g.batch?.recipeId??g.carrying?.recipeId??(['serve','returnFood','dropBatch'].includes(g.action?.phase)?g.action.recipeId:undefined)):null});c.restore();if(g.phase==='waiting')this.label(p.x,p.y-89,g.timer<15?'Hungry!':'Waiting for food');else if(g.phase==='eating')this.label(p.x,p.y-89,'Eating');else if(g.message)this.label(p.x,p.y-89,g.message);else if(g.staff){const labels={stove:'Collecting cooked batch',collectBatch:'Collecting cooked batch',batchCounter:'Taking food to counter',dropBatch:'Stocking counter',counter:'Collecting food',pickup:'Collecting food',deliver:'Serving',serve:'Serving',table:'Clearing table',clear:'Clearing table',sink:'Taking dishes to sink',wash:'Washing dishes',returnCounter:'Returning food',returnFood:'Returning food'};if(labels[g.taskPhase]||g.batch||g.carrying||g.dishes)this.label(p.x,p.y-89,labels[g.taskPhase]||(g.carrying?'Serving':'Taking dishes to sink'));}}
 paintTerrain(c){const t=this.terrainBounds;c.save();c.translate(this.width/2+this.pan.x,this.height/2+9+this.pan.y);c.scale(this.scale,this.scale);c.translate(0,-180);c.drawImage(this.terrain,t.left,t.top,t.width,t.height);c.restore();}
 drawOutdoors(){
  // Cache an oversized world-space patch, so dragging/zooming transforms one image.
  const s=this.scale,left=(-this.width/2-this.pan.x)/s,top=180-(this.height/2+9+this.pan.y)/s,right=left+this.width/s,bottom=top+this.height/s;
  const resolution=Math.min(this.width/870,this.height/710)*this.dpr,t=this.terrainBounds;
  if(!t||t.resolution!==resolution||left<t.left||top<t.top||right>t.left+t.width||bottom>t.top+t.height){
   const padX=this.width/s*.55,padY=this.height/s*.55,bounds={left:left-padX,top:top-padY,width:this.width/s+2*padX,height:this.height/s+2*padY,resolution};
   const surface=document.createElement('canvas');surface.width=Math.ceil(bounds.width*resolution);surface.height=Math.ceil(bounds.height*resolution);
   const c=surface.getContext('2d');c.fillStyle='#617f24';c.fillRect(0,0,surface.width,surface.height);c.scale(resolution,resolution);c.translate(-bounds.left,-bounds.top);
   const corners=[[bounds.left,bounds.top],[bounds.left+bounds.width,bounds.top],[bounds.left,bounds.top+bounds.height],[bounds.left+bounds.width,bounds.top+bounds.height]].map(([x,y])=>uniso(x,y));
   const minX=Math.min(...corners.map(p=>p.x))-2,maxX=Math.max(...corners.map(p=>p.x))+2,minY=Math.min(...corners.map(p=>p.y))-2,maxY=Math.max(...corners.map(p=>p.y))+2;
   for(let d=minX+minY;d<=maxX+maxY;d++)for(let x=minX;x<=maxX;x++){const y=d-x;if(y<minY||y>maxY)continue;const tile=outdoorTile(x,y),img=this.assets.furniture[tile.sprite],p=iso(x,y);c.save();c.translate(p.x,p.y);if(tile.flip)c.scale(-1,1);c.drawImage(img,-W/2-.5,-H/2-.5,W+1,H+1);c.restore();}
   this.terrain=surface;this.terrainBounds=bounds;
  }
  this.paintTerrain(this.ctx);
 }

 draw(time){const c=this.ctx,s=this.scale;c.setTransform(this.dpr,0,0,this.dpr,0,0);c.clearRect(0,0,this.width,this.height);
  this.drawOutdoors();
  c.translate(this.width/2+this.pan.x,this.height/2+9+this.pan.y);c.scale(s,s);c.translate(0,-180);
  const {width,height}=cafeSize(this.state),pt=(x,y)=>{const p=iso(x,y);return [p.x,p.y];};
  const top=pt(-.5,-.5),left=pt(-.5,height-.5),right=pt(width-.5,-.5),bottom=pt(width-.5,height-.5);
  this.poly([top,right,bottom,left],'#c7ceb7','#bbc5aa');
  this.poly([left,bottom,[bottom[0],bottom[1]+12],[left[0],left[1]+12]],'#8b9578');
  this.poly([bottom,right,[right[0],right[1]+12],[bottom[0],bottom[1]+12]],'#a5ae8f');
  this.poly([left,top,[top[0],top[1]-138],[left[0],left[1]-138]],'#bdc7a2','#849170');
  this.poly([top,right,[right[0],right[1]-138],[top[0],top[1]-138]],'#e4dec2','#9ba285');
  // Each original wall sprite includes its isometric slope and distressed plaster.
  for(const side of ['left','right'])for(let i=(side==='left'?height:width)-1;i>=0;i--){
   const sprite=this.state.wallSprite||(this.state.originalSurfaces?'o0-'+startingWall(side,i):'o0-66'),img=this.assets.furniture[sprite];
   if(img){const p=side==='left'?iso(-.5,i):iso(i,-.5),w=W/2+1,h=img.height/img.width*w;c.save();c.translate(p.x,p.y+H/4);if(side==='right')c.scale(-1,1);c.drawImage(img,-w/2,-h,w,h);c.restore();}
  }
  if(this.state.originalSurfaces){for(const f of STARTING_WINDOWS){const img=this.assets.furniture['o0-267'],p=iso(-.5,f.y);if(img)c.drawImage(img,p.x-23,p.y-104,46,75);}}
  else {const p=iso(-.5,3);this.poly([[p.x-40,p.y-30],[p.x+40,p.y-78],[p.x+40,p.y-123],[p.x-40,p.y-75]],'#637c77','#f4ebcc',5);}
  for(let d=0;d<width+height-1;d++)for(let x=0;x<width;x++){const y=d-x;if(y<0||y>=height)continue;const p=iso(x,y),id=this.state.originalSurfaces&&!this.state.floorChanged?'o0-'+startingFloor(x,y):this.state.floor,img=this.assets.furniture[id];if(img)c.drawImage(img,p.x-W/2,p.y-H/2,W+1,H+1);if(this.placement)this.diamond(x,y,'#f9ffe10b','#61795138');}
  // Original door art on the NE wall, directly adjoining the pavement.
  const dp=iso(ENTRANCE.x,-.5),doorImage=this.assets.furniture['o0-122'];
  // The source door faces the opposite wall. Mirror it and preserve its
  // native 66:207 aspect ratio; its bottom corners are y=207 and y=167.
  const doorScale=.65,doorHalf=33*doorScale,doorSlope=doorHalf*H/W;
  const opening=[[dp.x-doorHalf,dp.y-doorSlope-108],[dp.x+doorHalf,dp.y+doorSlope-108],[dp.x+doorHalf,dp.y+doorSlope],[dp.x-doorHalf,dp.y-doorSlope]];
  // Cut through every wall/sign layer to the actual exterior at these screen pixels.
  // Reuse the terrain cache in screen coordinates so the pavement/road texture lines up.
  c.save();this.poly(opening);c.clip();
  c.save();c.setTransform(this.dpr,0,0,this.dpr,0,0);this.paintTerrain(c);c.restore();
  c.restore();this.poly(opening,null,'#c3c9c5',3);
  c.save();c.translate(dp.x,dp.y);c.scale(-doorScale,doorScale);
  if(!this.state.doorOpen&&doorImage)c.drawImage(doorImage,-33,-187);
  else {const back=this.assets.furniture['o0-123'];if(back)c.drawImage(back,-33,-147);}
  c.restore();
  this.label(dp.x,dp.y-136,this.state.doorOpen?'OPEN':'CLOSED');
  const doorBox={id:'door',x:dp.x-32,y:dp.y-145,w:64,h:162};
  if(this.placement&&this.hover){const {x,y}=this.hover;if(x>=0&&y>=0&&x<cafeSize(this.state).width&&y<cafeSize(this.state).height){const valid=canPlace(this.state,x,y,this.placement.moveId);this.diamond(x,y,valid?'#d2eb8199':'#e4a085bb',valid?'#66843a':'#aa5b45');const f=this.placement.moveId?this.state.furniture.find(f=>f.id===this.placement.moveId):CATALOG.find(f=>f.id===this.placement.itemId);if(f){const art=furniturePose(f);this.sprite(art.sprite,x,y,.78,art.flip,.6);}}}
  const directed=this.state.staff?.people.find(z=>z.id===this.selectedZombie);if(directed?.manualTarget)this.diamond(directed.manualTarget.x,directed.manualTarget.y,'#ddef9344','#a9d349');
  const entities=sceneEntities(this.state.furniture,this.guests);this.hitboxes=[doorBox];
  for(const e of entities){if(e.type==='furniture'){const f=e.f,p=iso(f.x,f.y);if(this.selected===f.id)this.diamond(f.x,f.y,'#ddef93aa','#688345');c.fillStyle='#22351b18';c.beginPath();c.ellipse(p.x,p.y+13,28,10,0,0,7);c.fill();const art=furniturePose(f),box=this.sprite(art.sprite,f.x,f.y,.78,art.flip);if(box)this.hitboxes.push({...box,id:f.id});if(f.kind==='table'){const diner=this.state.visitors?.people.find(g=>g.tableId===f.id&&g.meal),dirty=this.state.visitors?.dirtyTables.some(d=>d.tableId===f.id);if(diner||dirty){const plate=this.foodArt(diner?.meal?.recipeId);if(plate&&box){const rect=tablePlateRect(box,plate);c.drawImage(plate,rect.x,rect.y,rect.w,rect.h);}}}
    if(f.kind==='counter'){const batches=this.state.stock.filter(b=>b.counterId===f.id);if(batches.length){const plate=this.foodArt(batches[0].recipeId);if(plate&&box){const rect=tablePlateRect(box,plate,44);c.drawImage(plate,rect.x,rect.y,rect.w,rect.h);}this.label(p.x,p.y-84,batches.reduce((n,b)=>n+b.quantity,0)+' portions');}}
    if(f.kind==='stove'){const job=this.state.stoves.find(st=>st.id===f.id)?.job;if(job){if(job.remaining<=0){this.label(p.x,p.y-113,'READY FOR PICKUP','#e8f5b9','#425b2e');}else{this.label(p.x,p.y-113,'COOKING','#fbf4d6','#8b7447');if(!this.reduced){c.strokeStyle='#ffffffaa';c.lineWidth=3;for(let i=0;i<3;i++){const t=(time/1000+i*.8)%2;c.beginPath();c.moveTo(p.x-13+i*12,p.y-74-t*15);c.quadraticCurveTo(p.x-24+i*12,p.y-88-t*15,p.x-12+i*12,p.y-97-t*15);c.stroke();}}}}}
   }else{this.drawGuest(e.g);}}

  // Outdoor visitors remain above floors, but the walls still hide them.
  const outside=this.guests.filter(g=>g.y<-.5).sort((a,b)=>(a.x+a.y)-(b.x+b.y));
  if(outside.length){
   c.save();c.beginPath();c.rect(-100000,-100000,200000,200000);
   for(const wall of [[left,top,[top[0],top[1]-138],[left[0],left[1]-138]],[top,right,[right[0],right[1]-138],[top[0],top[1]-138]]]){c.moveTo(...wall[0]);for(const p of wall.slice(1))c.lineTo(...p);c.closePath();}
   c.clip('evenodd');for(const g of outside)this.drawGuest(g);c.restore();
   if(this.state.doorOpen){c.save();this.poly(opening);c.clip();for(const g of outside)this.drawGuest(g);c.restore();}
  }

 }
}
export function startupFurniture(state){
 const ids=new Set(['o0-116','o0-117','o0-118','o0-121','o0-122','o0-123','o0-119','o0-66',state.floor??2]);
 if(state.wallSprite)ids.add(state.wallSprite);
 if(state.originalSurfaces){ids.add('o0-267');const {width,height}=cafeSize(state);for(let x=0;x<width;x++)for(let y=0;y<height;y++)ids.add('o0-'+startingFloor(x,y));for(let i=0;i<Math.max(width,height);i++)for(const side of ['left','right'])ids.add('o0-'+startingWall(side,i));}
 for(const f of state.furniture||[])ids.add(furniturePose(f).sprite);
 return [...ids];
}
export async function loadSceneAssets(state,recipes=[]){
 const assets=createFurnitureAssets();
 const [characters]=await Promise.all([loadCharacters(),Promise.all(startupFurniture(state).map(assets.ensure))]);
 return {...assets,...createFoodAssets(recipes),characters};
}
