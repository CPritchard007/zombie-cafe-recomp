/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002caa5c jround_up */

int jround_up(int param_1,int param_2)

{
  int extraout_r1;
  
  param_1 = param_1 + param_2 + -1;
  __aeabi_idivmod(param_1);
  return param_1 - extraout_r1;
}


