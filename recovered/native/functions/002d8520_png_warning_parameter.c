/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d8520 png_warning_parameter */

void png_warning_parameter(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_2 - 1U < 8) {
    png_safecat(param_1 + (param_2 - 1U) * 0x20,0x20,0,param_3,param_4);
  }
  return;
}


