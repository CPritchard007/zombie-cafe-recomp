/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001360e8 GameStateColosseum::showBuyToxinDialog */

/* GameStateColosseum::showBuyToxinDialog(GameStateColosseum*) */

void GameStateColosseum::showBuyToxinDialog(GameStateColosseum *param_1)

{
  BuyToxinDialog::show(*(BuyToxinDialog **)(param_1 + 0x90));
  *(int *)(*(int *)(param_1 + 0x90) + 100) = DAT_00136100 + 0x1360fc;
  return;
}


