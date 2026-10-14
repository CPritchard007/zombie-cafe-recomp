/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dd6d4 png_set_gray_to_rgb */

void png_set_gray_to_rgb(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_002dcbd0(param_1,0);
  if (iVar1 != 0) {
    png_set_expand_gray_1_2_4_to_8(param_1);
    *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) | 0x4000;
  }
  return;
}


