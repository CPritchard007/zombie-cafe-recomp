/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e4420 png_set_add_alpha */

void png_set_add_alpha(int param_1)

{
  if (param_1 != 0) {
    png_set_filler(param_1);
    if ((int)(*(uint *)(param_1 + 0x13c) << 0x10) < 0) {
      *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) | 0x1000000;
    }
  }
  return;
}


