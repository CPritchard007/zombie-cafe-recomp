/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002cbaa0 FUN_002cbaa0 */

undefined4 FUN_002cbaa0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int local_48;
  int local_34;
  int *local_30;
  undefined4 *local_28;
  
  iVar11 = param_1[0x75];
  if (param_1[0x46] != 0) {
    if (*(int *)(iVar11 + 0x38) == 0) {
      FUN_002cb9d0();
    }
    *(int *)(iVar11 + 0x38) = *(int *)(iVar11 + 0x38) + -1;
  }
  if (*(int *)(iVar11 + 0x14) != -1) {
    iVar4 = param_1[0x6c];
    local_30 = param_1;
    local_28 = param_2;
    for (local_34 = 0; local_34 < param_1[0x5c]; local_34 = local_34 + 1) {
      puVar5 = (undefined2 *)*local_28;
      local_28 = local_28 + 1;
      iVar6 = local_30[0x5d];
      iVar7 = param_1[iVar6 + 0x56];
      iVar3 = *(int *)(iVar7 + 0x14);
      iVar13 = (iVar6 + 10) * 4;
      iVar10 = iVar11 + (iVar3 + 0xe) * 4;
      iVar8 = *(int *)(iVar10 + 4) + *(int *)(iVar13 + iVar11);
      iVar1 = FUN_002cb5e4(param_1,iVar8);
      if (iVar1 == 0) {
        *(undefined4 *)(iVar13 + iVar11) = 0;
      }
      else {
        iVar1 = FUN_002cb5e4(param_1,iVar8 + 1);
        local_48 = iVar8 + 2 + iVar1;
        uVar2 = FUN_002cb5e4(param_1,local_48);
        if (uVar2 != 0) {
          local_48 = *(int *)(iVar10 + 4) + 0x14;
          while (iVar8 = FUN_002cb5e4(param_1,local_48), iVar8 != 0) {
            uVar2 = uVar2 * 2;
            if (uVar2 == 0x8000) {
LAB_002cbc50:
              *(undefined4 *)(*param_1 + 0x14) = 0x75;
              (**(code **)(*param_1 + 4))(param_1,0xffffffff);
              *(undefined4 *)(iVar11 + 0x14) = 0xffffffff;
              return 1;
            }
            local_48 = local_48 + 1;
          }
        }
        if ((int)uVar2 < (1 << *(sbyte *)((int)param_1 + iVar3 + 0xe8)) >> 1) {
          iVar3 = 0;
        }
        else {
          if ((1 << *(sbyte *)((int)param_1 + iVar3 + 0xf8)) >> 1 < (int)uVar2) {
            iVar3 = iVar1 + 3;
          }
          else {
            iVar3 = iVar1 + 1;
          }
          iVar3 = iVar3 << 2;
        }
        *(int *)((iVar6 + 10) * 4 + iVar11) = iVar3;
        uVar12 = uVar2;
        while (uVar12 = (int)uVar12 >> 1, uVar12 != 0) {
          iVar3 = FUN_002cb5e4(param_1,local_48 + 0xe);
          if (iVar3 != 0) {
            uVar2 = uVar2 | uVar12;
          }
        }
        iVar3 = uVar2 + 1;
        if (iVar1 != 0) {
          iVar3 = -iVar3;
        }
        iVar1 = (iVar6 + 6) * 4;
        *(int *)(iVar1 + iVar11) = *(int *)(iVar1 + iVar11) + iVar3;
      }
      *puVar5 = (short)*(undefined4 *)((iVar6 + 6) * 4 + iVar11);
      if (param_1[0x6d] != 0) {
        local_48 = 0;
        iVar1 = *(int *)(iVar7 + 0x18);
        iVar3 = iVar11 + (iVar1 + 0x1e) * 4;
        do {
          iVar7 = *(int *)(iVar3 + 4) + local_48 * 3;
          iVar6 = FUN_002cb5e4(param_1,iVar7);
          if (iVar6 != 0) break;
          while( true ) {
            local_48 = local_48 + 1;
            iVar6 = FUN_002cb5e4(param_1,iVar7 + 1);
            if (iVar6 != 0) break;
            iVar7 = iVar7 + 3;
            if (param_1[0x6d] <= local_48) goto LAB_002cbc50;
          }
          iVar6 = FUN_002cb5e4(param_1,iVar11 + 0xbc);
          iVar7 = iVar7 + 2;
          uVar2 = FUN_002cb5e4(param_1,iVar7);
          if ((uVar2 != 0) && (iVar8 = FUN_002cb5e4(param_1,iVar7), iVar8 != 0)) {
            uVar2 = uVar2 * 2;
            iVar7 = 0xd9;
            if (local_48 <= (int)(uint)*(byte *)((int)param_1 + iVar1 + 0x108)) {
              iVar7 = 0xbd;
            }
            iVar7 = *(int *)(iVar3 + 4) + iVar7;
            while (iVar8 = FUN_002cb5e4(param_1,iVar7), iVar8 != 0) {
              uVar2 = uVar2 * 2;
              if (uVar2 == 0x8000) goto LAB_002cbc50;
              iVar7 = iVar7 + 1;
            }
          }
          uVar12 = uVar2;
          while (uVar12 = (int)uVar12 >> 1, uVar12 != 0) {
            iVar8 = FUN_002cb5e4(param_1,iVar7 + 0xe);
            if (iVar8 != 0) {
              uVar2 = uVar2 | uVar12;
            }
          }
          sVar9 = (short)uVar2 + 1;
          if (iVar6 != 0) {
            sVar9 = -sVar9;
          }
          puVar5[*(int *)(local_48 * 4 + iVar4)] = sVar9;
        } while (local_48 < param_1[0x6d]);
      }
      local_30 = local_30 + 1;
    }
  }
  return 1;
}


