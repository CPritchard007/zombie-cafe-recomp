/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d952e png_get_unknown_chunks */

undefined4 * png_get_unknown_chunks(int param_1,int param_2,undefined4 *param_3)

{
  if ((param_2 == 0) || (param_1 == 0)) {
    param_3 = (undefined4 *)0x0;
  }
  else if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_2 + 0xec);
    param_3 = *(undefined4 **)(param_2 + 0xf0);
  }
  return param_3;
}


