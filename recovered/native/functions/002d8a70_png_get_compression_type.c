/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d8a70 png_get_compression_type */

undefined1 png_get_compression_type(int param_1,int param_2)

{
  undefined1 uVar1;
  
  if ((param_2 == 0) || (param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_2 + 0x1a);
  }
  return uVar1;
}


