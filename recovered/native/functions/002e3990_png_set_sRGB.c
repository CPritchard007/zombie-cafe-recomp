/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e3990 png_set_sRGB */

void png_set_sRGB(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_2 != 0) && (param_1 != 0)) {
    png_colorspace_set_sRGB(param_1,param_2 + 0x28,param_3,param_4,param_4);
    png_colorspace_sync_info(param_1,param_2);
  }
  return;
}


