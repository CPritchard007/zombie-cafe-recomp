/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d9480 png_get_text */

undefined4 * png_get_text(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (((param_2 == 0) || (param_1 == 0)) || (*(int *)(param_2 + 0x80) < 1)) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
      param_4 = (undefined4 *)0x0;
    }
  }
  else {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *(undefined4 *)(param_2 + 0x88);
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(param_2 + 0x80);
    }
    param_4 = *(undefined4 **)(param_2 + 0x80);
  }
  return param_4;
}


