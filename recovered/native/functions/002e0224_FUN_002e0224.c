/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e0224 FUN_002e0224 */

void FUN_002e0224(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  for (iVar2 = 0; iVar2 != iVar1; iVar2 = iVar2 + 1) {
    *(char *)(param_2 + iVar2) = *(char *)(param_3 + iVar2) + *(char *)(param_2 + iVar2);
  }
  return;
}


