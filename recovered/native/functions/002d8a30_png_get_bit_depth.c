/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d8a30 png_get_bit_depth */

undefined1 png_get_bit_depth(int param_1,int param_2)

{
  undefined1 uVar1;
  
  if ((param_2 == 0) || (param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_2 + 0x18);
  }
  return uVar1;
}


