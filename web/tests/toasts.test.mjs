import test from 'node:test';
import assert from 'node:assert/strict';
import {createExpiry} from '../dist/toasts.js';
function clock(){
 let time=0,nextId=0,expired=0;const jobs=new Map();
 const expiry=createExpiry(()=>expired++,{now:()=>time,schedule:(fn,delay)=>{jobs.set(++nextId,{fn,at:time+delay});return nextId;},cancel:id=>jobs.delete(id)});
 return {expiry,get expired(){return expired;},advance(ms){time+=ms;for(const [id,job] of [...jobs])if(job.at<=time){jobs.delete(id);job.fn();}}};
}
test('notifications expire after five seconds',()=>{const c=clock();c.advance(4999);assert.equal(c.expired,0);c.advance(1);assert.equal(c.expired,1);});
test('hover pauses expiry and leaving resumes the remaining time',()=>{
 const c=clock();c.advance(2000);c.expiry.pause('hover');c.advance(20000);assert.equal(c.expired,0);
 c.expiry.resume('hover');c.advance(2999);assert.equal(c.expired,0);c.advance(1);assert.equal(c.expired,1);
});
test('keyboard focus holds a toast even after the pointer leaves',()=>{
 const c=clock();c.advance(1000);c.expiry.pause('hover');c.expiry.pause('focus');c.expiry.resume('hover');c.advance(10000);assert.equal(c.expired,0);
 c.expiry.resume('focus');c.advance(4000);assert.equal(c.expired,1);
});
test('manual dismissal and repeated pointer events never duplicate expiry',()=>{
 const c=clock();c.expiry.pause('hover');c.expiry.pause('hover');c.expiry.resume('hover');c.expiry.resume('hover');c.expiry.dismiss();c.expiry.dismiss();c.advance(10000);assert.equal(c.expired,1);
});
