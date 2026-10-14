/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002600fa FUN_002600fa */

int FUN_002600fa(undefined4 param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if ((*param_2 == 0) && (param_2[1] != 0)) {
    uVar1 = param_2[3];
    if ((int)uVar1 < param_2[4]) {
      iVar2 = param_2[7] + ((int)uVar1 >> 0x1f) + (uint)CARRY4(param_2[6],uVar1);
      iVar2 = FUN_0025ace6(param_2[8],param_2[1] + uVar1,param_2[4] - uVar1,iVar2,param_2[6] + uVar1
                           ,iVar2);
      *param_2 = iVar2;
    }
  }
  uVar3 = param_2[4];
  uVar1 = param_2[6];
  iVar2 = param_2[7];
  *param_3 = uVar1 + uVar3;
  param_3[1] = iVar2 + ((int)uVar3 >> 0x1f) + (uint)CARRY4(uVar1,uVar3);
  FUN_0025fbda(param_1,param_2[1]);
  iVar2 = *param_2;
  memset(param_2,0,0x28);
  return iVar2;
}


