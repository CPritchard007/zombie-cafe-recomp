# Original starting café

The preset comes from `Cafe::createForNewPlayer` (000c1b44), `GameStateCafe::init` (00129ea0), and the packaged `constants.bin.mid` and furniture catalog. Native width/height are 7×6. Mapping native diamond coordinates `(u,v)` to web coordinates `(v-22,12-u)` gives a 6-column, 7-row floor, with the entrance at (3,0).

The eight floor objects are dirty stove (item 1), dirty sink (2), dirty fridge (0), dead plant (6), two plain serving counters (16), plain table (3), and plain chair (4). Two boarded windows (5) hang on the left wall. Their coordinates are transcribed in `web/dist/starting-layout.js`. The stove begins empty. The chair faces its table.

The native setup uses floor sprite base 145 and wall sprite base 138 for the damaged patches, with ordinary floor 45 and wall 66 elsewhere. These are sprite IDs, not store item IDs. The resource constants begin at byte 6368: counter 16, stove 15, table 3, chair 4, pot 186, dirty pot 197, plate 187, dirty stove 1, dirty fridge 0, dirty sink 2, dead plant 6, loose tile 181, stained tile 180, boarded window 5, dirty plate 193, tile cover 194, white wall 27; the following two bytes are 138 and 145.

New games use this preset. Existing saves remain compatible. Settings → Original starting layout first saves the complete current café in local storage under `zombie-cafe.before-original-layout`, then replaces the layout and visitors while retaining wallet, XP, stock, goals and statistics. Restore layout backup recovers the complete previous café, including its cooking jobs. This action does not claim to reproduce the native tutorial, starting economy or staff system.

# Camera

Mouse dragging and one-finger dragging pan the map after a 6-pixel movement threshold; dragging suppresses furniture selection and placement clicks. Touch pointers also support two-finger pinch and midpoint movement. Trackpad pinch and wheel zoom use continuous exponential scaling; button zoom eases per animation frame. The point under the gesture stays anchored. The camera pan and zoom are saved locally. Zoom is clamped to 0.55–2.25 and remembered in the existing local-storage view preferences. Reset returns to the centered 1× view.
