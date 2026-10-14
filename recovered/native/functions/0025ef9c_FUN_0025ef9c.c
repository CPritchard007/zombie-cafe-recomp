/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025ef9c FUN_0025ef9c */

undefined4 FUN_0025ef9c(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_2 + 0x10) == 0) {
    iVar2 = *(int *)(param_2 + 0xc);
    iVar4 = *param_1;
    iVar1 = FUN_0025ee10(0,*(int *)(param_2 + 0x24) + 2,param_3,param_4,param_4);
    *(int *)(param_2 + 0x10) = iVar1;
    iVar3 = 0;
    if (iVar1 == 0) {
      *(undefined1 *)(iVar4 + 0x36) = 1;
      return 0;
    }
    for (; iVar3 < *(int *)(param_2 + 0x24); iVar3 = iVar3 + 1) {
      *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar3) =
           *(undefined1 *)
            (*(int *)(iVar2 + 0xc) + *(int *)(iVar3 * 4 + *(int *)(param_2 + 4)) * 0x18 + 0x16);
    }
    *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar3) = 100;
    *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar3 + 1) = 0;
  }
  return *(undefined4 *)(param_2 + 0x10);
}


