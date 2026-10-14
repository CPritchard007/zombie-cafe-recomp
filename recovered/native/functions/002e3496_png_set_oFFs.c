/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e3496 png_set_oFFs */

void png_set_oFFs(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5)

{
  if ((param_2 != 0) && (param_1 != 0)) {
    *(undefined4 *)(param_2 + 0xb4) = param_3;
    *(undefined4 *)(param_2 + 0xb8) = param_4;
    *(undefined1 *)(param_2 + 0xbc) = param_5;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x100;
  }
  return;
}


