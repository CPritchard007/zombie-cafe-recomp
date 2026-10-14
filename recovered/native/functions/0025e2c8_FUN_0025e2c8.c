/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025e2c8 FUN_0025e2c8 */

void FUN_0025e2c8(int *param_1,int param_2,size_t param_3)

{
  size_t sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  size_t sVar5;
  int iVar6;
  size_t __n;
  
  sVar5 = param_3;
  while ((0 < (int)sVar5 && (*param_1 == 0))) {
    sVar1 = param_1[2] - param_1[4];
    __n = sVar5;
    if ((int)sVar1 < (int)sVar5) {
      __n = sVar1;
    }
    memcpy((void *)(param_1[1] + param_1[4]),(void *)(param_2 + (param_3 - sVar5)),__n);
    iVar6 = __n + param_1[4];
    param_1[4] = iVar6;
    if (iVar6 == param_1[2]) {
      uVar2 = param_1[3];
      iVar3 = param_1[7] + ((int)uVar2 >> 0x1f) + (uint)CARRY4(param_1[6],uVar2);
      iVar6 = FUN_0025ace6(param_1[8],param_1[1] + uVar2,iVar6 - uVar2,iVar3,param_1[6] + uVar2,
                           iVar3);
      uVar4 = param_1[2];
      *param_1 = iVar6;
      param_1[4] = 0;
      uVar2 = param_1[6];
      param_1[3] = 0;
      param_1[6] = uVar2 + uVar4;
      param_1[7] = param_1[7] + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar2,uVar4);
    }
    sVar5 = sVar5 - __n;
  }
  return;
}


