/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011fadc GameStateCafe::showBuyToxinDialog */

/* GameStateCafe::showBuyToxinDialog(GameStateCafe*) */

void GameStateCafe::showBuyToxinDialog(GameStateCafe *param_1)

{
  L_PrintLog((char *)(DAT_0011fb4c + 0x11faea),(char *)(DAT_0011fb48 + 0x11fae8));
  CookCommandBar::close(*(CookCommandBar **)(param_1 + 0xb4));
  Store::close(*(Store **)(param_1 + 0x84));
  TombstoneCommandBar::close(*(TombstoneCommandBar **)(param_1 + 0xc0));
  Storage::close(*(Storage **)(param_1 + 0xbc));
  PlantCommandBar::close(*(PlantCommandBar **)(param_1 + 0xb8));
  CharacterCommandBar::close(*(CharacterCommandBar **)(param_1 + 0xac));
  cancelAllEdits(param_1);
  exitEditModes();
  BuyToxinDialog::show(*(BuyToxinDialog **)(param_1 + 0x8c));
  *(int *)(*(int *)(param_1 + 0x8c) + 100) = DAT_0011fb50 + 0x11fb44;
  return;
}


