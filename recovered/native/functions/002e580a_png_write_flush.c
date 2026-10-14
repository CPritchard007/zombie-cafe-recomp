/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e580a png_write_flush */

void png_write_flush(int param_1)

{
  if ((param_1 != 0) && (*(uint *)(param_1 + 0x1d8) < *(uint *)(param_1 + 0x1c8))) {
    png_compress_IDAT(param_1,0,0,2);
    *(undefined4 *)(param_1 + 0x244) = 0;
    png_flush(param_1);
  }
  return;
}


