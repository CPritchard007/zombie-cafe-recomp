/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e4450 png_set_invert_alpha */

void png_set_invert_alpha(int param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) | 0x80000;
  }
  return;
}


