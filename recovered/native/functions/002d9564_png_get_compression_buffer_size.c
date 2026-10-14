/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d9564 png_get_compression_buffer_size */

int png_get_compression_buffer_size(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x134) << 0x10 < 0) {
      iVar1 = 0x380;
    }
    else {
      iVar1 = 0x180;
    }
    param_1 = *(int *)(param_1 + iVar1);
  }
  return param_1;
}


