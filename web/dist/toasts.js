export function createExpiry(onExpire,{duration=5000,now=()=>performance.now(),schedule=setTimeout,cancel=clearTimeout}={}){
 let remaining=duration,started=now(),timer,done=false;
 const holds=new Set();
 function stop(){cancel(timer);timer=undefined;}
 function dismiss(){if(done)return;done=true;stop();onExpire();}
 function run(){if(done||holds.size)return;started=now();timer=schedule(dismiss,remaining);}
 run();
 return {
  pause(reason){if(done||holds.has(reason))return;if(!holds.size){remaining=Math.max(0,remaining-(now()-started));stop();}holds.add(reason);},
  resume(reason){if(!holds.delete(reason)||holds.size)return;run();},
  dismiss,
 };
}

export function createToasts(container){
 return message=>{
  const card=document.createElement('div'),text=document.createElement('span'),close=document.createElement('button');
  card.className='toast';card.tabIndex=0;card.setAttribute('role','status');
  text.textContent=message;
  close.type='button';close.textContent='×';close.setAttribute('aria-label','Dismiss notification');
  card.append(text,close);container.append(card);
  const expiry=createExpiry(()=>card.remove());
  card.addEventListener('pointerenter',()=>expiry.pause('hover'));
  card.addEventListener('pointerleave',()=>expiry.resume('hover'));
  card.addEventListener('focusin',()=>expiry.pause('focus'));
  card.addEventListener('focusout',event=>{if(!card.contains(event.relatedTarget))expiry.resume('focus');});
  close.addEventListener('click',()=>expiry.dismiss());
  card.addEventListener('keydown',event=>{if(event.key==='Escape'){event.preventDefault();event.stopPropagation();expiry.dismiss();}});
 };
}
