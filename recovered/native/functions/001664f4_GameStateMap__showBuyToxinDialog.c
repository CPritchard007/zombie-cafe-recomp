/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001664f4 GameStateMap::showBuyToxinDialog */

/* GameStateMap::showBuyToxinDialog(GameStateMap*) */

void GameStateMap::showBuyToxinDialog(GameStateMap *param_1)

{
  int iVar1;
  
  iVar1 = DAT_0016650c;
  BuyToxinDialog::show(*(BuyToxinDialog **)(param_1 + DAT_0016650c));
  *(int *)(*(int *)(param_1 + iVar1) + 100) = DAT_00166510 + 0x166508;
  return;
}


