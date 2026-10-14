/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017f500 GameStateRaid::showBuyToxinDialog */

/* GameStateRaid::showBuyToxinDialog(GameStateRaid*) */

void GameStateRaid::showBuyToxinDialog(GameStateRaid *param_1)

{
  BuyToxinDialog::show(*(BuyToxinDialog **)(param_1 + 0x168));
  *(int *)(*(int *)(param_1 + 0x168) + 100) = DAT_0017f518 + 0x17f514;
  return;
}


