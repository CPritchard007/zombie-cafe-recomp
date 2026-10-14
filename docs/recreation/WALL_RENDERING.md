# Wall rendering

The renderer draws floor tiles first, then interleaves wall sections, furniture and indoor characters by ground depth. Sections run from the back corner toward the outer ends. Each wall draws its attached decoration immediately; the door draws with its owning section. Wall editing outlines draw after the scene so the selection remains visible.

Recovered evidence:
- `000bfa4c_Cafe__paint.c`: floor mesh precedes the ordered CafeObject draw list.
- `000c13fc_Cafe__addWallSection.c`: wall sections enter that same ordered list.
- `000bdd64_CafeObject__compare.c`: ordering compares the object's stored depth.
- `000c4850_CafeObject__setPosition.c`: depth derives from screen-space ground Y, with native type-specific adjustments.
- `000c4f70_CafeWall__draw.c`: attached decoration draws immediately after its wall.
- `000bea18_Cafe__addWallDecor.c`: decoration belongs to its wall section.

This replaces the web renderer's reversed, separate wall pass and full-wall background polygons. Original sprites and side mirroring remain. The web projection uses x+y for ground depth and retains its existing character depth offset, doorway cutout and outdoor pedestrian clipping; native projection constants and all type-specific depth adjustments are not yet exact ports.

Regression tests cover floors before objects, wall/furniture interleaving, section order, and both wall lengths. Browser inspection checks the corner, seams, door and adjacent furniture.

Wall sprites include an exposed side lip: the 72px plain-wall artwork has an approximately 64px face. The renderer now extends each nearer section over the previous lip, mirrors that overlap on the opposite side, and clips the first sections at the corner. A small shear aligns the artwork slope with the web tile projection. This fixes the visible backwards seam effect that depth sorting alone did not address.
