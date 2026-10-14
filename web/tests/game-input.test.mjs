import test from 'node:test';
import assert from 'node:assert/strict';
import {installGameInput} from '../dist/game-input.js';
function setup(){const events=new Map();installGameInput({addEventListener:(name,fn)=>events.set(name,fn)});return (name,props={})=>{let prevented=false;events.get(name)({cancelable:true,target:{id:'world',closest:selector=>selector==='#world'},preventDefault:()=>prevented=true,...props});return prevented;};}
test('browser zoom, canvas scrolling and image defaults are suppressed',()=>{
 const fire=setup();for(const key of ['+','-','0','='])assert(fire('keydown',{key,ctrlKey:true}));
 assert(fire('wheel',{ctrlKey:true}));assert(!fire('wheel',{}));assert(fire('gesturestart'));assert(fire('keydown',{key:' '}));
 for(const name of ['contextmenu','selectstart','dragstart','dblclick'])assert(fire(name));
});
test('text editing, transcript selection and browser navigation shortcuts stay available',()=>{
 const fire=setup(),target={closest:()=>true};
 for(const name of ['contextmenu','selectstart','dblclick'])assert.equal(fire(name,{target}),false);
 for(const key of ['c','v','a','r','w'])assert.equal(fire('keydown',{key,ctrlKey:true,target}),false);
 assert.equal(fire('keydown',{key:'ArrowDown',target}),false);
});
