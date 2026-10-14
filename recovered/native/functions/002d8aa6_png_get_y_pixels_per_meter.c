/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d8aa6 png_get_y_pixels_per_meter */

uint png_get_y_pixels_per_meter(int param_1,int param_2)

{
  uint uVar1;
  
  if ((param_2 == 0) || (param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 8) & 0x80;
    if ((uVar1 != 0) && (uVar1 = 0, *(char *)(param_2 + 200) == '\x01')) {
      uVar1 = *(uint *)(param_2 + 0xc4);
    }
  }
  return uVar1;
}


