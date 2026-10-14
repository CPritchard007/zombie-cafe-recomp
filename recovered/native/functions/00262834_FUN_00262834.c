/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00262834 FUN_00262834 */

int FUN_00262834(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x3c) < param_2) {
    iVar1 = *(int *)(param_1 + 0x4c) + 1;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + param_2;
  }
  else {
    *(int *)(param_1 + 0x40) = iVar1 + param_2;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - param_2;
  }
  return iVar1;
}


