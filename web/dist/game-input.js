// Suppress browser defaults that conflict with game controls, not navigation
// shortcuts or editing/copy/paste in text fields and the chat transcript.
const textTarget=target=>Boolean(target?.closest?.('input,textarea,select,[contenteditable]:not([contenteditable="false"]),#chat-messages'));
export function installGameInput(target=document){
 const prevent=e=>{if(e.cancelable)e.preventDefault();};
 for(const name of ['contextmenu','selectstart','dragstart','dblclick'])target.addEventListener(name,e=>{if(!textTarget(e.target))prevent(e);});
 target.addEventListener('auxclick',e=>{if(e.button===1&&e.target?.closest?.('#world'))prevent(e);});
 // Pointer events on the canvas implement the game's own pinch zoom.
 for(const name of ['gesturestart','gesturechange','gestureend'])target.addEventListener(name,prevent,{passive:false});
 target.addEventListener('wheel',e=>{if(e.ctrlKey||e.metaKey)prevent(e);},{passive:false});
 target.addEventListener('keydown',e=>{
  if(e.isComposing)return;
  if((e.ctrlKey||e.metaKey)&&['+','=','-','_','0'].includes(e.key))prevent(e);
  if(e.target?.id==='world'&&[' ','PageUp','PageDown','Home','End','ArrowUp','ArrowDown','ArrowLeft','ArrowRight'].includes(e.key))prevent(e);
 });
}
