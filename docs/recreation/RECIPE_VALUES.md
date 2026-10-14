# Recipe values audit

All 234 web recipe records match the APK's `foodData.bin.mid` byte-for-byte for decoded names and fields. See `reports/recipe-values.csv` for costs, yields, timing, sales and profits. Test `recipe-values.test.mjs` independently reads the packaged binary to validate all records and verifies that speed does not change batch cost or yield.

Native references: Recipe::deserialize (0x00238f3a), getCookTimeSeconds (0x00212678), getServings (0x00212694), getCost (0x002126a2), getSellPrice (0x002126ec). Normal food costs the stored ingredient amount once, cooks for stored minutes × 60 seconds, yields the stored serving count, and earns the stored unit price on each sale. FoodStack::FoodStack (0x000f7d54) initializes quantity via getServings.

The recipe book formerly divided the recipe duration by the chosen game speed without distinguishing game time from real time. It now displays base game duration. Details show both that duration and the real wait at the current multiplier, and distinguish batch cost, batch yield, unit sale price, gross revenue and profit. Stove countdowns continue to show estimated real time remaining. Pausing does not change the base recipe duration.

Normal examples: Mystery Meat = 8 coins, 2 game minutes, 12 portions at 1 coin each; Hobo Delight = 30 coins, 5 minutes, 20 at 2; Dishwater Soup = 125 coins, 15 minutes, 50 at 3.

## Native modifiers outside current normal-batch simulation

The original supports FoodStack variants: 3/4 add floor(95%/180% of servings) to batch cost and +1/+2 to unit price; 5 doubles cost and servings; 7 costs floor(75% of base) and takes twice as long; 8/9 take 90%/80% of normal time. Variants 1/2 modify XP. These variants are not selectable in the current web recipe book, so applying their values to ordinary batches would be incorrect.

Native CookTask also multiplies working time by chef/stove modifiers (CharacterData+0xb30, FurnitureData+0x60) and requires worker activity. The current web simulation still advances normal recipes directly; those worker/boost mechanics are not faithfully ported. Native XP has level/chef bonuses and is split between cooking start and delivery; web XP is currently the base award at delivery. These are remaining fidelity gaps, not errors in the recovered recipe prices or serving counts.
