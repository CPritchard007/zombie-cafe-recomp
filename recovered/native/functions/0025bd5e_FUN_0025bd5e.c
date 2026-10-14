/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025bd5e FUN_0025bd5e */

void FUN_0025bd5e(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = **(int **)(param_1 + 0x10);
    if ((*(int *)(param_1 + 0x14) != 0) || (param_1 == *(int *)(iVar1 + 0x18))) {
      if (*(int *)(param_1 + 0x18) != 0) {
        *(int *)(*(int *)(param_1 + 0x18) + 0x14) = *(int *)(param_1 + 0x14);
      }
      if (*(int *)(param_1 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x18) = *(undefined4 *)(param_1 + 0x18);
      }
      if (*(int *)(iVar1 + 0x14) == param_1) {
        *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
      }
      if (*(int *)(iVar1 + 0x18) == param_1) {
        *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_1 + 0x18);
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(int *)(*(int *)(param_1 + 0x10) + 0x20) = *(int *)(*(int *)(param_1 + 0x10) + 0x20) + -1;
    }
  }
  return;
}


