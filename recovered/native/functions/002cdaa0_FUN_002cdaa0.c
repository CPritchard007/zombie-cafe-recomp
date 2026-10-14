/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002cdaa0 FUN_002cdaa0 */

void FUN_002cdaa0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1d4);
  iVar1 = *(int *)(iVar2 + 0x10);
  *(int *)(*(int *)(param_1 + 0x1d0) + 0x18) =
       *(int *)(*(int *)(param_1 + 0x1d0) + 0x18) +
       ((int)(((uint)(iVar1 >> 0x1f) >> 0x1d) + iVar1) >> 3);
  *(undefined4 *)(iVar2 + 0x10) = 0;
  return;
}


