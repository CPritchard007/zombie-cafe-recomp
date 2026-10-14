/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e39ac png_set_sRGB_gAMA_and_cHRM */

void png_set_sRGB_gAMA_and_cHRM(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    iVar1 = png_colorspace_set_sRGB(param_1,param_2 + 0x28,param_3,param_4,param_4);
    if (iVar1 != 0) {
      *(ushort *)(param_2 + 0x72) = *(ushort *)(param_2 + 0x72) | 0x18;
    }
    png_colorspace_sync_info(param_1,param_2);
  }
  return;
}


