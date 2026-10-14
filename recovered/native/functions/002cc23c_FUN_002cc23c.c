/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002cc23c FUN_002cc23c */

void FUN_002cc23c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1c4);
  if (*(int *)(param_1 + 0x154) < 2) {
    if (*(uint *)(param_1 + 0x94) < *(int *)(param_1 + 0x14c) - 1U) {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x158) + 0xc);
    }
    else {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x158) + 0x4c);
    }
  }
  else {
    uVar1 = 1;
  }
  *(undefined4 *)(iVar2 + 0x1c) = uVar1;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  return;
}


