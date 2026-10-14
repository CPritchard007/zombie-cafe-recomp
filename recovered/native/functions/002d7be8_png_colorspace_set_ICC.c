/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d7be8 png_colorspace_set_ICC */

undefined8
png_colorspace_set_ICC
          (undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 0;
  uVar2 = param_1;
  if ((-1 < *(short *)(param_2 + 0x4a)) &&
     (iVar1 = png_icc_check_length(param_1,param_2,param_3,param_4,param_1,param_2,param_3),
     iVar1 != 0)) {
    uVar2 = param_5;
    iVar1 = png_icc_check_header(param_1,param_2,param_3,param_4,param_5,param_6);
    if (iVar1 != 0) {
      uVar2 = param_5;
      iVar1 = png_icc_check_tag_table(param_1,param_2,param_3,param_4);
      if (iVar1 != 0) {
        png_icc_set_sRGB(param_1,param_2,param_5,0);
        iVar1 = 1;
      }
    }
  }
  return CONCAT44(uVar2,iVar1);
}


