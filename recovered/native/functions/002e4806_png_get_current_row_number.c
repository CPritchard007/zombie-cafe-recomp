/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e4806 png_get_current_row_number */

undefined4 png_get_current_row_number(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x1d8);
  }
  return uVar1;
}


