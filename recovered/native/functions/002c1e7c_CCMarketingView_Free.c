/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c1e7c CCMarketingView_Free */

void CCMarketingView_Free(int param_1)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0xb4);
  if (pvVar1 != (void *)0xffffffff) {
    CCDialog::Free(pvVar1);
    *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
  }
  return;
}


