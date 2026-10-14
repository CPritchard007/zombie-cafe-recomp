/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e4462 png_set_invert_mono */

void png_set_invert_mono(int param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) | 0x20;
  }
  return;
}


