/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c91dc FUN_002c91dc */

void FUN_002c91dc(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  param_4 = (undefined4 *)*param_4;
  for (iVar2 = 0; iVar2 < *(int *)(param_1 + 0x140); iVar2 = iVar2 + 1) {
    puVar3 = (undefined1 *)*param_4;
    param_4 = param_4 + 1;
    puVar4 = (undefined1 *)*param_3;
    param_3 = param_3 + 1;
    puVar5 = puVar3 + *(int *)(param_1 + 0x70);
    for (; puVar3 < puVar5; puVar3 = puVar3 + 2) {
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
      *puVar3 = uVar1;
      puVar3[1] = uVar1;
    }
  }
  return;
}


