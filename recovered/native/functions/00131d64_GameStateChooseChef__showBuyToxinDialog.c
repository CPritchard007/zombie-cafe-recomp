/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00131d64 GameStateChooseChef::showBuyToxinDialog */

/* GameStateChooseChef::showBuyToxinDialog(BuyToxinDialog*) */

void GameStateChooseChef::showBuyToxinDialog(BuyToxinDialog *param_1)

{
  BuyToxinDialog::show(param_1);
  *(int *)(param_1 + 100) = DAT_00131d74 + 0x131d72;
  return;
}


