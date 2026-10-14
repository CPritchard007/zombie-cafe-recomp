/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00255278 TombstoneCommandBar::showBuyToxinDialog */

/* TombstoneCommandBar::showBuyToxinDialog(BuyToxinDialog*) */

void TombstoneCommandBar::showBuyToxinDialog(BuyToxinDialog *param_1)

{
  BuyToxinDialog::show(param_1);
  *(int *)(param_1 + 100) = DAT_00255288 + 0x255286;
  return;
}


