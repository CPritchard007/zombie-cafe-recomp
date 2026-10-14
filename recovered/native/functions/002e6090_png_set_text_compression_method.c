/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e6090 png_set_text_compression_method */

void png_set_text_compression_method(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != 0) {
    if (param_2 != 8) {
      png_warning(param_1,DAT_002e60b0 + 0x2e60a4,param_3,param_4,param_4);
    }
    *(int *)(param_1 + 0x19c) = param_2;
  }
  return;
}


