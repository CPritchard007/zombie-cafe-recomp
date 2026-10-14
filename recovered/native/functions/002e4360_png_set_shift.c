/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e4360 png_set_shift */

void png_set_shift(int param_1,void *param_2)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) | 8;
    memcpy((void *)(param_1 + DAT_002e4380),param_2,5);
  }
  return;
}


