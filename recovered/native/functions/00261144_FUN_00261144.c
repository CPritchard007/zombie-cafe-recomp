/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00261144 FUN_00261144 */

void FUN_00261144(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = *(undefined4 **)(param_2 + 0xc);
  iVar3 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    for (; iVar1 = *(int *)(param_2 + 8), iVar3 < iVar1; iVar3 = iVar3 + 1) {
      FUN_0025fbda(param_1,*puVar2,param_3,iVar1,param_4);
      FUN_002610aa(param_1,puVar2[1]);
      FUN_0025fbda(param_1,puVar2[2]);
      FUN_0025fbda(param_1,puVar2[3]);
      FUN_0025fbda(param_1,puVar2[4]);
      puVar2 = puVar2 + 6;
    }
    FUN_0025fbda(param_1,*(undefined4 *)(param_2 + 0xc),param_3,iVar1,param_4);
  }
  return;
}


