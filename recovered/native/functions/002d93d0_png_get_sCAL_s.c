/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d93d0 png_get_sCAL_s */

uint png_get_sCAL_s(int param_1,int param_2,uint *param_3,undefined4 *param_4,undefined4 *param_5)

{
  uint uVar1;
  
  if ((param_2 == 0) || (param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 8) & 0x4000;
    if (uVar1 != 0) {
      *param_3 = (uint)*(byte *)(param_2 + 0xfc);
      *param_4 = *(undefined4 *)(param_2 + 0x100);
      *param_5 = *(undefined4 *)(param_2 + 0x104);
      uVar1 = 0x4000;
    }
  }
  return uVar1;
}


