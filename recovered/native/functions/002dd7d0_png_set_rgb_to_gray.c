/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dd7d0 png_set_rgb_to_gray */

undefined8
png_set_rgb_to_gray(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = png_fixed();
  iVar2 = DAT_002dd804 + 0x2dd7ea;
  uVar1 = png_fixed(param_1,(int)((ulonglong)uVar3 >> 0x20),param_5,param_6);
  png_set_rgb_to_gray_fixed(param_1,param_2,(int)uVar3,uVar1);
  return CONCAT44(param_2,iVar2);
}


