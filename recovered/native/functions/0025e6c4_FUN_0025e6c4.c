/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025e6c4 FUN_0025e6c4 */

int FUN_0025e6c4(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_24;
  
  if (param_3 == 0) {
    iVar4 = 0x1a4;
    local_24 = 0;
  }
  else {
    local_24 = (**(code **)((int)&DAT_0025e7d8 + DAT_0025e724 + 2))(0);
    iVar4 = param_3;
  }
  iVar1 = DAT_0025e728;
  do {
    iVar2 = (**(code **)(iVar1 + 0x25e6f8))(param_1,param_2 | 0x80000,iVar4);
    if (-1 < iVar2) break;
    piVar3 = (int *)__errno();
  } while (*piVar3 == 4);
  if (param_3 != 0) {
    (**(code **)(DAT_0025e72c + 0x25e818))(local_24);
  }
  return iVar2;
}


