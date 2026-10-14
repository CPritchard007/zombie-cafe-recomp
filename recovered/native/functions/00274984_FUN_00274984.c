/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00274984 FUN_00274984 */

void FUN_00274984(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int local_14;
  
  local_14 = param_2;
  iVar1 = FUN_00274878(*param_1,param_2,&local_14,param_4,param_1);
  if (iVar1 == 0) {
    iVar1 = *(int *)(local_14 + 8);
    uVar2 = *(undefined4 *)(local_14 + 4);
    *(int *)(iVar1 + 0x44) = local_14;
    *(undefined4 *)(iVar1 + 0x38) = uVar2;
    *(undefined4 **)(iVar1 + 0x34) = param_1;
    *(int *)(iVar1 + 0x48) = param_2;
    uVar3 = 0;
    if (param_2 == 1) {
      uVar3 = 100;
    }
    *(undefined1 *)(iVar1 + 5) = uVar3;
    *param_3 = iVar1;
  }
  return;
}


