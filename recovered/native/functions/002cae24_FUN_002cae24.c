/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002cae24 FUN_002cae24 */

undefined8 FUN_002cae24(int *param_1,int *param_2,uint param_3,uint param_4,int param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  
  uVar4 = param_4 + param_3;
  piVar1 = param_1;
  piVar6 = param_2;
  uVar3 = param_3;
  if ((((uint)param_2[1] < uVar4) || ((uint)param_2[3] < param_4)) || (*param_2 == 0)) {
    *(undefined4 *)(*param_1 + 0x14) = 0x17;
    (**(code **)*param_1)(param_1);
  }
  if ((param_3 < (uint)param_2[6]) || ((uint)(param_2[6] + param_2[4]) < uVar4)) {
    if (param_2[10] == 0) {
      *(undefined4 *)(*param_1 + 0x14) = 0x47;
      (**(code **)*param_1)(param_1);
    }
    if (param_2[9] != 0) {
      FUN_002cab1c(param_1,param_2,1,param_2[9],piVar1,piVar6,uVar3);
      param_2[9] = 0;
    }
    uVar2 = param_2[6];
    if (uVar2 < param_3) {
      param_2[6] = param_3;
    }
    else {
      uVar2 = uVar4 - param_2[4] & (int)~(uVar4 - param_2[4]) >> 0x1f;
      param_2[6] = uVar2;
    }
    FUN_002cab1c(param_1,param_2,0,uVar2,piVar1,piVar6,uVar3);
  }
  uVar3 = param_2[7];
  if (uVar3 < uVar4) {
    if (uVar3 < param_3) {
      uVar3 = param_3;
      if (param_5 != 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0x17;
        (**(code **)*param_1)(param_1);
LAB_002caece:
        param_2[7] = uVar4;
      }
    }
    else if (param_5 != 0) goto LAB_002caece;
    if (param_2[8] != 0) {
      piVar1 = (int *)(param_2[2] << 7);
      uVar3 = uVar3 - param_2[6];
      uVar4 = uVar4 - param_2[6];
      iVar5 = uVar3 * 4;
      for (; uVar3 < uVar4; uVar3 = uVar3 + 1) {
        memset(*(void **)(*param_2 + iVar5),0,(size_t)piVar1);
        iVar5 = iVar5 + 4;
      }
      goto LAB_002caf16;
    }
    if (param_5 == 0) {
      *(undefined4 *)(*param_1 + 0x14) = 0x17;
      (**(code **)*param_1)(param_1);
      goto LAB_002caf20;
    }
  }
  else {
LAB_002caf16:
    if (param_5 == 0) goto LAB_002caf20;
  }
  param_2[9] = 1;
LAB_002caf20:
  return CONCAT44(piVar1,*param_2 + (param_3 - param_2[6]) * 4);
}


