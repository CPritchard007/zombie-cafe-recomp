# Visitor simulation

The former four wandering sprites and one-sale-every-15-seconds loop have been replaced by persisted visitors in `visitors.js`. The renderer reads that state; it no longer invents customer behavior. Each visitor has an identity, position, route, facing, phase, reservation, meal, timer and exit. The PRNG seed and arrival countdown are saved too. Old saves start with no simulated customers and retain all furniture, stock, money, cooking jobs and door state. Existing chairs acquire a facing toward their adjacent table once; subsequent moves retain facing, and “Turn chair” rotates it.

## Recovered rules

- `GameStateCafe::spawnCustomer` selects one of two sidewalk endpoints. Some people pass the café; entrants pass through the outside doorway, inside doorway and an entry pause before an EatTask.
- `GameStateCafe::resetCustomerTimer`: arrivals interpolate from 18 seconds at low rating to 4.5 seconds at high rating, with ±1 second variance. Visit chance interpolates from 211/256 to 238/256. Entry pause is 1 second ±0.8 seconds.
- `Cafe::getTableChairIsFacing`, `Cafe::tableHasCustomer`, and `FindSeatTask::start`: choose a reachable chair facing a table; reserve that chair and table. One table cannot serve two customers simultaneously.
- `EatTask::tick`: wait for food up to 60 seconds, pause 2 seconds after receiving it, eat for 30 seconds, release the seat, leave a dirty plate. No seat, no food, or a broken route causes an unsuccessful visit.
- `GameStateCafe::onEatTaskComplete`: successful meals award the recipe's sale price and increase rating by 0.005; unsuccessful visits decrease it by 0.006. The web simulation pays once at meal completion, not when stock is placed on a serving counter.
- Closing stops new entrants, not meals already in progress. Paths still allow departure through the doorway. Passersby continue outside.

`export_visitor_rules.py` reads the relevant contiguous portion of constants.bin.mid using Constants::load's field order. Integer fields are big-endian; `DataInputStream::readFloat` copies little-endian bytes. Extracted offsets and values are in `reports/visitor-constants.json`.

## Persistence and verification

Quarter-second simulation steps and a saved remainder make foreground/offline progression equivalent. Reconciliation remains capped at the existing eight-hour limit. Repeated reconciliation at the same timestamp cannot consume another portion or pay twice. Reduced-motion rendering does not disable simulation. Save imports validate visitor phase, timers, coordinates, recipe prices, identifiers and exclusive table claims.

## Explicit remaining differences

This ports the ordinary visitor lifecycle, not the whole staff/character system. Normal customer visuals currently use three recovered human forms and a shared web walking speed. CharacterData-specific probabilities, speeds, quests, combat/infection, special-table effects and tips remain unported. New visitor state starts at a web migration rating of 0.5; native decoration/objective rating bonuses are not included.

Service now dispatches a persisted zombie through counter pickup, table delivery, clearing, and sink washing tasks; see `STAFF_AI.md`. Dirty plates no longer expire on a timer. Native offline catch-up has its own aggregate algorithm; the web edition instead runs its persisted ordinary visitor simulation during the existing offline window. These adaptations must not be described as an exact reproduction of the entire native AI.

## Extended walkway and smooth movement

The exterior route now extends from x=-24 to x=32 on the pavement (y=-1), beyond the café and normal camera view. Visitors approach from these endpoints and leave at the far endpoint. Older saves keep visitors in place and migrate their eventual exit targets. They still enter only at the doorway.

The visible game's model clock advances on animation frames; HUD updates and localStorage saves remain once per second, with saves also on actions/pagehide. Rendering interpolates one quarter-second step behind the simulation, along every recorded corner of that step. This maintains walking speed without the old one-second move/pause pattern, and does not cut across furniture at turns. Rendering snapshots are transient; visitor progress is persisted as before. The open doorway clips through the wall and signage to the terrain cache at matching screen coordinates, with exterior visitors visible through the opening.

## Character draw order

Chairs and other furniture share normal tile depth with indoor characters, so furniture can overlap characters naturally. Floors and placement previews draw before characters. Outdoor visitors draw after floors with wall clipping; an open doorway is a separate visible region. This prevents floor overlays during entry. Render-pass tests cover chair depth ordering and floor ordering for indoor, seated, and doorway visitors.

## Original character selection

`export_customer_rules.py` reads all 1,724 records of `characterData.bin.mid` to exact EOF. Read order comes from native `ZombieCafe::doInitDataInternal` (ELF 0x242d4c–0x24315c; add 0x10000 for Ghidra addresses). The first three bytes are minimum level, weight and minimum rating byte. Constructor and selector references confirm minimum level at CharacterData+0xaec, weight at +0xaf4, rating at +0xaf0; rating is divided by 255 (verified native literal at ELF 0x243100).

`customer-selection.js` implements the eligible-record weighted draw from `Cafe::getDataForRandomCustomer` (0x000c0164). It uses the current web progression level and café popularity, excludes zero weights and the level-255 unavailable records, and excludes Gaist IDs 1100–1102 while events are inactive. Native Gaist flags include an event-active flag, a level check and an extra Bana flag; offline mode does not activate any of them. No art form receives an invented uniform chance. Multiple source records can share an appearance and contribute their respective weights.

There are 132 ordinary visitor records with available art. At level 2 and rating .30, 24 records map to nine human appearances. The full 1,064-form human registry remains drawable, but costume, reward and event artwork is not automatically admitted into ordinary visitor spawning. Human atlas sheets are loaded on demand and shared with the collection. Startup still uses the compact character bundle.

Saved visitors retain their appearance and optional `customerDataId`. The first three appearance IDs are unchanged. Visitors from the unrestricted-art build (appearance >2 without a source record) are deterministically migrated to an eligible record without moving them or altering their paths. Characters are not reselected merely because rating later falls.

Validation covers every native level/rating eligibility boundary, exact weighted ticket totals, zero-weight/unavailable/event exclusions, early-level ordinary-human distribution, save migration and lazy atlas loading. Original rating bonuses and progression systems are still bounded by the currently implemented web simulation; this does not claim those separate systems are fully ported.
