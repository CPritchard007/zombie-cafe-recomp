/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d8a20 png_get_image_height */

undefined4 png_get_image_height(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 4);
  }
  return uVar1;
}


