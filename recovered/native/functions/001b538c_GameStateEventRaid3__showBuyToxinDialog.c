/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b538c GameStateEventRaid3::showBuyToxinDialog */

/* GameStateEventRaid3::showBuyToxinDialog(GameStateEventRaid3*) */

void GameStateEventRaid3::showBuyToxinDialog(GameStateEventRaid3 *param_1)

{
  BuyToxinDialog::show(*(BuyToxinDialog **)(param_1 + 0xa4));
  *(int *)(*(int *)(param_1 + 0xa4) + 100) = DAT_001b53a4 + 0x1b53a0;
  return;
}


