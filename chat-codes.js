// Hidden codes are matched only after submission; never expose suggestions.
const codes=new Map([
 ['utterlyvile',state=>{
  const before=state.toxin||0;
  state.toxin=Math.min(1e9,before+150);
  return {message:`Added ${state.toxin-before} toxin vials.`};
 }],
]);

export function applyChatCode(state,message){
 const code=message.trim().replace(/^\//,'').toLowerCase();
 const apply=codes.get(code);
 return state&&apply?apply(state):null;
}
