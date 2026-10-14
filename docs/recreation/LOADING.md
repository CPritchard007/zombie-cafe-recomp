# Startup loading

The initial scene used to load all three furniture sheets, slice every furniture sprite into an ImageBitmap, and load all five character sheets plus the complete animation/catalog JSON. That scene payload was 22,078,380 bytes, before the page shell and game catalog.

`prepare_startup_assets.py` now packs the four live café characters into one small texture while preserving each part's dimensions and anchors. The startup bundle includes only idle/walk/sit/eat/carry/serve clips. The starter scene plus its furniture needs 479,356 bytes (97.8% less scene payload); see `reports/startup-assets.json`. This is a byte comparison, not a claim about cold-start wall-clock time. Customized cafés load the art they actually use.

`assets.js` memoizes image requests and uses asynchronous browser decoding. Furniture is loaded from existing individual PNGs instead of slicing all sheets. Newly selected/bought art loads when used. The full 2,104-form character catalog opens on demand, and only sheets represented on a displayed page are decoded. The original full assets remain available.

Service-worker registration waits until the game is ready. Installation caches the small core manifest; the complete offline manifest then downloads with at most two background requests. Existing original assets migrate across app-cache versions. Cached art uses cache-first requests, while the app shell checks the network and falls back offline. Full offline readiness is reported only after the background download succeeds. Startup no longer triggers an automatic second reload on a worker update.

Regeneration: run `python3 scripts/prepare_startup_assets.py` after original art exports and `python3 scripts/update_offline_manifest.py` after runtime asset changes. Checks cover startup requests, atlas anchors, deferred sheets, deduplication and bounded offline caching.
