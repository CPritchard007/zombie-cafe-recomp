/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001538bc GameStateGatya::showBuyToxinDialog */

/* GameStateGatya::showBuyToxinDialog(BuyToxinDialog*) */

void GameStateGatya::showBuyToxinDialog(BuyToxinDialog *param_1)

{
  BuyToxinDialog::show(param_1);
  *(int *)(param_1 + 100) = DAT_001538cc + 0x1538ca;
  return;
}


