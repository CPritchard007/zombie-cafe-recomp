export const GRID=8;
// Cafe_DOOR_Y=3 in constants.bin.mid; native NE wall maps to our y=0 edge.
export const ENTRANCE=Object.freeze({x:3,y:0});
export const DOORSTEP=Object.freeze({x:3,y:-1});

export const cafeSize=s=>s.size||{width:GRID,height:GRID};
export const MIN_ZOOM=.55,MAX_ZOOM=2.25;
export const clampZoom=z=>Math.max(MIN_ZOOM,Math.min(MAX_ZOOM,Number.isFinite(z)?z:1));
