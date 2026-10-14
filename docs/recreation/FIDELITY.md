# Original-game recreation status

Target: reproduce ZombieCafe-JP-English-v0.1.apk as an offline web game, including its progression and mechanics. The previous small browser sandbox is not the target specification. This implementation is still a partial recreation, not a full emulator or complete gameplay port. No claim of screenshot-exact layout is made without Android runtime reference captures.

## Implemented in this pass

- Original loading image and title-screen background/logo, with responsive framing and Play/Continue/Options controls.
- Full-window café and original bottom-toolbar art for café, recipes, store, characters, orders and options. The old landing-page presentation is replaced. Panel layouts are responsive adaptations, not verified original coordinates.
- All 835 records in furnitureData.bin.mid decoded with exact byte consumption: original names, prices, currency flags, atlas sheet, four sprite references, dimensions, descriptions and remaining numeric fields. This table also contains expansions, toxin packs and consumables, so 835 is not a count of unique furniture objects.
- All 793 furniture sprite regions exported across three sheets. Store search, category filtering and pagination cover every record. Ordinary coin furniture can be bought/placed; floors and walls can be purchased and applied. Existing prototype items remain in the model only for save compatibility.
- All 2,104 art forms exported from the five characterArt files. These include costumes and human/zombie variants, not 2,104 unique gameplay characters. The source 27-part blocks align exactly with all five atlases.
- All 85 packaged native animation files decoded, preserving hierarchy, per-frame transforms, sprite indices, visibility flags and draw order. A shared canvas renderer drives café guests and animated collection previews.
- Original recipe durations enabled by default; the accelerated-clock control is removed from visible settings. Existing progress is reconciled before changing the stored clock rate to 1.
- Existing localStorage saves preserved, with source-backed furniture IDs and catalog preferences added. Runtime assets remain in Cache Storage. The offline cache contains the entire catalog and animation library.

## Evidence

Furniture reader: `recovered/native/functions/000bdfa8_FurnitureData__FurnitureData.c`. Prices/type names are interpreted from their consumers and table values; field_28 is used as the likely unlock level but needs complete Store eligibility logic verification. Remaining uncertain fields retain native struct-offset names.

Character art subpacks: first byte is parts per form (27), followed by UTF names until a zero-length terminator. The number of names times 27 exactly equals each atlas count. `ZombieCafe::cacheImageSubpack` preserves sheet/index identity.

Animations: `CCToon::Load` (002be830), `UpdateAnimation` (002bea12), `PrepareRenderList` (002beb00). Matrix multiplication follows FUN_002be604. Geometry/padding follows CImage::draw(matrix) (0029d0ca), PackedImage::readBin and CImage::setPadding. The sprite scale 4.56620979309082 is the ELF float referenced at Ghidra 000c6ee0 by CharacterData::createAnimation. The UI-preview/world overall scale is a web presentation choice.

## Not complete

- The original characterData.bin table of gameplay identities, stats, abilities and recruitment rules has not been ported. The collection is currently an art browser; it does not unlock/hire all characters.
- Original new-player layout, tutorial sequence, quest triggers, XP thresholds, staff energy, infection, work assignments, customer economy, spoiled food, raids/maps, orders and event rules remain to be ported. Existing three prototype goals and simplified café behavior are still present and must not be treated as original logic.
- Toxin purchases, expansions, windows/wall placement, tombstones, ampoules, planters and special-object effects are deliberately unavailable where their original behavior has not been implemented. Their art/data is present. Wall rendering currently adapts original textures to the existing café geometry.
- Furniture rotation uses the source orientation sprites and paired mirroring. Chairs cycle four seating directions, appliances with no back sprites cycle two, and identical-slot decor is fixed. Original ImageMap anchor points still need a faithful renderer port.
- Original character-specific animation replacements are not yet assigned from characterData. The normal idle/walk set works, but special characters may require alternate actions and replacements.
- Android binary saves and some backend contracts remain unsupported; see ../backend/CONTRACTS.md.

## Rebuild and verify

```
python3 scripts/export_catalogs.py
python3 scripts/export_original_art.py
python3 scripts/update_offline_manifest.py
npm --prefix web test
npm --prefix web run check
npm --prefix web run dev
```

22 tests cover prior gameplay invariants, localStorage, all catalog image paths, all 2,104 part blocks, each frame of all 85 animations, source-price purchases, floor purchases and offline asset manifest coverage. Browser QA verified the original title, character assembly/animation and searchable store. Reference screenshots are in reports/backend/original-title.png and reports/backend/original-cafe.png.

Next priority is porting `Cafe::createForNewPlayer`, `TutorialSystem`, and characterData loading from `ZombieCafe::doInitDataInternal`, so the original progression drives the recovered presentation and content.

## Outdoor terrain

The exterior uses original furniture atlas regions 116 (grass), 117 (sidewalk), 118 (asphalt), and 121 (road stripe). Two intersecting streets sit behind the café walls, with sidewalks on both road edges and grass on the open front sides. Terrain covers the viewport at every zoom and is cached until the viewport changes. The layout is adapted to the current 8×8 café; the native world dimensions and expansion rules are not yet ported. Existing localStorage saves need no migration.

## Entrance rules

Evidence: `Cafe::setDoor`, `Cafe::setDoorOpen`, `Cafe::tick`, `Cafe::doorPicked`, `Cafe::createForNewPlayer`, `GameStateCafe::isValidFurnitureTile`, and the two blocked-path warnings in the APK's `strings.bin.mid`. At byte 389 in `constants.bin.mid`, the ten big-endian integers for world size, sidewalks, raid sidewalks, road width, initial size and door offset are `35,55,13,21,9,17,4,7,6,3`. Native coordinates put the entrance on the NE wall at offset 3; this maps to web tile (3,0), with pavement at (3,-1).

Implemented: wall door with original sprites, click/keyboard-accessible open/close control, persisted `doorOpen` (old saves default open), only-doorway boundary crossing, exit routes while closed, furniture may block the doorway, connected-floor checks and warnings for unreachable chairs/counters/sinks. Removed the invented reserved (7,7) tile. Existing furniture is preserved; old layouts may need the stove at (3,0) moved. New prototype layouts leave the entrance accessible.

Limits: the existing aggregate sales simulation now requires an open, reachable entrance, accessible serving counter and a reachable chair beside a table. It pauses sales immediately when closed; native per-customer meal completion, closing-drain timing, chair orientation and staff task pathfinding still require the full customer/staff simulation. These are not claimed as an exact native port. Native placement accepts blocking furniture and warns rather than forbidding all disconnected layouts.

## Visitor lifecycle update

The earlier aggregate-sales entrance limitation is superseded by the persisted visitor simulation. Diners now reserve seats, wait for food, eat, pay once and exit; closure lets seated diners finish. See [VISITORS.md](VISITORS.md) for recovered rules, verification and remaining staff-service/cleanup adaptations.
