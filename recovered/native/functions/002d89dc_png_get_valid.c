/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d89dc png_get_valid */

uint png_get_valid(int param_1,int param_2,uint param_3)

{
  if ((param_2 == 0) || (param_1 == 0)) {
    param_3 = 0;
  }
  else {
    param_3 = *(uint *)(param_2 + 8) & param_3;
  }
  return param_3;
}


