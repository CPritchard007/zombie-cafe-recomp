/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019ec50 GameStateEventRaid::showBuyToxinDialog */

/* GameStateEventRaid::showBuyToxinDialog(GameStateEventRaid*) */

void GameStateEventRaid::showBuyToxinDialog(GameStateEventRaid *param_1)

{
  BuyToxinDialog::show(*(BuyToxinDialog **)(param_1 + 0x7c));
  *(int *)(*(int *)(param_1 + 0x7c) + 100) = DAT_0019ec64 + 0x19ec62;
  return;
}


