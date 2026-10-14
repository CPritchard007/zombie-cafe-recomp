// Recovered from Cafe::createForNewPlayer, GameStateCafe::init and constants.bin.mid.
export const STARTING_SIZE={width:6,height:7};
export const STARTING_FURNITURE=[
 // catalog id, kind, sprite, x, y (native diamond coordinates mapped to the web grid)
 [1,'stove',84,0,6],[2,'sink',280,0,4],[0,'fridge',83,0,3],[6,'plant',274,5,6],
 [16,'counter',301,2,4],[16,'counter',301,3,4],[3,'table',322,2,2],[4,'chair',285,1,2]
];
export const STARTING_WINDOWS=[{x:0,y:3},{x:0,y:1}];
export function startingFloor(x,y){
 // Native dirty-floor sprite base = 145. Remaining cells use Plain Tile Floor (45).
 const u=6-y,v=x+1;
 if(u<=2&&v===1)return 158;if(u<=2&&v===2)return 157;
 if(u===5&&v===1)return 152;if(u===6&&v===1)return 151;
 const patches={'0,3':150,'0,4':149,'0,5':148,'0,6':147,'1,5':145,'1,6':146,'1,3':156,'1,4':153,'2,3':155,'2,4':154,'2,5':159,'6,6':160,'5,6':161,'6,5':162};
 return patches[u+','+v]??45;
}
export function startingWall(side,index){
 // Native dirty-wall sprite base = 138; default Plain Wall = 66.
 return side==='left'?({5:138,1:143,0:144}[index]??66):({5:140,4:139,0:141,1:142}[index]??66);
}
