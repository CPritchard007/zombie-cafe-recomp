/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025de4c FUN_0025de4c */

void FUN_0025de4c(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int local_14;
  
  uVar3 = 0;
  local_14 = 0;
  FUN_0025dce0(*(undefined4 *)(*param_1 + 0xb4),param_2,0,&local_14,param_1);
  if (local_14 != 0) {
    iVar1 = *(int *)(local_14 + 8);
    uVar2 = *(undefined4 *)(local_14 + 4);
    *(int *)(iVar1 + 0x44) = local_14;
    *(undefined4 *)(iVar1 + 0x38) = uVar2;
    *(int **)(iVar1 + 0x34) = param_1;
    *(int *)(iVar1 + 0x48) = param_2;
    if (param_2 == 1) {
      uVar3 = 100;
    }
    *(undefined1 *)(iVar1 + 5) = uVar3;
  }
  return;
}


