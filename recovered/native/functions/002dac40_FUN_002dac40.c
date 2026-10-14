/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dac40 FUN_002dac40 */

undefined4 FUN_002dac40(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = (int *)*param_1;
  iVar3 = *piVar2;
  iVar4 = piVar2[1];
  png_set_benign_errors(iVar3,1,param_3,piVar2 + 2);
  png_read_info(iVar3,iVar4);
  param_1[2] = *(int *)(iVar3 + 0x1c0);
  param_1[3] = *(int *)(iVar3 + 0x1c4);
  iVar4 = FUN_002d97f4(iVar3);
  param_1[4] = iVar4;
  if ((iVar4 << 0x1e < 0) && ((DAT_002dacc8 & *(ushort *)(iVar3 + DAT_002dacc4)) == 2)) {
    param_1[5] = param_1[5] | 1;
  }
  uVar1 = 0x100;
  if (*(char *)(iVar3 + DAT_002daccc) == '\0') {
    uVar1 = 1 << *(sbyte *)(iVar3 + 0x218);
  }
  else {
    if (*(char *)(iVar3 + DAT_002daccc) != '\x03') goto LAB_002dacbc;
    uVar1 = (uint)*(ushort *)(iVar3 + 0x208);
  }
  if (0x100 < uVar1) {
    uVar1 = 0x100;
  }
LAB_002dacbc:
  param_1[6] = uVar1;
  return 1;
}


