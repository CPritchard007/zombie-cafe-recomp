/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d8bac png_get_y_offset_microns */

uint png_get_y_offset_microns(int param_1,int param_2)

{
  uint uVar1;
  
  if ((param_2 == 0) || (param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 8) & 0x100;
    if ((uVar1 != 0) && (uVar1 = 0, *(char *)(param_2 + 0xbc) == '\x01')) {
      uVar1 = *(uint *)(param_2 + 0xb8);
    }
  }
  return uVar1;
}


