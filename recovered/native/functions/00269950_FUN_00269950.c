/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00269950 FUN_00269950 */

int FUN_00269950(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *param_1;
  uVar2 = *(undefined4 *)(param_4 * 0x10 + *(int *)(iVar3 + 0x10));
  iVar1 = (**(code **)(iVar3 + 0x10c))
                    (*(undefined4 *)(iVar3 + 0x110),0x14,param_2,param_3,uVar2,param_1[0x81]);
  if (iVar1 == 1) {
    if ((param_4 == 0) && (*(int *)(iVar3 + 0x14) < 3)) {
      FUN_00268e48(param_1,DAT_002699dc + 0x2699b2,param_2,param_3);
    }
    else {
      FUN_00268e48(param_1,DAT_002699d8 + 0x2699a0,uVar2,param_2,param_3);
    }
    iVar3 = 0x17;
  }
  else {
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 == 2) {
      return 2;
    }
    FUN_00268e48(param_1,DAT_002699e0 + 0x2699ca);
    iVar3 = 1;
  }
  param_1[3] = iVar3;
  return iVar1;
}


