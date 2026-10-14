/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013c8d8 GameStateFriendCafe::showBuyToxinDialog */

/* GameStateFriendCafe::showBuyToxinDialog(GameStateFriendCafe*) */

void GameStateFriendCafe::showBuyToxinDialog(GameStateFriendCafe *param_1)

{
  BuyToxinDialog::show(*(BuyToxinDialog **)(param_1 + 0x1c0));
  *(int *)(*(int *)(param_1 + 0x1c0) + 100) = DAT_0013c8f0 + 0x13c8ee;
  return;
}


