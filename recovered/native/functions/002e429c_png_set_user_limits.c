/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e429c png_set_user_limits */

void png_set_user_limits(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x350) = param_2;
    *(undefined4 *)(param_1 + 0x354) = param_3;
  }
  return;
}


