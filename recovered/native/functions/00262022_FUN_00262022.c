/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00262022 FUN_00262022 */

void FUN_00262022(int param_1)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x14); iVar1 = iVar1 + 1) {
    if (*(int *)(*(int *)(param_1 + 0x10) + iVar1 * 0x10 + 4) != 0) {
      FUN_00262002();
    }
  }
  return;
}


