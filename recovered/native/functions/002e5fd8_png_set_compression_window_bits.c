/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e5fd8 png_set_compression_window_bits */

void png_set_compression_window_bits(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_2 < 0x10) {
      if (param_2 < 8) {
        png_warning(param_1,DAT_002e600c + 0x2e5ffc);
        param_2 = 8;
      }
    }
    else {
      png_warning(param_1,DAT_002e6008 + 0x2e5fea);
      param_2 = 0xf;
    }
    *(int *)(param_1 + 0x18c) = param_2;
  }
  return;
}


