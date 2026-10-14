/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e9e70 __gxx_personality_v0 */

undefined4 __gxx_personality_v0(uint param_1,int *param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  int *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  uVar9 = CONCAT44(param_3,param_2);
  iVar4 = param_2[1];
  iVar6 = *param_2;
  param_1 = param_1 & 3;
  if (param_1 == 1) {
    piVar5 = (int *)param_2[8];
    _Unwind_VRS_Get(param_3,0,0xd,0,&local_44);
    uVar7 = 6;
    if (piVar5 != local_44) {
      uVar7 = 2;
    }
  }
  else {
    if (param_1 != 0) {
      if (param_1 != 2) {
        return 9;
      }
      goto LAB_002e9f42;
    }
    uVar7 = 1;
  }
  local_44 = param_2;
  _Unwind_VRS_Set(param_3,0,0xc,0,&local_44);
  if (param_3 == 0) {
    return 3;
  }
  bVar1 = iVar6 == DAT_002e9fec;
  bVar2 = DAT_002e9ff0 == iVar4;
  bVar8 = bVar1 && bVar2;
  if ((int)(uVar7 << 0x1f) < 0) {
    FUN_002e9800(&local_40,uVar7,bVar8,param_2,param_3);
    if (local_28 == 6) {
      if (!bVar1 || !bVar2) {
        return 6;
      }
      param_2[-5] = local_40;
      param_2[-4] = local_38;
      param_2[-3] = local_34;
      param_2[-2] = local_30;
      param_2[-1] = local_2c;
      FUN_002e9b94(param_2,param_3,&local_40);
      return 6;
    }
LAB_002e9f42:
    uVar3 = FUN_002e9b84(param_2,param_3);
    return uVar3;
  }
  if (-1 < (int)(uVar7 << 0x1e)) {
    return 3;
  }
  if ((uVar7 & 4) != 0) {
    if (bVar8) {
      local_40 = param_2[-5];
      local_3c = local_40 >> 0x1f;
      local_38 = param_2[-4];
      local_34 = param_2[-3];
      local_30 = param_2[-2];
      local_2c = param_2[-1];
      FUN_002e9bc0(param_2,&local_40);
    }
    else {
      FUN_002e9800(&local_40,uVar7,0,param_2,param_3);
      if (local_28 != 6) {
        uVar9 = FUN_002e978c(param_2);
        goto LAB_002e9fda;
      }
    }
    FUN_002e9b2c(param_2,param_3,&local_40);
    FUN_002e9bdc(param_2,param_3,&local_40);
    return 7;
  }
  FUN_002e9800(&local_40,uVar7,bVar8,param_2,param_3);
  if (local_28 != 6) {
    uVar3 = FUN_002e9b84(param_2,param_3);
    return uVar3;
  }
LAB_002e9fda:
  FUN_002e9b2c((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),&local_40);
  FUN_002e9bd4(param_2);
  return 7;
}


