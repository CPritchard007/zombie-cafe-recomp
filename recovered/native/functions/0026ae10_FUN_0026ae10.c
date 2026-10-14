/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026ae10 FUN_0026ae10 */

undefined4
FUN_0026ae10(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint local_30;
  int local_24;
  
  uVar1 = FUN_0025b154(param_2);
  if ((param_3 == 8) || (param_3 == 4)) {
    local_30 = 3 - (*(char *)(DAT_0026af0c + 0x26ae74) != '\0');
  }
  else {
    local_30 = param_3;
    if (2 < param_3 - 1) {
      uVar1 = FUN_0026adf0(DAT_0026af10);
      return uVar1;
    }
  }
  iVar2 = FUN_00261718(param_1,local_30 & 0xff,param_2,0);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0xc) != 0)) {
    if (*(int *)(param_1 + 0x80) != 0) {
      FUN_00268578(param_1,5,DAT_0026af14 + 0x26ae82);
      return 5;
    }
    FUN_0025c5ec(param_1);
    if ((*(byte *)(iVar2 + 4) & 0xfffffff7) == local_30) {
      iVar3 = FUN_0025bb3c(param_1 + 0x19c,param_2,uVar1);
      local_24 = 3;
      do {
        if (*(char *)(iVar3 + 4) == *(char *)(iVar2 + 4)) {
          if (*(code **)(iVar3 + 0x10) != (code *)0x0) {
            (**(code **)(iVar3 + 0x10))(*(undefined4 *)(iVar3 + 8));
          }
          *(undefined4 *)(iVar3 + 0xc) = 0;
        }
        iVar3 = iVar3 + 0x14;
        local_24 = local_24 + -1;
      } while (local_24 != 0);
    }
  }
  iVar2 = FUN_00261718(param_1,local_30 & 0xff,param_2,1);
  uVar1 = 7;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0xc) = param_5;
    *(undefined4 *)(iVar2 + 8) = param_4;
    *(undefined4 *)(iVar2 + 0x10) = param_6;
    *(byte *)(iVar2 + 4) = (byte)param_3 & 8 | (byte)local_30;
    FUN_00268578(param_1,0,0);
    uVar1 = 0;
  }
  return uVar1;
}


