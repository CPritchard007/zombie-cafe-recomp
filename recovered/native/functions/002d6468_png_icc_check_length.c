/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d6468 png_icc_check_length */

undefined8 png_icc_check_length(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 local_18;
  
  if (param_4 < 0x84) {
    local_18 = DAT_002d648c + 0x2d6474;
  }
  else {
    uVar1 = 1;
    local_18 = param_1;
    if ((param_4 & 3) == 0) goto LAB_002d6486;
    local_18 = DAT_002d6490 + 0x2d6480;
  }
  uVar1 = FUN_002d5844();
LAB_002d6486:
  return CONCAT44(local_18,uVar1);
}


