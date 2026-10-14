import {levelOf} from './progression.js';
// Native Vector stores its last index: isAddFridgeFood permits indices below 499.
export const FRIDGE_CAPACITY=500;
export const recipeUnlocked=(s,r)=>Math.max(1,r.field_0x16)<=levelOf(s)||(s.unlockedRecipes||[]).includes(r.id);
export function receiveFridgeFood(s,recipe,quantity=recipe.baseServings){
 if(!Number.isInteger(quantity)||quantity<1||quantity>1e9)return {ok:false,message:'Invalid food quantity.'};
 if((s.fridge||[]).length>=FRIDGE_CAPACITY)return {ok:false,message:'The fridge is full. Serve or discard a dish first.'};
 (s.fridge??=[]).push({recipeId:recipe.id,quantity,price:recipe.baseSellPrice});
 return {ok:true,message:recipe.name+' added to the fridge.'};
}
export function fridgeAction(s,recipes,action,index){
 if(!s.furniture.some(f=>f.kind==='fridge'))return {ok:false,message:'Place a fridge to access stored dishes.'};
 const list=s.fridge||[],batch=list[index],recipe=recipes.find(r=>r.id===batch?.recipeId);
 if(action==='serveAll'){
  let count=0;for(let i=list.length-1;i>=0;i--)if(fridgeAction(s,recipes,'serve',i).ok)count++;
  return {ok:count>0,message:count?count+' stored dishes placed on counters.':'No unlocked dishes can be served. Check your counters.'};
 }
 if(!recipe)return {ok:false,message:'That stored dish is no longer available.'};
 if(action==='analyze'){
  if(recipeUnlocked(s,recipe))return {ok:false,message:'You already know this recipe.'};
  (s.unlockedRecipes??=[]).push(recipe.id);list.splice(index,1);
  return {ok:true,message:recipe.name+' analyzed. Recipe unlocked!'};
 }
 if(action==='discard'){list.splice(index,1);return {ok:true,message:'Stored dish discarded.'};}
 if(action!=='serve')return {ok:false,message:'Choose a fridge action.'};
 if(!recipeUnlocked(s,recipe))return {ok:false,message:'Analyze this dish to unlock its recipe first.'};
 const reserved=new Set((s.staff?.people||[]).map(z=>z.deliveryCounterId).filter(Boolean));
 const fridge=s.furniture.find(f=>f.kind==='fridge'),counters=s.furniture.filter(f=>f.kind==='counter'&&!reserved.has(f.id));
 // Native counters can hold multiple food stacks. Prefer the same recipe, then least stocked.
 const score=f=>s.stock.filter(b=>b.counterId===f.id).reduce((n,b)=>n+b.quantity,0);
 counters.sort((a,b)=>Number(!s.stock.some(x=>x.counterId===a.id&&x.recipeId===recipe.id))-Number(!s.stock.some(x=>x.counterId===b.id&&x.recipeId===recipe.id))||score(a)-score(b)||(Math.abs(a.x-fridge.x)+Math.abs(a.y-fridge.y))-(Math.abs(b.x-fridge.x)+Math.abs(b.y-fridge.y)));
 if(!counters.length)return {ok:false,message:'Add an available serving counter first.'};
 // Split large raid/reward stacks to preserve the existing stock save format.
 const chunks=Math.ceil(batch.quantity/recipe.baseServings);
 if(s.stock.length+chunks>10000)return {ok:false,message:'Your serving counters are full.'};
 for(let remaining=batch.quantity;remaining>0;remaining-=recipe.baseServings)s.stock.push({...batch,quantity:Math.min(remaining,recipe.baseServings),counterId:counters[0].id});
 list.splice(index,1);return {ok:true,message:recipe.name+' placed on a serving counter.'};
}
export function validateFridge(s,recipes){
 if(s.fridge!==undefined&&(!Array.isArray(s.fridge)||s.fridge.length>FRIDGE_CAPACITY))throw Error('Invalid fridge inventory.');
 for(const b of s.fridge||[]){const r=recipes.find(r=>r.id===b?.recipeId);if(!r||!Number.isInteger(b.quantity)||b.quantity<1||b.quantity>1e9||b.price!==r.baseSellPrice)throw Error('Invalid stored dish.');}
 if(s.unlockedRecipes!==undefined&&(!Array.isArray(s.unlockedRecipes)||new Set(s.unlockedRecipes).size!==s.unlockedRecipes.length||s.unlockedRecipes.some(id=>!recipes.some(r=>r.id===id))))throw Error('Invalid analyzed recipes.');
}
