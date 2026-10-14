/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002600ce FUN_002600ce */

void FUN_002600ce(int param_1)

{
  while (*(int *)(param_1 + 0x1d8) != 0) {
    *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(*(int *)(param_1 + 0x1d8) + 0x10);
    FUN_0025fbda(param_1);
  }
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  return;
}


