/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dd6b4 png_set_expand_16 */

void png_set_expand_16(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_002dcbd0(param_1,0);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) | DAT_002dd6d0;
  }
  return;
}


