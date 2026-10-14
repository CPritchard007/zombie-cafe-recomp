# Moving the entrance

Hold the door to begin a move. Drag or tap a wall section, then Apply; Cancel or Escape discards the preview. Normal door clicks still open/close the café. The opening can move to either rear wall, but its section must have no wall decoration and its indoor tile must be clear. Moving is deferred while a customer is crossing the threshold.

The saved `door` field contains `{side,index}`. Older saves default to the original right-wall index 3. Rendering, wall decoration collision checks, reachability, customer paths, and save validation all use the saved entrance. Approaching/entering/leaving customers replan when it changes. The sidewalk route extends around the rear corner to reach left-wall entrances. Resetting the original layout restores the original door.

Original evidence: `000bee68_Cafe__setDoor.c` marks a wall section as an opening and links/unlinks the crossing in the pathfinder; the adjacent section receives a door-edge flag. `000bead4_Cafe__doorPicked.c` performs wall-door hit testing. A movable-door UI could not be confirmed in the recovered functions; hold/preview/apply uses this recreation's existing editor, not a claimed exact native interaction port. The recreation currently supports one entrance.

Tests cover both walls, collision rejection, closed-door entry and exit, save round trips, crossing protection, and simulated arrivals through a moved entrance.
