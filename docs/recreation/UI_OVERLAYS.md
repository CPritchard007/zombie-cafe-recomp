# Full-screen interface

`web/dist/overlays.css` keeps the full-screen café layout and applies a shared squared chalkboard theme across HUD panels, kitchen cards, menus, dialogs, chat, editing controls, and top toasts. The theme uses CSS dark green surfaces, square wood-colored borders, cream text, and sage accents instead of stretched recovered panel images. Original game artwork, currency icons, menu icons, and canvas speech bubbles remain.

The menu is a horizontal row centered above the bottom edge, sharing outer spacing with the kitchen cards and café/zoom controls. Narrow screens place those controls above the menu to avoid overlap. The store retains its centered modal and virtual scroller. Chat stays hidden until opened and flush with the right edge. Top toasts expire independently, pausing while hovered or focused.
