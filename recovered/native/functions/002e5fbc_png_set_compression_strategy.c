/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e5fbc png_set_compression_strategy */

void png_set_compression_strategy(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) | 1;
    *(undefined4 *)(param_1 + 0x194) = param_2;
  }
  return;
}


