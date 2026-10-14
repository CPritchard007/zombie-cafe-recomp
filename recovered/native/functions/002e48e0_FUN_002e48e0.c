/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e48e0 FUN_002e48e0 */

void FUN_002e48e0(int param_1)

{
  *(undefined1 *)(param_1 + DAT_002e492c) = 0;
  *(undefined1 *)(param_1 + 0x2d0) = 1;
  if (*(int *)(param_1 + 0x2d4) != 0) {
    *(undefined4 *)(param_1 + 0x2d4) = 0;
    png_free();
  }
  if (*(int *)(param_1 + 0x2d8) != 0) {
    *(undefined4 *)(param_1 + 0x2d8) = 0;
    png_free(param_1);
  }
  if (*(int *)(param_1 + 0x2dc) != 0) {
    *(undefined4 *)(param_1 + 0x2dc) = 0;
    png_free(param_1);
  }
  return;
}


