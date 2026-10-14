# Fridge

Click a fridge to open shared prepared-food storage. All fridge furniture accesses the same saved inventory, including after moving or selling a fridge. Serve transfers a dish to a counter, Serve all transfers unlocked dishes, Analyze consumes an unfamiliar dish and unlocks its recipe, and Discard requires confirmation. Long-press or the Move / edit button retains decoration editing.

Native evidence in `recovered/native/functions/`:
- `00245070_ZombieCafe__isAddFridgeFood.c`: last-index comparison below 499 implies 500 stored stacks.
- `00121f80_GameStateCafe__checkForFridgeAddCounter.c` and `00121e78_GameStateCafe__checkForFridgeAddCounterAll.c`: transfer stored stacks onto appropriate counters, with recipe checks for Serve all.
- `00121ffc_GameStateCafe__checkForFridgeClose.c`: consume analyzed food and unlock its recipe.
- `00121e38_GameStateCafe__checkForFridgeCloseDelete.c`: remove discarded stacks.
- `000c1184_Cafe__getAppropriateCounterForDish.c` and `00227a72_ServingCounter__addFood.c`: counters may hold multiple stacks; selection accounts for stock and recipe.
- `0012c6c0_GameStateCafe__checkForLevelUp.c`, `0012c500_GameStateCafe__giveFreeFood.c`, and raid/friend-café routines: reward and stolen food enter storage.

Web adaptations: counter selection prefers matching recipes, then least stock and proximity; the native scoring constant is not yet decoded. Analysis unlocks the base recipe because recipe variants are not implemented. The fridge does not change cooking or grant XP. `receiveFridgeFood` is the validated entry point for future reward/raid implementations; those producers are not yet ported, so existing saves open an empty fridge. No free inventory is fabricated. Old saves need no migration. Stored stacks are split on serving to preserve the web stock validation format.

Verification: tests cover analysis/cooking unlocks, serving and portion conservation, locked dishes, capacity, missing counters, discard, and save validation. Browser verification confirms clicking the fridge opens the storage dialog.
