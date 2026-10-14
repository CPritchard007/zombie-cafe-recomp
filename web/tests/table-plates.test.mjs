import test from 'node:test';
import assert from 'node:assert/strict';
import {tablePlateRect} from '../dist/scene.js';
test('different dish aspect ratios share the tabletop center',()=>{
 const box={x:-48.36,y:25-118*.78,w:124*.78,h:118*.78};
 for(const image of [{width:96,height:64},{width:64,height:96}]){
  const r=tablePlateRect(box,image);
  assert.equal(r.x+r.w/2,0);
  assert(Math.abs(r.y+r.h-Math.min(r.h/2,r.w*.34)-(box.y+box.w*.34))<1e-8);
  assert(Math.abs(r.h/r.w-image.height/image.width)<1e-8);
 }
});
test('plate anchors follow resized and translated furniture bounds',()=>{
 const plate={width:96,height:64},box={x:10,y:20,w:100,h:90};
 const a=tablePlateRect(box,plate),b=tablePlateRect({...box,x:210,y:320},plate);
 assert.equal(b.x-a.x,200);assert(Math.abs(b.y-a.y-300)<1e-8);
 const round=tablePlateRect({x:0,y:0,w:69.42,h:74.88},plate);
 assert(Math.abs(round.y+round.h/2-69.42*.34)<1e-8);
});
