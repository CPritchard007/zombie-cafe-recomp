/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d9328 png_get_sCAL_fixed */

undefined8
png_get_sCAL_fixed(int param_1,int param_2,uint *param_3,undefined4 *param_4,undefined4 *param_5)

{
  uint uVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int iVar4;
  
  if ((param_2 == 0) || (param_1 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 8) & 0x4000;
    if (uVar1 != 0) {
      *param_3 = (uint)*(byte *)(param_2 + 0xfc);
      pcVar2 = *(char **)(param_2 + 0x100);
      iVar4 = param_2;
      strtod(pcVar2,(char **)0x0);
      uVar3 = png_fixed(param_1,DAT_002d9388 + 0x2d935c,pcVar2,extraout_r1,DAT_002d9388 + 0x2d935c,
                        iVar4,param_3);
      *param_4 = uVar3;
      pcVar2 = *(char **)(param_2 + 0x104);
      strtod(pcVar2,(char **)0x0);
      iVar4 = DAT_002d938c + 0x2d9376;
      uVar3 = png_fixed(param_1,iVar4,pcVar2,extraout_r1_00);
      *param_5 = uVar3;
      uVar1 = 0x4000;
      param_1 = iVar4;
    }
  }
  return CONCAT44(param_1,uVar1);
}


