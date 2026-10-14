/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d8c90 png_get_x_offset_inches_fixed */

void png_get_x_offset_inches_fixed(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = png_get_x_offset_microns();
  png_muldiv_warn(param_1,uVar1,500,0x7f);
  return;
}


