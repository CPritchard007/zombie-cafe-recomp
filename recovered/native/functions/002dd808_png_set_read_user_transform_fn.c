/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dd808 png_set_read_user_transform_fn */

void png_set_read_user_transform_fn(int param_1,undefined4 param_2)

{
  *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) | 0x100000;
  *(undefined4 *)(param_1 + 0x124) = param_2;
  return;
}


