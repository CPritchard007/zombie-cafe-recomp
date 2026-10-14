export const DIAGNOSTICS_KEY='zombie-cafe.diagnostics.v1';
export function createDiagnostics({storage,build='unknown',context=()=>({}),notify=()=>{},clock=Date.now,logger=console}={}){
 let entries=[],breadcrumbs=[];
 try{const saved=JSON.parse(storage?.getItem(DIAGNOSTICS_KEY)||'[]');if(Array.isArray(saved))entries=saved.filter(e=>e&&typeof e.message==='string').slice(-50);}catch{}
 const clip=(value,max=4000)=>String(value??'').slice(0,max);
 function report(error,source='runtime'){
  const message=clip(error?.message??error??'Unknown error'),now=clock();
  const prior=entries.find(e=>e.build===build&&e.source===source&&e.message===message&&now-e.lastSeen<60000);
  if(prior){prior.count++;prior.lastSeen=now;}else{
   let detail={};try{detail=context();}catch{}
   const entry={time:now,lastSeen:now,count:1,build,source:clip(source,200),name:clip(error?.name||'Error',100),message,stack:clip(error?.stack,8000),context:detail,breadcrumbs:breadcrumbs.slice()};
   entries.push(entry);entries=entries.slice(-50);
   try{logger.error('[Zombie Café] '+source,error,detail);}catch{}
   try{notify(entry);}catch{}
  }
  try{storage?.setItem(DIAGNOSTICS_KEY,JSON.stringify(entries));}catch{}
 }
 function mark(action){breadcrumbs.push({time:clock(),action:clip(action,160)});breadcrumbs=breadcrumbs.slice(-20);}
 function snapshot(){return JSON.stringify({build,generatedAt:new Date(clock()).toISOString(),errors:entries,breadcrumbs},null,2);}
 return {report,mark,snapshot};
}
let active;
export function setDiagnostics(value){active=value;}
export function reportError(error,source){active?.report(error,source);}
export function installErrorHandlers(target,diagnostics){
 target.addEventListener('error',event=>{
  if(event.target&&event.target!==target){const url=event.target.currentSrc||event.target.src||event.target.href;if(url){
   // This offline game owns only same-origin resources. Extensions can inject
   // external stylesheets; their failures are not café asset failures.
   if(target.location?.href){try{if(new URL(url,target.location.href).origin!==new URL(target.location.href).origin)return;}catch{return;}}
   diagnostics.report(new Error('Resource failed: '+String(url).split('?')[0]),'resource');
  }}
  else diagnostics.report(event.error||new Error(event.message||'Unhandled script error'),'uncaught');
 },true);
 target.addEventListener('unhandledrejection',event=>diagnostics.report(event.reason,'unhandled promise'));
}
