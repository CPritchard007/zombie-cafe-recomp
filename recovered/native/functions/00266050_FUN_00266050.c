/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00266050 FUN_00266050 */

int FUN_00266050(undefined4 param_1,uint *param_2,uint param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  size_t __n;
  uint uVar7;
  size_t sVar8;
  void *local_1c [2];
  
  uVar5 = param_2[1];
  uVar7 = *param_2;
  uVar6 = param_2[10];
  uVar3 = uVar6;
  __aeabi_ldivmod(uVar7,uVar5,uVar6,(int)uVar6 >> 0x1f);
  if (uVar3 == 0) {
    uVar2 = param_2[2] - uVar7;
    if ((int)uVar6 < (int)(param_2[2] - uVar7)) {
      uVar2 = uVar6;
    }
    pcVar4 = *(code **)(*(int *)param_2[6] + 8);
    iVar1 = (*pcVar4)((int *)param_2[6],param_2[9],uVar2,pcVar4,uVar7,uVar5);
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  sVar8 = param_2[10] - uVar3;
  if ((int)sVar8 < (int)param_3) {
    uVar5 = param_2[4];
    if ((int)param_2[4] < (int)param_3) {
      do {
        uVar6 = uVar5 * 2;
        iVar1 = uVar5 * -2;
        uVar5 = uVar6;
      } while (param_3 != uVar6 && (int)(param_3 + iVar1) < 0 == SBORROW4(param_3,uVar6));
      uVar5 = FUN_00265252(param_1,param_2[7],uVar6);
      param_2[7] = uVar5;
      if (uVar5 == 0) {
        return 7;
      }
      param_2[4] = uVar6;
    }
    memcpy((void *)param_2[7],(void *)(param_2[9] + uVar3),sVar8);
    uVar3 = *param_2;
    *param_2 = sVar8 + uVar3;
    param_2[1] = ((int)sVar8 >> 0x1f) + param_2[1] + (uint)CARRY4(sVar8,uVar3);
    for (sVar8 = param_3 - sVar8; 0 < (int)sVar8; sVar8 = sVar8 - __n) {
      __n = sVar8;
      if ((int)param_2[10] < (int)sVar8) {
        __n = param_2[10];
      }
      iVar1 = FUN_00266050(param_1,param_2,__n,local_1c);
      if (iVar1 != 0) {
        return iVar1;
      }
      memcpy((void *)(param_2[7] + (param_3 - sVar8)),local_1c[0],__n);
    }
    *param_4 = param_2[7];
  }
  else {
    *param_4 = param_2[9] + uVar3;
    uVar3 = *param_2;
    *param_2 = uVar3 + param_3;
    param_2[1] = param_2[1] + ((int)param_3 >> 0x1f) + (uint)CARRY4(uVar3,param_3);
  }
  return 0;
}


