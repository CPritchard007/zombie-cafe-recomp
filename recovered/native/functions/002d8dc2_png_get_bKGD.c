/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d8dc2 png_get_bKGD */

undefined4 png_get_bKGD(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  
  if ((((param_2 == 0) || (param_1 == 0)) || (param_3 == (int *)0x0)) ||
     (uVar1 = 0x20, (*(uint *)(param_2 + 8) & 0x20) == 0)) {
    uVar1 = 0;
  }
  else {
    *param_3 = param_2 + 0xaa;
  }
  return uVar1;
}


