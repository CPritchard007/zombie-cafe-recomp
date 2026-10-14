/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010d268 GameStateAmpouleRaid::showBuyToxinDialog */

/* GameStateAmpouleRaid::showBuyToxinDialog(GameStateAmpouleRaid*) */

void GameStateAmpouleRaid::showBuyToxinDialog(GameStateAmpouleRaid *param_1)

{
  BuyToxinDialog::show(*(BuyToxinDialog **)(param_1 + 0x84));
  *(int *)(*(int *)(param_1 + 0x84) + 100) = DAT_0010d280 + 0x10d27c;
  return;
}


