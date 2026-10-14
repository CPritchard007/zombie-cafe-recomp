/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d95fc png_malloc_array */

int png_malloc_array(undefined4 param_1,uint param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int unaff_r7;
  
  if ((param_3 == 0) || (unaff_r7 = -((int)(param_2 - 1 | param_2) >> 0x1f), unaff_r7 != 0)) {
    png_error(param_1,DAT_002d9638 + 0x2d9616,param_3,param_4,param_4);
  }
  uVar1 = __udivsi3(0xffffffff,param_3);
  if (param_2 <= uVar1) {
    unaff_r7 = png_malloc_base(param_1,param_2 * param_3);
  }
  return unaff_r7;
}


