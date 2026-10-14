/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d9462 png_get_sBIT */

undefined4 png_get_sBIT(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  
  if ((((param_2 == 0) || (param_1 == 0)) || (param_3 == (int *)0x0)) ||
     (uVar1 = 2, (*(uint *)(param_2 + 8) & 2) == 0)) {
    uVar1 = 0;
  }
  else {
    *param_3 = param_2 + 0x94;
  }
  return uVar1;
}


