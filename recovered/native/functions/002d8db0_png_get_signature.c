/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d8db0 png_get_signature */

int png_get_signature(int param_1,int param_2)

{
  if ((param_2 == 0) || (param_1 == 0)) {
    param_2 = 0;
  }
  else {
    param_2 = param_2 + 0x20;
  }
  return param_2;
}


