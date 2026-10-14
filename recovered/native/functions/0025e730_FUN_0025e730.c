/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025e730 FUN_0025e730 */

int FUN_0025e730(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = DAT_0025e754;
  do {
    iVar2 = (**(code **)(iVar1 + 0x25e788))(param_1,param_3);
    if (-1 < iVar2) {
      return iVar2;
    }
    piVar3 = (int *)__errno();
  } while (*piVar3 == 4);
  return iVar2;
}


