import {startingFloor,startingWall,STARTING_WINDOWS} from './starting-layout.js';
import {cafeSize,ENTRANCE} from './world.js';
export const floorKey=(x,y)=>`${x},${y}`;
export const wallKey=(side,index)=>`${side},${index}`;
export function floorSprite(s,x,y){return s.floorTiles?.[floorKey(x,y)]??(s.originalSurfaces&&!s.floorChanged?'o0-'+startingFloor(x,y):s.floor);}
export function wallSprite(s,side,index){return s.wallTiles?.[wallKey(side,index)]??s.wallSprite??(s.originalSurfaces?'o0-'+startingWall(side,index):'o0-66');}
export function wallDecor(s){return s.wallDecor??(s.originalSurfaces?STARTING_WINDOWS.map((p,i)=>({id:'w'+i,catalogId:'original-5',sprite:'o0-267',kind:'wallArt',side:'left',index:p.y})):[]);}
export function validFloor(s,x,y){const {width,height}=cafeSize(s);return Number.isInteger(x)&&Number.isInteger(y)&&x>=0&&y>=0&&x<width&&y<height;}
export function validWall(s,side,index){const {width,height}=cafeSize(s);return ['left','right'].includes(side)&&Number.isInteger(index)&&index>=0&&index<(side==='left'?height:width);}
export function canPlaceWallDecor(s,side,index,ignoreId){return validWall(s,side,index)&&!(side==='right'&&index===ENTRANCE.x)&&!wallDecor(s).some(f=>f.id!==ignoreId&&f.side===side&&f.index===index);}
export function validateSurfaces(s,catalog){
 for(const [field,kind,valid] of [['floorTiles','floor',key=>{const [x,y]=key.split(',').map(Number);return key===floorKey(x,y)&&validFloor(s,x,y);}],['wallTiles','wall',key=>{const [side,i]=key.split(',');return key===wallKey(side,Number(i))&&validWall(s,side,Number(i));}]]){
  const entries=s[field];if(entries===undefined)continue;
  if(!entries||Array.isArray(entries)||typeof entries!=='object'||Object.keys(entries).length>cafeSize(s).width*cafeSize(s).height)throw Error('Invalid surface edits.');
  for(const [key,sprite] of Object.entries(entries))if(!valid(key)||!(kind==='floor'&&[2,5,29,'o0-45'].includes(sprite)||kind==='wall'&&sprite==='o0-66'||catalog.some(c=>c.kind===kind&&c.sprite===sprite)||typeof sprite==='string'&&new RegExp(kind==='floor'?'^o0-(14[5-9]|15[0-9]|16[0-2])$':'^o0-(13[89]|14[0-4])$').test(sprite)))throw Error('Invalid surface edits.');
 }
 if(s.wallDecor!==undefined){
  if(!Array.isArray(s.wallDecor)||s.wallDecor.length>cafeSize(s).width+cafeSize(s).height)throw Error('Invalid wall decorations.');
  const ids=new Set(),positions=new Set();
  for(const f of s.wallDecor){const key=wallKey(f.side,f.index);if(typeof f.id!=='string'||!/^w\d+$/.test(f.id)||ids.has(f.id)||positions.has(key)||!validWall(s,f.side,f.index)||f.side==='right'&&f.index===ENTRANCE.x||f.kind!=='wallArt'||!(f.catalogId==='original-5'&&f.sprite==='o0-267'||catalog.some(c=>c.id===f.catalogId&&c.kind==='wallArt'&&c.sprite===f.sprite)))throw Error('Invalid wall decorations.');ids.add(f.id);positions.add(key);}
 }
}
