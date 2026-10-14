/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00238f02 FUN_00238f02 */

undefined4 FUN_00238f02(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = 0;
  if (-1 < *(int *)(param_1 + 0x10)) {
    iVar1 = param_1;
  }
  uVar3 = **(undefined4 **)(iVar1 + 4);
  if (*(undefined4 **)(param_1 + 0xc) == *(undefined4 **)(iVar1 + 4)) {
    *(int *)(param_1 + 0xc) = iVar1;
  }
  if (*(int *)(param_1 + 8) == *(int *)(iVar1 + 4)) {
    *(int *)(param_1 + 8) = iVar1;
  }
  uVar2 = *(undefined4 *)((int)*(void **)(iVar1 + 4) + 4);
  operator_delete(*(void **)(iVar1 + 4));
  *(undefined4 *)(iVar1 + 4) = uVar2;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  return uVar3;
}


