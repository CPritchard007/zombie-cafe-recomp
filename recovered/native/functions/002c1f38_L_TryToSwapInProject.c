/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c1f38 L_TryToSwapInProject */

/* L_TryToSwapInProject(CMarketingView*) */

void L_TryToSwapInProject(CMarketingView *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar2 = *(int *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    if (iVar2 == 0) {
      uVar1 = **(undefined4 **)(DAT_002c1f64 + 0x2c1f54);
      **(undefined4 **)(DAT_002c1f64 + 0x2c1f54) = 0;
      *(undefined4 *)(param_1 + 8) = uVar1;
    }
    *(int *)(param_1 + 0xc) = iVar2 + 1;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return;
}


