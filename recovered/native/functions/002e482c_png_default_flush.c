/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e482c png_default_flush */

void png_default_flush(int param_1)

{
  if (param_1 != 0) {
    fflush(*(FILE **)(param_1 + 0x120));
  }
  return;
}


