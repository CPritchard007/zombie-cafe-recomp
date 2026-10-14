/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e023c FUN_002e023c */

void FUN_002e023c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 4);
  iVar3 = (int)(*(byte *)(param_1 + 0xb) + 7) >> 3;
  for (iVar2 = 0; iVar2 != iVar3; iVar2 = iVar2 + 1) {
    *(byte *)(param_2 + iVar2) = (*(byte *)(param_3 + iVar2) >> 1) + *(char *)(param_2 + iVar2);
  }
  param_2 = param_2 + iVar2;
  for (iVar1 = 0; iVar1 != iVar4 - iVar3; iVar1 = iVar1 + 1) {
    *(char *)(param_2 + iVar1) =
         (char)((int)((uint)*(byte *)(param_3 + iVar2 + iVar1) +
                     (uint)*(byte *)((param_2 - iVar2) + iVar1)) >> 1) + *(char *)(param_2 + iVar1);
  }
  return;
}


