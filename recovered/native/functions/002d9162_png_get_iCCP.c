/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d9162 png_get_iCCP */

int * png_get_iCCP(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,int *param_6)

{
  byte *pbVar1;
  
  if ((((param_2 == 0) || (param_1 == 0)) || (param_3 == (undefined4 *)0x0)) ||
     ((((*(uint *)(param_2 + 8) & 0x1000) == 0 || (param_5 == (undefined4 *)0x0)) ||
      (param_4 == (undefined4 *)0x0)))) {
    param_6 = (int *)0x0;
  }
  else if (param_6 != (int *)0x0) {
    *param_3 = *(undefined4 *)(param_2 + 0x74);
    *param_5 = *(undefined4 *)(param_2 + 0x78);
    pbVar1 = *(byte **)(param_2 + 0x78);
    *param_6 = (uint)*pbVar1 * 0x1000000 + (uint)pbVar1[1] * 0x10000 + (uint)pbVar1[3] +
               (uint)pbVar1[2] * 0x100;
    *param_4 = 0;
    param_6 = (int *)0x1000;
  }
  return param_6;
}


