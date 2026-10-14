# Web recreation reference

## Architecture recovered from this APK

The Android shell is under `recovered/java/sources/com/capcom/zombiecafeandroidJP/`. Start with `ZombieCafeAndroid.java`, `CapcomRenderer.java`, and `SmurfsGLSurfaceView.java`. The activity loads `ZombieCafeAndroid` through JNI, while the renderer delegates frame updates and drawing to the native library. Java includes Android lifecycle, input, audio/platform integration, notifications, billing and network integration.

The gameplay is in `recovered/apk/lib/armeabi/libZombieCafeAndroid.so`. Exported C++ names survive even though debugging information has been stripped. Find functions in `recovered/native/functions/functions.tsv`, using `reports/native-symbols.txt` for the original ELF virtual addresses. Ghidra imports this shared library with a relocation base of `0x10000`; exported pseudocode addresses are therefore `0x10000` above the ELF symbol values. Use names for cross-references rather than assuming the two address lists are identical.

| Subsystem | Names to investigate |
| --- | --- |
| Startup/frame loop | `CapcomApp`, `ZombieCafe`, `CreateGame`, `render` |
| Café simulation and placement | `GameStateCafe`, `Cafe`, `CafeObject`, `Furniture` |
| Cooking and sales | `Recipe`, `Food`, `FoodStack`, `ServingCounter`, `RecipeBook` |
| Characters and tasks | `CharacterInstance`, `CleanupTask`, `StealFoodTask` |
| Raids/map | `GameStateRaid`, `GameStateMap`, `EnemyLayouts` |
| Rendering and atlases | `CImage`, `ImageMap`, `CCTexture2D`, `CapcomGraphics` |
| Data and saves | `DataInputStream`, `DataOutputStream`, `SaveDataInputStream`, `serialize`, `deserialize` |
| Online integrations | `CCServer`, `JSONGetGameInfo`, `JSONTakeOverData`, `SSFJPEventFunction` |

The final native pass disables inferred non-return behavior because the initial pass incorrectly truncated functions after `String::~String`. Known non-returning runtime functions remain configured. The constants loader required a larger decompiler response buffer. Warnings and uncertain signatures still require manual review; `reports/native-summary.json` lists affected files.

Names establish where to investigate; they do not imply every subsystem has been manually reconstructed or validated.

## Asset formats

The `.mid` suffix frequently hides game data; these files are not necessarily MIDI.

* Original PNGs, OGG files and the TTF font can be reused from `recovered/apk/assets/`.
* The 13 `.cct.mid` files are `CCTX` textures: a 28-byte little-endian header (`4s, 6 uint32`), followed by zlib data. Every packaged texture uses format 2, width/height from the header, and 16-bit RGBA4444 pixels. `scripts/export_assets.py` expands each channel to 8 bits without resizing. The packaged `assets/images/Makefile` independently identifies the RGBA4444 packing. The decoded furniture sheet was visually checked.
* Sprite-offset files start with a version byte and big-endian uint16 count. Version 1 records contain four uint16 values (`x,y,width,height`). Version 2 adds a uint16-length UTF-8 name before those coordinates and four trailing shorts. All 19 files parse exactly to EOF. Trailing fields are preserved as `extra`; their precise padding/origin semantics still need confirmation in the native loaders.
* The strings file is UTF-8 text despite its suffix; an unchanged copy is at `recovered/web-assets/data/strings.txt`. It includes both real newlines and literal escaped newlines, which must be interpreted according to the native loader. Animation files, character art/data, furniture data, quests, constants and image maps remain available in their original binary form. Do not treat them as fully decoded simply because their names are known.

Suggested atlas pairing: `furnitureOffsets*` with `furniture*`, `characterOffsets*` with `characterParts*`, `recipeOffsets` with `recipeImages`, `shopOffsets` with `shopImages`, and `mapTilesOffsets` with `mapTiles`. Preserve numeric indices and source order, including repeated frames.

## Recipe table

`foodData.bin.mid` contains a one-byte count (234), then records with a big-endian uint16 UTF-8 name length, name bytes, and `>hbhhhhhbb` fields. This layout is recovered from `Recipe::deserialize` at ELF address `0x00228f3a`. All 7,300 bytes are consumed exactly.

The getter functions at ELF `0x00202678` through `0x00202762` establish the base cost, cook time in minutes, servings, sale price and XP fields. Three fields remain labeled by native struct offset in the JSON: `field_0x16` appears to be unlock level, `field_0x14` appears to be a sprite index, and `field_0x17`/`field_0x18` require further interpretation. These are hypotheses, not confirmed semantics.

Confirmed behavior from the getters:

* Normal cooking time is `cookMinutes * 60`; variants 7, 8 and 9 use multipliers 120, 54 and 48 respectively.
* Variant 5 doubles servings.
* Variants 3 and 4 add 1 and 2 respectively to the base sale price.
* Variants 1 and 2 increase XP using integer arithmetic and a minimum increase; consult `Recipe::getXp` when porting.
* Burn-time getter returns the larger of cooking time plus 600 seconds, or twice cooking time (three times for variant 6).

Variant names and the exact timer interpretation need confirmation at call sites. Other formulas and game systems still need a systematic port.

## Suggested implementation sequence

1. Establish original runtime screenshots and behavior on a compatible Android runtime, including the tutorial and starting café.
2. Build a canvas renderer using the original floor/furniture sheets, sprite indices, isometric placement and camera input.
3. Port local café state, cooking/sales, task updates and offline elapsed-time handling from native functions. Use the exported recipe values directly.
4. Decode character assembly and animation files, then port worker/customer movement and behavior.
5. Recreate UI, furniture placement, progression, tutorial and saving. Validate each against the Android reference.
6. Implement raids, quests and other game modes as separately testable systems.
7. Decide which online features need a replacement backend. Original servers and their data are not recovered by decompiling the APK.

Use local save storage for the first playable browser milestone. Keep the reference recovery intact and implement the web application in a separate directory. A web port requires reimplementation of Android/JNI/OpenGL and service boundaries; it is not a direct compilation of this recovered pseudocode.
