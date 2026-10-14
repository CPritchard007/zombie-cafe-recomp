# Zombie Café — web edition

A playable browser-first milestone using artwork, music and recipes recovered from the supplied APK. No Android emulator, backend, API key, install step, or build step is required.

```sh
cd web
npm start
# Open http://127.0.0.1:4173
```

Requires Node.js 22 or later for the local server. Deploy `dist/` on any static host. The game uses native ES modules and Canvas 2D; it needs an HTTP server rather than opening index.html with file://.

## Play

- Serve the complimentary first batch using Station 01.
- Select a recipe and an empty stove. A Mystery Meat batch takes 10 seconds in the default Quick shift mode.
- Serve completed batches; customers buy portions automatically and add coins.
- Collect goal rewards to progress and unlock recipes.
- Decorate: select furniture, then click an empty tile or use the column/row controls. Tap existing furniture to move or flip it. The entrance stays clear.
- Choose free floor styles; zoom in/out or reset the view.
- Settings: switch 12×/1× time, enable music, rename the café, export/import a backup, or start fresh after confirmation.

Progress saves in localStorage under `zombie-cafe.web.v1`. Save imports are validated before confirmation and replacement. Away progress is capped at eight real hours. Local and hosted origins have separate storage; export/import transfers your café between them. Music starts only after a user gesture.

## Implementation

- `dist/model.js`: deterministic state transitions, cooking, stock/sales, placement, goals and save validation.
- `dist/scene.js`: responsive isometric canvas renderer, sprite depth sorting, guest paths, placement previews, and hit testing.
- `dist/app.js`: recipe book, kitchen controls, shop/goals, settings and persistence.
- `dist/styles.css`: desktop and phone layouts, original local display font and reduced-motion support.
- `dist/assets/`: cropped original furniture and food art, original music/font, and temporary characters composed from recovered body parts.
- `../scripts/prepare_web_assets.py`: regenerates the browser asset package from the recovery.

The scene's walls and interface are new web designs. Recipe costs, cook times, servings, selling prices and XP are taken from the recovered data; level-unlock interpretation follows the recovered field pending further original runtime validation. The 12× clock is a prototype convenience. Customer sales, starting café, goals, furniture prices, progression and character rigs are new simplified implementations. These are not claims of original behavioral parity. Original copyright belongs to the respective owners; this is an unofficial recreation.

## Validation

```sh
npm run check
npm test
```

Node tests cover cooking completion, duplicate action protection, funds/unlock checks, offline reconciliation, furniture collisions, new-stove persistence, rewards, malformed saves, isometric coordinate inversion, and packaged asset paths.

Manual browser QA checks the cook/serve/sell loop, reload persistence, goal rewards, furniture placement, search, and responsive rendering. Browser extension listener messages can appear in DevTools independently of game code.

## Next milestones

1. Decode and port the native character animation/assembly data and original character behavior.
2. Replace simplified customer sales with explicit seating, ordering, worker tasks and path-linked service.
3. Reconstruct original progression, quests, furniture values and initial café from native evidence.
4. Add raids, combat, recipe variants, spoilage and additional game modes.
5. Decide which online features require a replacement server; the original services are not reimplemented here.

## Offline backend simulation

The browser now uses a local simulation service for saves and bootstrap responses. Its shared responder also serves APK-style routes on localhost. See [backend contracts](../docs/backend/CONTRACTS.md) for confirmed fields, inferred inactive-event values, and unsupported binary/online protocols.

After one successful load, a service worker caches the complete game for offline reopening at the same URL. Keep a save export as a backup. Nothing is sent to the original backend. Try `http://127.0.0.1:4173/api/offline/status` while the local server is running.

All durable game memory belongs in localStorage: game progress, cooking jobs/timestamps, inventory, furniture, rewards, settings and any future stateful simulator features. The existing game key is `zombie-cafe.web.v1`; view preferences use `zombie-cafe.view.v1`. Saves run after actions, every simulation tick, and when the page hides. Music preference survives reopening (playback may wait for a browser-required user gesture). Active tab, recipe search/filter, zoom and selected stove also survive reopening. Animation frames, open dialogs and uncommitted placement previews remain transient. Bundled images/audio/code use the service worker cache, not localStorage.

## Original-game fidelity pass

The target is full original-game behavior. Startup now uses the APK loading/title art and original menu icons; the Store includes all 835 recovered records, and the character collection previews 2,104 art forms with the native skeletal renderer. Normal cooking uses original timing. See [the fidelity report](../docs/recreation/FIDELITY.md) for exact implemented coverage and outstanding gameplay systems. Asset completeness is not full gameplay parity.

Rebuild the additional assets using `scripts/export_catalogs.py`, `scripts/export_original_art.py` and `scripts/update_offline_manifest.py` from the repository root.

## GitHub Pages deployment

The workflow in `.github/workflows/gh-pages.yml` runs syntax checks and all tests
on pushes to `main`, regenerates the offline manifests, and publishes `web/dist`
to the `gh-pages` branch. It also deploys that same site artifact using GitHub
Pages' deployment action, since a branch push made with `GITHUB_TOKEN` does not
itself trigger a Pages build. Manual runs are available on `main`.

After adding this project to a GitHub repository:

1. In **Settings → Pages → Build and deployment**, choose **GitHub Actions**.
2. Push `main` (or run **Publish Zombie Cafe** from the Actions tab).
3. Open the URL shown by the `github-pages` deployment.

No server, npm dependencies, or custom deployment secret is required. The workflow
uses the repository's `GITHUB_TOKEN`. Only the static game is published to Pages;
recovery files and the original APK stay out of the published site. Relative asset
URLs and the service-worker scope support repository URLs such as
`https://OWNER.github.io/REPOSITORY/`. Saves remain in that site's local storage;
use save export/import to move progress from localhost.
