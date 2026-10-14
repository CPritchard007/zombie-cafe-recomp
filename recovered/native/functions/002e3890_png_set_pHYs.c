/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e3890 png_set_pHYs */

void png_set_pHYs(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5)

{
  if ((param_2 != 0) && (param_1 != 0)) {
    *(undefined4 *)(param_2 + 0xc0) = param_3;
    *(undefined4 *)(param_2 + 0xc4) = param_4;
    *(undefined1 *)(param_2 + 200) = param_5;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x80;
  }
  return;
}


