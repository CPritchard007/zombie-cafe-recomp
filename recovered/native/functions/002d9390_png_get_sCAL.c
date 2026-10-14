/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d9390 png_get_sCAL */

uint png_get_sCAL(int param_1,int param_2,uint *param_3,undefined4 *param_4,undefined4 *param_5)

{
  uint uVar1;
  char *pcVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  
  if ((param_2 == 0) || (param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 8) & 0x4000;
    if (uVar1 != 0) {
      *param_3 = (uint)*(byte *)(param_2 + 0xfc);
      pcVar2 = *(char **)(param_2 + 0x100);
      strtod(pcVar2,(char **)0x0);
      *param_4 = pcVar2;
      param_4[1] = extraout_r1;
      pcVar2 = *(char **)(param_2 + 0x104);
      strtod(pcVar2,(char **)0x0);
      *param_5 = pcVar2;
      param_5[1] = extraout_r1_00;
      uVar1 = 0x4000;
    }
  }
  return uVar1;
}


