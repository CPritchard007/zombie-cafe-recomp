# Zombie café staff AI

The stationary chef has been replaced by a persisted worker. Old saves acquire one worker without resetting furniture, money, cooking, visitors, or inventory. Staff positions, routes, tasks, carried portions/dishes, random seed and completed task counts are included in the existing localStorage save and export/import flow. The fixed-step simulation also runs during offline catch-up.

## Recovered behavior implemented

- `001264cc_GameStateCafe__tickStaff.c`: service dispatch precedes cleanup; only an available worker receives an assignment. Diners and dirty tables are reserved against duplicate assignments. Idle workers wait one second and have a 1-in-20 chance to choose a random interior destination.
- `002258f8_ServeTask__tick.c`: walk to a reachable serving counter, face it, pick up one portion, carry it to a reachable side of the diner's table, face the table, and serve. If the diner leaves, return the portion to a counter. If no counter is reachable, retain the carried food until a route becomes available.
- `000ddc94_CleanupTask__tick.c`: walk to the dirty table, clear it, carry the dishes to a reachable sink, and wash. The old five-second automatic clearing is removed. With no reachable sink, new cleanup work is not assigned. If a sink disappears after pickup, the worker retains the dishes and retries.
- Both task classes reference `Constants::ServeTask_SERVE_TIME`, decoded as 350 ms at byte 6442 in `constants.bin.mid`. `scripts/export_staff_rules.py` records this evidence in `reports/staff-constants.json`. Handoffs complete on the next 250 ms simulation boundary.
- Original `carryNW/SW` and `serveNW/SW` animations are included in the compact startup bundle. Walking uses the existing smooth interpolation and movement-facing rules. Floors remain below characters; chairs retain normal depth ordering.

Routes avoid furniture and replan when a target is moved or a path becomes blocked. Food leaves stock at pickup and reaches a diner only at the table. Payment remains at the end of eating. No worker means no automatic service or cleanup.

## Remaining native systems

This implements ordinary café service, cleanup, and idle movement, not the entire native zombie system. The current web roster still consists of one chef form, with shared web movement speed; staff hiring/infection, individual CharacterData stats, player work/rest commands, energy/rest, focus/daydream interruptions, restless attacks, combat/raids, cooking assignments remain separate work. Recipe preparation still uses the player controls; finished batches are automatically carried to counters. Staff selection is deterministic rather than the native random selection among available staff. Carried food uses a recovered plate at skeletal replacement slot zero rather than recipe-specific replacement images.

Tests cover physical pickup/delivery, cleanup/sink requirements, cancelled orders and stock conservation, removed counters, multi-worker reservations, migration, malformed saves, smooth rendering, and identical offline versus incremental progress.

## Animation playback correction

Staff handoffs record their own start time and facing in the save. The 350 ms inventory event remains separate from clip completion (16 SW / 17 NW frames at 24 fps); movement waits for the handoff clip to finish. One-shot playback clamps instead of looping. Locomotion resets its transient playback clock on clip or facing changes, and stationary carriers hold a carry pose. Plate rendering uses slot zero’s animated translation and original layer ordering, including mirroring, instead of a fixed screen overlay. Older saves without an active handoff record remain valid.

## Stove-to-counter delivery

Finished batches now follow `000ed2cc_DishToCounterTask__tick.c`: approach the stove, perform pickup, carry the whole batch, and put it on a counter. The web scheduler reserves an empty reachable counter and stove before collection. If all counters are full, the batch remains on the stove. If a reserved counter disappears after pickup, the carried batch is preserved and rerouted when an empty counter becomes reachable.

Stock entries carry `counterId`. Workers pick single portions only from the counter they physically visit; counters render a plate and their remaining portion count. Old shared inventory is attached to available counters without deleting any overflow. Batch quantity, price and XP are derived from the original recipe; cooked/XP rewards apply once at counter drop. Individual serving, eating and payment behavior remains unchanged.

Cooking timers now advance alongside staff/visitor fixed steps, preventing a long offline catch-up from delivering food before its cooking time has elapsed. Existing cooking jobs acquire recipe output metadata during save validation. The former instant serve button now requests pickup, and autonomous pickup does not require that button.

## Manual movement

Click/tap a staff zombie, then an empty café floor tile. A selection ring and Done control indicate command mode; tap the same zombie, use Done, or Escape to deselect. With the canvas focused, arrows choose a tile and Enter sends the zombie. Map dragging and pinch zoom keep their existing gesture suppression, so a pan does not issue a movement command.

Native references establish character selection (`GameStateCafe::select(CharacterInstance*)`, 0x0011adc6), character-specific controls in `GameStateCafe::tick`, and task-based walking (`MoveTask`, including `onWorkButtonPressed`, 0x00118ad4). Some original touch handling remains fragmented in the decompiler; the web tap-to-floor interaction is an adaptation of those selection/task mechanisms, not a claim of a byte-for-byte input port. Rest, combat and explicit work-object assignment are separate systems.

`moveStaff` validates the destination and finds a reachable path before mutating the worker. A persisted `manualTarget` temporarily takes priority over the current work phase, retaining carried food/dishes and reservations. Path movement uses the same speed, facing and render interpolation as normal staff motion. On arrival work replans from the actual position. New furniture triggers rerouting or a blocked-path stop. Paused game time also pauses commanded walking. Deselecting does not cancel the accepted movement order.

### Customer infection

Tap a visitor inside the café to open recruitment details, then select **Infect**.
The dialog shows the original customer's coin/toxin price and current worker cap.
Free recruits are supported. The action rechecks presence, balance and capacity
when confirmed; it charges once and transfers the visitor into persistent staff.
Workers use the same serving, batch delivery, cleanup and manual movement logic.
Seats are released, existing served meals leave dirty dishes, and servers whose
customer disappears return their carried portions through the existing AI.
Restoring the starting furniture layout preserves recruited workers.

Evidence in the original APK:
- `0012bfd4_GameStateCafe__onInfectButtonPressed.c`: per-level zombie cap check.
- `0012bdc8_GameStateCafe__onInfectTaskComplete.c`: coin affordability and toxin
  confirmation; permits a null task for instant infection.
- `0012bba0_GameStateCafe__completeInfectPurchase.c`: price at CharacterData
  offset `0xb20`, currency at `0xb24`, payment, visitor-to-staff transfer.
- `000c6b60_CharacterData__CharacterData.c` and native loader ELF
  `0x242d4c–0x24315c`: price is the integer following the boolean, currency is
  the next byte. The alternate artwork name supplies the zombie form when set.
- `constants.bin.mid` offset 1274: `GameStateCafe_INSTANT_INFECT = 1`.
- Offset 6927: zombie cap array, beginning `1,2,3,3,4,4,5,5…`, reaching 12.

`scripts/export_infection_rules.py` extracts prices/forms and constants into
`web/dist/infection-rules.js`. The first web infection now uses a saved chef-follow
task; conversion and payment happen only when the chef reaches the customer.
The original gates its instant branch on tutorial ID 11; because the full tutorial
system is not ported, the web uses completion of the first infection as its proxy.
Subsequent infections use the APK's enabled instant branch. No fixed incubation
time was found in InfectTask: it delegates to FollowTask and completes on arrival.
The web uses existing walking animation/pathfinding for the pursuit, not the
native movement animation 0x13. Pausing stops pursuit, and saves preserve it.
Unreachable/departing customers cancel without payment. It moves seated recruits to
nearby empty floor so they can join the worker pathfinder. It uses the current web
level calculation to index the original caps. Native energy/combat and individual
worker skill multipliers remain separate unfinished systems; this implementation
does not claim to reproduce those effects.
