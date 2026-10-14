/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00281044 FUN_00281044 */

undefined8 FUN_00281044(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  piVar2 = param_1;
  FUN_00280934();
  if (param_1[0x15] < 0) {
    if ((param_1[0x16] != 0) && (*(char *)((int)param_1 + 0x5f) != '\0')) {
      FUN_00268578(iVar1,param_1[0x16],0,*(char *)((int)param_1 + 0x5f),piVar2,param_2,param_3);
      piVar2 = (int *)0xffffffff;
      FUN_00265900(*(undefined4 *)(iVar1 + 0xd0),0xffffffff,param_1[0xd],1);
      FUN_0025fbda(iVar1,param_1[0xd]);
      param_1[0xd] = 0;
    }
  }
  else {
    FUN_0026863a(param_1);
    FUN_0025fbda(iVar1,param_1[0xd]);
    param_1[0xd] = 0;
    if ((char)param_1[0x18] != '\0') {
      *(undefined1 *)((int)param_1 + 0x5f) = 1;
    }
  }
  FUN_0025fbda(*param_1,param_1[0xd]);
  param_1[0xd] = 0;
  param_1[5] = 0;
  param_1[0xc] = DAT_002810cc;
  return CONCAT44(piVar2,param_1[0x16] & *(uint *)(iVar1 + 0x30));
}


