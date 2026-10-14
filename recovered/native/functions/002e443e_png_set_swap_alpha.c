/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e443e png_set_swap_alpha */

void png_set_swap_alpha(int param_1)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) | 0x20000;
  }
  return;
}


