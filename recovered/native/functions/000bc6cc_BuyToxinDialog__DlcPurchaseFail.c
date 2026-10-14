/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bc6cc BuyToxinDialog::DlcPurchaseFail */

/* BuyToxinDialog::DlcPurchaseFail(void*, unsigned int, ccDlcFailureCode) */

void BuyToxinDialog::DlcPurchaseFail(int param_1)

{
  if (*(int **)(param_1 + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x6c) + 0x1c))();
  }
  return;
}


