/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00267394 FUN_00267394 */

undefined8 FUN_00267394(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_2 + 0x38);
  *(int *)(param_2 + 0x38) = iVar2 + 1;
  iVar1 = FUN_002651e0(param_1,*(undefined4 *)(param_2 + 0x3c),(iVar2 + 2) * 4);
  if (iVar1 == 0) {
    for (iVar3 = 0; iVar3 < iVar2; iVar3 = iVar3 + 1) {
      FUN_0025fbda(param_1,*(undefined4 *)(iVar3 * 4 + *(int *)(param_2 + 0x3c)));
    }
    FUN_0025fbda(param_1,param_3);
    FUN_0025fbda(param_1,*(undefined4 *)(param_2 + 0x3c));
    *(undefined4 *)(param_2 + 0x38) = 0;
  }
  else {
    *(undefined4 *)(iVar2 * 4 + iVar1) = param_3;
    *(undefined4 *)((iVar2 + 1) * 4 + iVar1) = 0;
  }
  *(int *)(param_2 + 0x3c) = iVar1;
  return CONCAT44(param_3,iVar2);
}


