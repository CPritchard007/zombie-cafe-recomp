/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d7e78 png_gamma_correct */

void png_gamma_correct(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(char *)(param_1 + 0x218) == '\b') {
    png_gamma_8bit_correct();
  }
  else {
    png_gamma_16bit_correct(param_2,param_3,param_3,*(char *)(param_1 + 0x218),param_4);
  }
  return;
}


