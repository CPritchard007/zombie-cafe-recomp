/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dd5b4 png_set_gamma_fixed */

void png_set_gamma_fixed(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_002dcbd0(param_1,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_002dccd8(param_1,param_2,1);
  iVar2 = FUN_002dccd8(param_1,param_3,0);
  if (iVar2 < 1) {
    iVar2 = DAT_002dd60c + 0x2dd5e6;
  }
  else {
    if (0 < iVar1) goto LAB_002dd5f4;
    iVar2 = DAT_002dd610 + 0x2dd5f0;
  }
  iVar2 = png_error(param_1,iVar2);
LAB_002dd5f4:
  *(int *)(param_1 + 0x39c) = iVar2;
  *(ushort *)(param_1 + DAT_002dd614) = *(ushort *)(param_1 + DAT_002dd614) | 1;
  *(int *)(param_1 + 0x24c) = iVar1;
  return;
}


