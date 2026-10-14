/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d888a png_chunk_report */

void png_chunk_report(int param_1,undefined4 param_2,int param_3)

{
  if (*(int *)(param_1 + 0x134) << 0x10 < 0) {
    if (param_3 < 2) {
      png_chunk_warning();
    }
    else {
      png_chunk_benign_error();
    }
  }
  else if (param_3 < 1) {
    png_app_warning();
  }
  else {
    png_app_error();
  }
  return;
}


