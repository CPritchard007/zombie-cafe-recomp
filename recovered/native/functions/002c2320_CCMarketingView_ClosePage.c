/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c2320 CCMarketingView_ClosePage */

void CCMarketingView_ClosePage(CMarketingView *param_1,uint param_2)

{
  int iVar1;
  
  if (((*(int **)(param_1 + 0x2c) != (int *)0x0) && (**(int **)(param_1 + 0x2c) != 0)) &&
     ((iVar1 = L_GetNextRealPage(param_1,param_2), iVar1 != -1 || (*(int *)(param_1 + 0x38) != -1)))
     ) {
    if (*(int *)(param_1 + 0x4c) == 0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    *(undefined4 *)(param_1 + 0x4c) = 1;
    *(int *)(param_1 + 0x3c) = iVar1;
  }
  return;
}


