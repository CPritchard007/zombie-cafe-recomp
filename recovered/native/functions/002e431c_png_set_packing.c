/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e431c png_set_packing */

void png_set_packing(int param_1)

{
  if ((param_1 != 0) && (*(byte *)(param_1 + 0x218) < 8)) {
    *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) | 4;
    *(undefined1 *)(param_1 + DAT_002e4340) = 8;
  }
  return;
}


