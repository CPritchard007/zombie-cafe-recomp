/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e7a9c CookCommandBar::showBuyToxinDialog */

/* CookCommandBar::showBuyToxinDialog(BuyToxinDialog*) */

void CookCommandBar::showBuyToxinDialog(BuyToxinDialog *param_1)

{
  BuyToxinDialog::show(param_1);
  *(int *)(param_1 + 100) = DAT_000e7aac + 0xe7aaa;
  return;
}


