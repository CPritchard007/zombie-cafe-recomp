/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d88b6 png_benign_error */

void png_benign_error(int param_1)

{
  if (*(int *)(param_1 + 0x138) << 0xb < 0) {
    if (((*(uint *)(param_1 + 0x134) & 0x8000) == 0) || (*(int *)(param_1 + 0x1dc) == 0)) {
      png_warning();
    }
    else {
      png_chunk_warning();
    }
  }
  else {
    if (((*(uint *)(param_1 + 0x134) & 0x8000) != 0) && (*(int *)(param_1 + 0x1dc) != 0)) {
      png_chunk_error();
    }
    png_error();
  }
  return;
}


