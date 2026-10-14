/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e6058 png_set_text_compression_window_bits */

void png_set_text_compression_window_bits(int param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_2 < 0x10) {
      if (param_2 < 8) {
        png_warning(param_1,DAT_002e608c + 0x2e607c);
        param_2 = 8;
      }
    }
    else {
      png_warning(param_1,DAT_002e6088 + 0x2e606a);
      param_2 = 0xf;
    }
    *(int *)(param_1 + 0x1a0) = param_2;
  }
  return;
}


