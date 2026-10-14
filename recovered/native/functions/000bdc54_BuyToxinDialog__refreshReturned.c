/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bdc54 BuyToxinDialog::refreshReturned */

/* BuyToxinDialog::refreshReturned(void*) */

void BuyToxinDialog::refreshReturned(void *param_1)

{
  deleteContents((BuyToxinDialog *)param_1);
                    /* WARNING: Load size is inaccurate */
  (**(code **)(*param_1 + 0x38))(param_1);
  initContents((BuyToxinDialog *)param_1);
  (**(code **)(**(int **)((int)param_1 + 0xa8) + 0x20))(*(int **)((int)param_1 + 0xa8),0);
  (**(code **)(**(int **)((int)param_1 + 0x74) + 0x20))(*(int **)((int)param_1 + 0x74),1);
  return;
}


