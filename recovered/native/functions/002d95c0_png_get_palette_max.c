/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d95c0 png_get_palette_max */

undefined4 png_get_palette_max(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (param_1 == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x20c);
  }
  return uVar1;
}


