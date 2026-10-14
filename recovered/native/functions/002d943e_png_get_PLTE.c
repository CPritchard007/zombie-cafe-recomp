/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d943e png_get_PLTE */

undefined4 png_get_PLTE(int param_1,int param_2,undefined4 *param_3,uint *param_4)

{
  undefined4 uVar1;
  
  if ((((param_2 == 0) || (param_1 == 0)) || (param_3 == (undefined4 *)0x0)) ||
     (uVar1 = 8, (*(uint *)(param_2 + 8) & 8) == 0)) {
    uVar1 = 0;
  }
  else {
    *param_3 = *(undefined4 *)(param_2 + 0x10);
    *param_4 = (uint)*(ushort *)(param_2 + 0x14);
  }
  return uVar1;
}


