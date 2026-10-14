/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c1eb4 CCMarketingView_SwitchToPage */

void CCMarketingView_SwitchToPage(int param_1,uint param_2)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    return;
  }
  iVar1 = **(int **)(param_1 + 0x2c);
  if (iVar1 == 0) {
    return;
  }
  if (*(uint *)(iVar1 + DAT_002c1f30) <= param_2) {
    return;
  }
  if (param_2 == 0xffffffff) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    return;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + DAT_002c1f34) + param_2 * 0x100 + 0xc);
  if (iVar1 == 3) {
    if (*(int *)(param_1 + 0x70) - 1U < 0xfffffffe) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x4c) = 0;
LAB_002c1f0a:
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  else {
    if (iVar1 == 6) {
      *(undefined4 *)(param_1 + 0x80) = 1;
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    else if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      goto LAB_002c1f0a;
    }
    *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
    *(uint *)(param_1 + 0x38) = param_2;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  return;
}


