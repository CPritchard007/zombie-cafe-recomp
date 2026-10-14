# Original-art overlays

`web/dist/overlays.css` applies recovered APK assets across the full-screen web interface. The café canvas occupies the whole viewport; the HUD, kitchen, toolbar and menus float above it. The shop retains its centered modal and virtualized grid.

Sources: `menu/17`, `18`, `19`, `34` supply chalkboard frames; `menu/25` supplies paper; `menu/8`, `16`, `6` supply green/red buttons and close controls; `menu/39`, `41` supply money/toxin icons; `ui/190`, `251`, `246–250` supply the level star, rating and menu icons. These are responsive adaptations of original assets, not claims of identical native screen coordinates. Native layout reference: `001dca78_HudElement__layout.c`.

The skin includes HUD balances/level/rating, kitchen cards, toolbar, recipe cards, character collection, shop cards, goals, decoration/placement, options and dialogs. Canvas status labels use outlined speech bubbles. Existing gameplay and save controls remain wired to the same actions. Entrance warnings remain visible when paths are blocked.

Notifications use blank original paper with live, wrapping text. The baked “Critic Review” image (`ui/170`) is deliberately not stretched into a generic notification background.

Recipe book and recipe-details dialogs are excluded from the overlay skin at the user’s request. They retain the earlier styles from `styles.css` and `original.css`; the full-screen café and other overlays keep the original-art skin.

The store is also excluded from the original-art overlay skin by request. Its earlier centered modal styling and virtual scroller are retained.

The Options dialog also retains its earlier styling. Its explicit dialog class is cleared when opening other dialog types, so the exception does not affect unrelated overlays.

Orders (the goals panel) also uses the earlier plain panel styling. Restored Orders and recipe panels explicitly set dark foregrounds: the page’s inherited `#eee` text otherwise disappears against their light cards. Orders descriptions, rewards and completed cards retain readable contrast.
