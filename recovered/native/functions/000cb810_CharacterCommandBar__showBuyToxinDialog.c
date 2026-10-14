/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cb810 CharacterCommandBar::showBuyToxinDialog */

/* CharacterCommandBar::showBuyToxinDialog(BuyToxinDialog*) */

void CharacterCommandBar::showBuyToxinDialog(BuyToxinDialog *param_1)

{
  BuyToxinDialog::show(param_1);
  *(int *)(param_1 + 100) = DAT_000cb820 + 0xcb81e;
  return;
}


