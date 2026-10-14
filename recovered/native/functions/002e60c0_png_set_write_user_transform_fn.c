/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e60c0 png_set_write_user_transform_fn */

void png_set_write_user_transform_fn(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) | 0x100000;
    *(undefined4 *)(param_1 + 0x128) = param_2;
  }
  return;
}


