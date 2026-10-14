/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002cb0c4 FUN_002cb0c4 */

int FUN_002cb0c4(int *param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  param_3 = param_3 * 0x80;
  iVar5 = param_1[1];
  uVar1 = __udivsi3(DAT_002cb148,param_3);
  if (uVar1 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x48;
    (**(code **)*param_1)(param_1);
  }
  if ((int)param_4 <= (int)uVar1) {
    uVar1 = param_4;
  }
  *(uint *)(iVar5 + 0x50) = uVar1;
  iVar5 = FUN_002cab9c(param_1,param_2,param_4 << 2);
  for (uVar6 = 0; uVar6 < param_4; uVar6 = uVar6 + uVar1) {
    if (param_4 - uVar6 < uVar1) {
      uVar1 = param_4 - uVar6;
    }
    iVar2 = FUN_002cb034(param_1,param_2,uVar1 * param_3);
    iVar4 = 0;
    for (uVar3 = uVar1; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(int *)(iVar5 + uVar6 * 4 + iVar4) = iVar2;
      iVar4 = iVar4 + 4;
      iVar2 = iVar2 + param_3;
    }
  }
  return iVar5;
}


