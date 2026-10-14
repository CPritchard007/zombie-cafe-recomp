/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00263920 FUN_00263920 */

void FUN_00263920(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_2 + 0x28) == 0) {
    iVar4 = *param_1;
    iVar1 = FUN_0025ee10(0,*(int *)(param_2 + 8) + 1,param_3,param_4,param_4);
    iVar2 = 0;
    iVar3 = 0;
    if (iVar1 == 0) {
      *(undefined1 *)(iVar4 + 0x36) = 1;
      return;
    }
    for (; iVar2 < *(int *)(param_2 + 8); iVar2 = iVar2 + 1) {
      iVar4 = *(int *)(param_2 + 0xc) + iVar3;
      iVar3 = iVar3 + 0x18;
      *(undefined1 *)(iVar1 + iVar2) = *(undefined1 *)(iVar4 + 0x16);
    }
    *(undefined1 *)(iVar1 + *(int *)(param_2 + 8)) = 0;
    *(int *)(param_2 + 0x28) = iVar1;
  }
  FUN_00263832(param_1,0xffffffff,*(undefined4 *)(param_2 + 0x28),0);
  return;
}


