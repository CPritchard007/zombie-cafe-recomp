/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dce5c png_set_background */

undefined8
png_set_background(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = param_2;
  uVar1 = png_fixed(param_1,param_2,param_5,param_6,DAT_002dce84 + 0x2dce6a,param_2,param_3);
  png_set_background_fixed(param_1,param_2,param_3,param_4);
  return CONCAT44(uVar2,uVar1);
}


