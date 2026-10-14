/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d6444 png_colorspace_sync */

void png_colorspace_sync(int param_1,int param_2)

{
  if (param_2 != 0) {
    memcpy((void *)(param_2 + 0x28),(void *)(param_1 + 0x39c),0x4c);
    png_colorspace_sync_info(param_1,param_2);
  }
  return;
}


