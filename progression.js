export const VIALS_PER_LEVEL=15;
export function levelOf(s){return 1+Math.floor(s.xp/20);}
// Award alongside XP so both values are saved together, including offline cooking.
export function addXp(s,amount){
 const before=levelOf(s);
 s.xp+=amount;
 const reward=Math.max(0,levelOf(s)-before)*VIALS_PER_LEVEL;
 s.toxin=(s.toxin||0)+reward;
 return reward;
}
