/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e9800 FUN_002e9800 */

void FUN_002e9800(int *param_1,byte *param_2,int param_3,int param_4,undefined4 param_5)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  int unaff_r8;
  int *piVar13;
  byte *local_5c;
  int local_54;
  byte *local_40;
  byte *local_3c;
  byte *local_38;
  int local_34;
  byte *local_30;
  uint local_2c [2];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 3;
  uVar9 = (uint)param_2 & 1;
  if (uVar9 == 0) {
    if (((uint)param_2 & 2) == 0) {
      return;
    }
    if (((uint)param_2 & 0xc) == 0xc) {
      param_1[6] = 2;
      return;
    }
  }
  else if (((uint)param_2 & 0xe) != 0) {
    return;
  }
  local_40 = (byte *)_Unwind_GetLanguageSpecificData(param_5);
  if (local_40 == (byte *)0x0) {
    param_1[6] = 8;
    return;
  }
  param_1[3] = (int)local_40;
  _Unwind_VRS_Get(param_5,0,0xf,0,local_2c);
  iVar2 = _Unwind_GetRegionStart(param_5);
  bVar1 = *local_40;
  local_40 = local_40 + 1;
  uVar11 = ((local_2c[0] & 0xfffffffe) - 1) - iVar2;
  local_54 = FUN_002eb21c(&local_40,bVar1);
  if (local_54 == 0) {
    local_54 = iVar2;
  }
  piVar3 = (int *)(uint)*local_40;
  local_40 = local_40 + 1;
  local_5c = (byte *)0x0;
  if (piVar3 != (int *)0xff) {
    iVar2 = FUN_002eb1c4(&local_40);
    local_5c = local_40 + iVar2;
  }
  bVar1 = *local_40;
  local_40 = local_40 + 1;
  iVar2 = FUN_002eb1c4(&local_40);
  local_3c = local_40;
  pbVar4 = local_40 + iVar2;
  do {
    piVar13 = param_1;
    if (pbVar4 <= local_3c) goto LAB_002e98ec;
    uVar5 = FUN_002eb21c(&local_3c,bVar1);
    iVar2 = FUN_002eb21c(&local_3c,bVar1);
    unaff_r8 = FUN_002eb21c(&local_3c,bVar1);
    iVar6 = FUN_002eb1c4(&local_3c);
    if (uVar11 < uVar5) goto LAB_002e98ec;
  } while (iVar2 + uVar5 <= uVar11);
LAB_002e98f2:
  if (unaff_r8 != 0) {
    iVar2 = local_54 + unaff_r8;
    if (iVar6 != 0) {
      local_54 = param_4 + 0x58;
      pbVar12 = pbVar4 + iVar6 + -1;
      do {
        local_38 = pbVar12;
        iVar6 = FUN_002eb1e8(&local_38);
        iVar10 = iVar6 >> 0x1f;
        pbVar4 = param_2;
        piVar13 = piVar3;
        if ((iVar6 < 0) || (iVar6 == 0)) {
          if (iVar6 == 0) {
            if (((uint)param_2 & 6) == 2) {
              *param_1 = 0;
              param_1[1] = 0;
              param_1[2] = (int)pbVar12;
              param_1[4] = iVar2;
              param_1[5] = param_4 + 0x58;
              param_1[6] = 6;
              return;
            }
          }
          else {
            if (param_3 == 0) {
              if (((uint)param_2 & 5) != 0) {
                *param_1 = iVar6;
                param_1[1] = iVar10;
                param_1[2] = (int)pbVar12;
                param_1[4] = iVar2;
                param_1[5] = param_4 + 0x58;
                param_1[6] = 6;
                return;
              }
            }
            else {
              if ((local_54 == 0) || (*(int *)(param_4 + -0x34) == 0)) goto LAB_002e98ec;
              iVar8 = FUN_002e97c0(iVar6,iVar10,local_5c,piVar3,*(int *)(param_4 + -0x34),local_54,
                                   param_4);
              if (iVar8 == 0) goto LAB_002e999c;
              if (uVar9 != 0) {
                param_1[5] = local_54;
                *param_1 = iVar6;
                param_1[1] = iVar10;
                param_1[2] = (int)pbVar12;
                param_1[4] = iVar2;
                param_1[6] = 6;
                return;
              }
            }
joined_r0x002e9a7a:
            if (-1 < (int)param_2 << 0x1c) goto LAB_002e98ec;
          }
        }
        else {
          piVar7 = (int *)FUN_002e97a4(iVar6,0,local_5c,piVar3,param_4);
          if (piVar7 == (int *)0x0) {
            if (((uint)param_2 & 5) != 0) {
              param_1[5] = param_4 + 0x58;
              *param_1 = iVar6;
              param_1[1] = 0;
              param_1[2] = (int)pbVar12;
              param_1[4] = iVar2;
              param_1[6] = 6;
              return;
            }
            goto joined_r0x002e9a7a;
          }
          if (param_3 != 0) {
            unaff_r8 = *(int *)(param_4 + -0x34);
            local_34 = local_54;
            if ((local_54 == 0) || (unaff_r8 == 0)) goto LAB_002e98ec;
            iVar8 = FUN_002e95ec(unaff_r8,*(undefined4 *)(DAT_002e9b24 + 0x2e9968),
                                 *(undefined4 *)(DAT_002e9b28 + 0x2e996a),0);
            if (iVar8 != 0) {
              local_34 = *(int *)(param_4 + 0x58);
            }
            iVar8 = (**(code **)(*piVar7 + 8))(piVar7,unaff_r8,&local_34);
            if (iVar8 != 0) {
              if (uVar9 != 0) {
                param_1[4] = iVar2;
                param_1[5] = local_34;
                *param_1 = iVar6;
                param_1[1] = iVar10;
                param_1[2] = (int)pbVar12;
                param_1[6] = 6;
                return;
              }
              goto joined_r0x002e9a7a;
            }
          }
        }
LAB_002e999c:
        local_30 = local_38;
        iVar6 = FUN_002eb1e8(&local_30);
        if (iVar6 == 0) {
          param_1[6] = 8;
          return;
        }
        pbVar12 = local_38 + iVar6;
      } while( true );
    }
    if (((uint)param_2 & 6) == 2) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[4] = iVar2;
      param_1[6] = 6;
      return;
    }
  }
  param_1[6] = 8;
  return;
LAB_002e98ec:
  iVar6 = FUN_002e978c(param_4);
  param_1 = piVar13;
  goto LAB_002e98f2;
}


