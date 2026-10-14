/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d91b6 png_get_sPLT */

undefined4 * png_get_sPLT(int param_1,int param_2,undefined4 *param_3)

{
  if ((param_2 == 0) || (param_1 == 0)) {
    param_3 = (undefined4 *)0x0;
  }
  else if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_2 + 0xf4);
    param_3 = *(undefined4 **)(param_2 + 0xf8);
  }
  return param_3;
}


