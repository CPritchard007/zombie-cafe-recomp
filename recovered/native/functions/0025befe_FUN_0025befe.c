/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025befe FUN_0025befe */

void FUN_0025befe(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_14;
  undefined4 uStack_10;
  
  local_14 = *(int *)(param_1 + 8);
  iVar3 = 1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  uStack_10 = param_3;
  while (iVar1 = local_14, local_14 != 0) {
    *(int *)(local_14 + 0xc) = param_1;
    local_14 = *(int *)(local_14 + 8);
    uVar2 = FUN_0025bebe(&local_14,iVar3);
    iVar3 = iVar3 + 1;
    *(undefined4 *)(iVar1 + 8) = uVar2;
    param_1 = iVar1;
  }
  return;
}


