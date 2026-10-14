/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e42f2 png_set_bgr */

void png_set_bgr(int param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) | 1;
  }
  return;
}


