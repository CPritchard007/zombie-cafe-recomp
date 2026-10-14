/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002cbd1e FUN_002cbd1e */

undefined4 FUN_002cbd1e(int *param_1,int *param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short *psVar11;
  int local_38;
  int local_34;
  
  iVar9 = param_1[0x75];
  if (param_1[0x46] != 0) {
    if (*(int *)(iVar9 + 0x38) == 0) {
      FUN_002cb9d0();
    }
    *(int *)(iVar9 + 0x38) = *(int *)(iVar9 + 0x38) + -1;
  }
  if (*(int *)(iVar9 + 0x14) != -1) {
    iVar6 = param_1[0x6c];
    iVar10 = *param_2;
    iVar4 = *(int *)(param_1[0x56] + 0x18);
    uVar7 = param_1[0x6a];
    local_34 = param_1[0x68];
    iVar8 = 0;
    iVar3 = local_34 * 4;
    do {
      if (*(short *)(*(int *)(iVar6 + iVar3 + iVar8) * 2 + iVar10) != 0) break;
      iVar8 = iVar8 + -4;
      local_34 = local_34 + -1;
    } while (local_34 != 0);
    iVar3 = param_1[0x67] + -1;
    do {
      local_38 = *(int *)(iVar9 + (iVar4 + 0x1e) * 4 + 4) + iVar3 * 3;
      if ((local_34 <= iVar3) && (iVar8 = FUN_002cb5e4(param_1,local_38), iVar8 != 0)) {
        return 1;
      }
      while( true ) {
        iVar3 = iVar3 + 1;
        psVar11 = (short *)(iVar10 + *(int *)(iVar6 + iVar3 * 4) * 2);
        sVar2 = (short)(-1 << (uVar7 & 0xff));
        sVar5 = (short)(1 << (uVar7 & 0xff));
        if (*psVar11 != 0) break;
        iVar8 = FUN_002cb5e4(param_1,local_38 + 1);
        if (iVar8 != 0) {
          iVar8 = FUN_002cb5e4(param_1,iVar9 + 0xbc);
          if (iVar8 == 0) goto LAB_002cbe34;
          *psVar11 = sVar2;
          goto LAB_002cbe62;
        }
        local_38 = local_38 + 3;
        if (param_1[0x68] <= iVar3) {
          *(undefined4 *)(*param_1 + 0x14) = 0x75;
          (**(code **)(*param_1 + 4))(param_1,0xffffffff);
          *(undefined4 *)(iVar9 + 0x14) = 0xffffffff;
          return 1;
        }
      }
      iVar8 = FUN_002cb5e4(param_1,local_38 + 2);
      if (iVar8 != 0) {
        sVar1 = *psVar11;
        if (sVar1 < 0) {
          sVar5 = sVar1 + sVar2;
        }
        else {
          sVar5 = sVar1 + sVar5;
        }
LAB_002cbe34:
        *psVar11 = sVar5;
      }
LAB_002cbe62:
    } while (iVar3 < param_1[0x68]);
  }
  return 1;
}


