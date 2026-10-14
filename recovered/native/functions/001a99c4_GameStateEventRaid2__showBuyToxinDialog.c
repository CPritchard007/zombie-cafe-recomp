/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a99c4 GameStateEventRaid2::showBuyToxinDialog */

/* GameStateEventRaid2::showBuyToxinDialog(GameStateEventRaid2*) */

void GameStateEventRaid2::showBuyToxinDialog(GameStateEventRaid2 *param_1)

{
  BuyToxinDialog::show(*(BuyToxinDialog **)(param_1 + 0xa0));
  *(int *)(*(int *)(param_1 + 0xa0) + 100) = DAT_001a99dc + 0x1a99d8;
  return;
}


