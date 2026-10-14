/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d88fa png_set_error_fn */

void png_set_error_fn(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x114) = param_2;
    *(undefined4 *)(param_1 + 0x10c) = param_3;
    *(undefined4 *)(param_1 + 0x110) = param_4;
  }
  return;
}


