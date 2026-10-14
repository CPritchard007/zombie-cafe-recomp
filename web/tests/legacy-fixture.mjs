import {newStaffState} from '../dist/staff.js';
import {newVisitorState,migrateChairDirections} from '../dist/visitors.js';
export function legacyState(now=Date.now()){
 const furniture=[
  ['fridge',375,0,0],['stove',343,1,0],['stove',343,2,0],['stove',343,3,2],
  ['counter',334,4,0],['counter',186,5,0],['plant',92,7,0],
  ['table',278,2,3],['chair',363,2,4],['chair',109,2,2],
  ['table',278,5,3],['chair',363,5,4],['table',107,2,6],['chair',275,3,6],
  ['table',107,5,6],['chair',275,6,6],['plant',331,0,6],['lamp',344,7,3],['plant',330,0,2]
 ].filter(x=>x[1]!==109).map(([kind,sprite,x,y],i)=>({id:'f'+i,kind,sprite,x,y,flip:false}));
 const stoves=furniture.filter(f=>f.kind==='stove').map((f,i)=>({id:f.id,job:i===0?{recipeId:0,remaining:0,total:120,output:{recipeId:0,quantity:12,price:1,xp:1}}:null}));
 const state={version:1,staff:newStaffState(),visitors:newVisitorState(),doorOpen:true,name:'The Midnight Diner',coins:650,toxin:0,xp:0,speed:1,floor:2,furniture,stoves,stock:[],lastTick:now,saleProgress:0,stats:{cooked:0,served:0,decorated:0,earned:0},claimed:[],muted:true,nextId:100};migrateChairDirections(state);return state;
}
