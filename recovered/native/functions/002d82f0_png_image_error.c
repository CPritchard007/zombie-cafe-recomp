/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d82f0 png_image_error */

undefined4 png_image_error(int param_1,undefined4 param_2)

{
  png_safecat(param_1 + 0x20,0x40,0,param_2);
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) | 2;
  png_image_free(param_1);
  return 0;
}


