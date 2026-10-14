/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d90dc png_get_gAMA_fixed */

undefined4 png_get_gAMA_fixed(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if ((((param_2 == 0) || (param_1 == 0)) || (param_3 == (undefined4 *)0x0)) ||
     (uVar1 = 1, (*(ushort *)(param_2 + 0x72) & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    *param_3 = *(undefined4 *)(param_2 + 0x28);
  }
  return uVar1;
}


