/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002614aa FUN_002614aa */

void FUN_002614aa(undefined4 param_1,int param_2)

{
  int iVar1;
  
  while (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x20);
    FUN_002610aa(param_1,*(undefined4 *)(param_2 + 0x14));
    FUN_00261102(param_1,*(undefined4 *)(param_2 + 0x18));
    FUN_00261092(param_1,*(undefined4 *)(param_2 + 8));
    FUN_00260004(param_1,*(undefined4 *)(param_2 + 0x1c));
    FUN_0025fbda(param_1,param_2);
    param_2 = iVar1;
  }
  return;
}


