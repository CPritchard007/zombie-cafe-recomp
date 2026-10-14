/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c2650 CCMarketingView_EnterGameMode */

void CCMarketingView_EnterGameMode(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  piVar2 = *(int **)(param_1 + 0x2c);
  if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      uVar3 = **(undefined4 **)(DAT_002c26b4 + 0x2c266a);
      **(undefined4 **)(DAT_002c26b4 + 0x2c266a) = 0;
      *(undefined4 *)(param_1 + 8) = uVar3;
    }
    *(int *)(param_1 + 0xc) = iVar1 + 1;
    if (*(int *)(param_1 + 0x38) != -1) {
      iVar1 = *(int *)(*(int *)(*piVar2 + DAT_002c26b8) + *(int *)(param_1 + 0x38) * 0x100 + 0xc);
      if (iVar1 == 3) {
        if (*(int *)(param_1 + 0x7c) != 0) {
          *(undefined4 *)(param_1 + 0x7c) = 0;
        }
      }
      else if (iVar1 == 6) {
        *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
      }
    }
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 1;
  }
  return;
}


