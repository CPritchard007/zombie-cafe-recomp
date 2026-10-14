import test from 'node:test';
import assert from 'node:assert/strict';
import {createDiagnostics,installErrorHandlers,DIAGNOSTICS_KEY} from '../dist/diagnostics.js';
const quiet={error(){}};
test('diagnostics retain stack, context and recent actions across reloads and coalesce repeats',()=>{
 const data=new Map(),storage={getItem:k=>data.get(k),setItem:(k,v)=>data.set(k,v)};let now=1000,alerts=0;
 const d=createDiagnostics({storage,build:'test',clock:()=>now,logger:quiet,context:()=>({speed:5}),notify:()=>alerts++});
 for(let i=0;i<25;i++)d.mark('action-'+i);
 const error=new Error('broken stove');d.report(error,'simulation');now++;d.report(error,'simulation');
 const report=JSON.parse(d.snapshot());assert.equal(report.errors.length,1);assert.equal(report.errors[0].count,2);assert.match(report.errors[0].stack,/broken stove/);assert.equal(report.errors[0].context.speed,5);assert.equal(report.errors[0].breadcrumbs.length,20);assert.equal(alerts,1);
 const restored=createDiagnostics({storage,logger:quiet});assert.equal(JSON.parse(restored.snapshot()).errors[0].message,'broken stove');assert(data.has(DIAGNOSTICS_KEY));
});
test('broken storage, reporter callbacks and non-Error throws never break reporting',()=>{
 const storage={getItem(){throw Error('denied');},setItem(){throw Error('quota');}};
 const d=createDiagnostics({storage,logger:quiet,context(){throw Error('bad context');},notify(){throw Error('bad UI');}});
 assert.doesNotThrow(()=>d.report('plain rejection','promise'));
 assert.equal(JSON.parse(d.snapshot()).errors[0].message,'plain rejection');
 for(let i=0;i<75;i++)d.report(Error('failure-'+i));
 assert.equal(JSON.parse(d.snapshot()).errors.length,50);
});
test('global handlers capture script, resource and rejected promise failures',()=>{
 const handlers={},target={addEventListener:(name,fn)=>handlers[name]=fn},seen=[];
 installErrorHandlers(target,{report:(error,source)=>seen.push([error.message||error,source])});
 handlers.error({target,error:Error('script')});handlers.error({target:{src:'http://localhost/food.png?x=1'}});handlers.unhandledrejection({reason:'async'});
 assert.deepEqual(seen,[['script','uncaught'],['Resource failed: http://localhost/food.png','resource'],['async','unhandled promise']]);
});

test('external injected fonts do not raise café errors; local font failures still do',()=>{
 const handlers={},seen=[],target={location:{href:'http://localhost:4173/'},addEventListener:(name,fn)=>handlers[name]=fn};
 installErrorHandlers(target,{report:(error,source)=>seen.push([error.message,source])});
 handlers.error({target:{href:'https://fonts.googleapis.com/css2?family=Example'}});
 assert.equal(seen.length,0);
 handlers.error({target:{href:'http://localhost:4173/assets/thunder.ttf'}});
 assert.deepEqual(seen,[['Resource failed: http://localhost:4173/assets/thunder.ttf','resource']]);
});
