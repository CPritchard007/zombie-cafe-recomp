/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e97a4 FUN_002e97a4 */

byte * FUN_002e97a4(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  int *piVar14;
  int iVar15;
  byte *pbVar16;
  int unaff_r8;
  byte *pbVar17;
  ulonglong uVar18;
  byte *pbStack_7c;
  int iStack_74;
  byte *pbStack_60;
  byte *pbStack_5c;
  byte *pbStack_58;
  int iStack_54;
  byte *pbStack_50;
  uint auStack_4c [2];
  undefined4 uStack_20;
  undefined1 auStack_1c [4];
  
  if (param_3 != 0) {
    piVar14 = (int *)(param_3 + param_1 * -4);
    iVar15 = *piVar14;
    pbVar2 = (byte *)0x0;
    if (iVar15 != 0) {
      pbVar2 = *(byte **)((int)piVar14 + iVar15);
    }
    return pbVar2;
  }
  iVar15 = param_4;
  uVar3 = FUN_002e978c(param_5);
  if (param_3 != 0) {
    piVar14 = (int *)(param_3 + ~uVar3 * 4);
    do {
      if (*piVar14 == 0) {
        return (byte *)0x1;
      }
      piVar4 = *(int **)((int)piVar14 + *piVar14);
      piVar14 = piVar14 + 1;
      iVar15 = (**(code **)(*piVar4 + 8))(piVar4,param_4,auStack_1c);
    } while (iVar15 == 0);
    return (byte *)0x0;
  }
  uVar18 = FUN_002e978c(param_5);
  pbVar12 = (byte *)(uVar18 >> 0x20);
  pbVar2 = (byte *)uVar18;
  pbVar2[0] = 0;
  pbVar2[1] = 0;
  pbVar2[2] = 0;
  pbVar2[3] = 0;
  pbVar2[4] = 0;
  pbVar2[5] = 0;
  pbVar2[6] = 0;
  pbVar2[7] = 0;
  pbVar2[8] = 0;
  pbVar2[9] = 0;
  pbVar2[10] = 0;
  pbVar2[0xb] = 0;
  pbVar2[0xc] = 0;
  pbVar2[0xd] = 0;
  pbVar2[0xe] = 0;
  pbVar2[0xf] = 0;
  pbVar2[0x10] = 0;
  pbVar2[0x11] = 0;
  pbVar2[0x12] = 0;
  pbVar2[0x13] = 0;
  pbVar2[0x14] = 0;
  pbVar2[0x15] = 0;
  pbVar2[0x16] = 0;
  pbVar2[0x17] = 0;
  pbVar2[0x18] = 3;
  pbVar2[0x19] = 0;
  pbVar2[0x1a] = 0;
  pbVar2[0x1b] = 0;
  if ((uVar18 & 0x100000000) == 0) {
    if ((uVar18 & 0x200000000) == 0) {
      return pbVar2;
    }
    if (((uint)pbVar12 & 0xc) == 0xc) {
      pbVar2[0x18] = 2;
      pbVar2[0x19] = 0;
      pbVar2[0x1a] = 0;
      pbVar2[0x1b] = 0;
      return pbVar12;
    }
  }
  else if ((uVar18 & 0xe00000000) != 0) {
    return pbVar2;
  }
  pbStack_60 = (byte *)_Unwind_GetLanguageSpecificData(uStack_20);
  if (pbStack_60 == (byte *)0x0) {
    pbVar2[0x18] = 8;
    pbVar2[0x19] = 0;
    pbVar2[0x1a] = 0;
    pbVar2[0x1b] = 0;
    return (byte *)0x0;
  }
  *(byte **)(pbVar2 + 0xc) = pbStack_60;
  _Unwind_VRS_Get(uStack_20,0,0xf,0,auStack_4c);
  iVar5 = _Unwind_GetRegionStart(uStack_20);
  bVar1 = *pbStack_60;
  pbStack_60 = pbStack_60 + 1;
  uVar3 = ((auStack_4c[0] & 0xfffffffe) - 1) - iVar5;
  iStack_74 = FUN_002eb21c(&pbStack_60,bVar1);
  if (iStack_74 == 0) {
    iStack_74 = iVar5;
  }
  pbVar6 = (byte *)(uint)*pbStack_60;
  pbStack_60 = pbStack_60 + 1;
  pbStack_7c = (byte *)0x0;
  if (pbVar6 != (byte *)0xff) {
    iVar5 = FUN_002eb1c4(&pbStack_60);
    pbStack_7c = pbStack_60 + iVar5;
  }
  bVar1 = *pbStack_60;
  pbStack_60 = pbStack_60 + 1;
  iVar5 = FUN_002eb1c4(&pbStack_60);
  pbStack_5c = pbStack_60;
  pbVar7 = pbStack_60 + iVar5;
  do {
    pbVar17 = pbVar2;
    if (pbVar7 <= pbStack_5c) goto LAB_002e98ec;
    uVar8 = FUN_002eb21c(&pbStack_5c,bVar1);
    iVar5 = FUN_002eb21c(&pbStack_5c,bVar1);
    unaff_r8 = FUN_002eb21c(&pbStack_5c,bVar1);
    iVar9 = FUN_002eb1c4(&pbStack_5c);
    if (uVar3 < uVar8) goto LAB_002e98ec;
  } while (iVar5 + uVar8 <= uVar3);
LAB_002e98f2:
  if (unaff_r8 != 0) {
    pbVar13 = (byte *)(iStack_74 + unaff_r8);
    if (iVar9 != 0) {
      iStack_74 = iVar15 + 0x58;
      pbVar16 = pbVar7 + iVar9 + -1;
      do {
        pbStack_58 = pbVar16;
        iVar5 = FUN_002eb1e8(&pbStack_58);
        iVar9 = iVar5 >> 0x1f;
        pbVar7 = pbVar12;
        pbVar17 = pbVar6;
        if ((iVar5 < 0) || (iVar5 == 0)) {
          if (iVar5 == 0) {
            if (((uint)pbVar12 & 6) == 2) {
              pbVar2[0] = 0;
              pbVar2[1] = 0;
              pbVar2[2] = 0;
              pbVar2[3] = 0;
              pbVar2[4] = 0;
              pbVar2[5] = 0;
              pbVar2[6] = 0;
              pbVar2[7] = 0;
              *(byte **)(pbVar2 + 8) = pbVar16;
              *(byte **)(pbVar2 + 0x10) = pbVar13;
              *(int *)(pbVar2 + 0x14) = iVar15 + 0x58;
              pbVar2[0x18] = 6;
              pbVar2[0x19] = 0;
              pbVar2[0x1a] = 0;
              pbVar2[0x1b] = 0;
              return pbVar13;
            }
          }
          else {
            if (param_3 == 0) {
              if ((uVar18 & 0x500000000) != 0) {
                *(int *)pbVar2 = iVar5;
                *(int *)(pbVar2 + 4) = iVar9;
                *(byte **)(pbVar2 + 8) = pbVar16;
                *(byte **)(pbVar2 + 0x10) = pbVar13;
                *(int *)(pbVar2 + 0x14) = iVar15 + 0x58;
                pbVar2[0x18] = 6;
                pbVar2[0x19] = 0;
                pbVar2[0x1a] = 0;
                pbVar2[0x1b] = 0;
                return pbVar13;
              }
            }
            else {
              if ((iStack_74 == 0) || (*(int *)(iVar15 + -0x34) == 0)) goto LAB_002e98ec;
              iVar11 = FUN_002e97c0(iVar5,iVar9,pbStack_7c,pbVar6,*(int *)(iVar15 + -0x34),iStack_74
                                    ,iVar15);
              if (iVar11 == 0) goto LAB_002e999c;
              if ((uVar18 & 0x100000000) != 0) {
                *(int *)(pbVar2 + 0x14) = iStack_74;
                *(int *)pbVar2 = iVar5;
                *(int *)(pbVar2 + 4) = iVar9;
                *(byte **)(pbVar2 + 8) = pbVar16;
                *(byte **)(pbVar2 + 0x10) = pbVar13;
                pbVar2[0x18] = 6;
                pbVar2[0x19] = 0;
                pbVar2[0x1a] = 0;
                pbVar2[0x1b] = 0;
                return pbVar13;
              }
            }
joined_r0x002e9a7a:
            if (-1 < (int)pbVar12 << 0x1c) goto LAB_002e98ec;
          }
        }
        else {
          piVar14 = (int *)FUN_002e97a4(iVar5,0,pbStack_7c,pbVar6,iVar15);
          if (piVar14 == (int *)0x0) {
            if ((uVar18 & 0x500000000) != 0) {
              *(int *)(pbVar2 + 0x14) = iVar15 + 0x58;
              *(int *)pbVar2 = iVar5;
              pbVar2[4] = 0;
              pbVar2[5] = 0;
              pbVar2[6] = 0;
              pbVar2[7] = 0;
              *(byte **)(pbVar2 + 8) = pbVar16;
              *(byte **)(pbVar2 + 0x10) = pbVar13;
              pbVar2[0x18] = 6;
              pbVar2[0x19] = 0;
              pbVar2[0x1a] = 0;
              pbVar2[0x1b] = 0;
              return pbVar12;
            }
            goto joined_r0x002e9a7a;
          }
          if (param_3 != 0) {
            unaff_r8 = *(int *)(iVar15 + -0x34);
            iStack_54 = iStack_74;
            if ((iStack_74 == 0) || (unaff_r8 == 0)) goto LAB_002e98ec;
            iVar11 = FUN_002e95ec(unaff_r8,*(undefined4 *)(DAT_002e9b24 + 0x2e9968),
                                  *(undefined4 *)(DAT_002e9b28 + 0x2e996a),0);
            if (iVar11 != 0) {
              iStack_54 = *(int *)(iVar15 + 0x58);
            }
            pbVar10 = (byte *)(**(code **)(*piVar14 + 8))(piVar14,unaff_r8,&iStack_54);
            if (pbVar10 != (byte *)0x0) {
              if ((uVar18 & 0x100000000) != 0) {
                *(byte **)(pbVar2 + 0x10) = pbVar13;
                *(int *)(pbVar2 + 0x14) = iStack_54;
                *(int *)pbVar2 = iVar5;
                *(int *)(pbVar2 + 4) = iVar9;
                *(byte **)(pbVar2 + 8) = pbVar16;
                pbVar2[0x18] = 6;
                pbVar2[0x19] = 0;
                pbVar2[0x1a] = 0;
                pbVar2[0x1b] = 0;
                return pbVar10;
              }
              goto joined_r0x002e9a7a;
            }
          }
        }
LAB_002e999c:
        pbStack_50 = pbStack_58;
        iVar5 = FUN_002eb1e8(&pbStack_50);
        if (iVar5 == 0) {
          pbVar2[0x18] = 8;
          pbVar2[0x19] = 0;
          pbVar2[0x1a] = 0;
          pbVar2[0x1b] = 0;
          return (byte *)0x0;
        }
        pbVar16 = pbStack_58 + iVar5;
      } while( true );
    }
    if (((uint)pbVar12 & 6) == 2) {
      pbVar2[0] = 0;
      pbVar2[1] = 0;
      pbVar2[2] = 0;
      pbVar2[3] = 0;
      pbVar2[4] = 0;
      pbVar2[5] = 0;
      pbVar2[6] = 0;
      pbVar2[7] = 0;
      *(byte **)(pbVar2 + 0x10) = pbVar13;
      pbVar2[0x18] = 6;
      pbVar2[0x19] = 0;
      pbVar2[0x1a] = 0;
      pbVar2[0x1b] = 0;
      return pbVar2;
    }
  }
  pbVar2[0x18] = 8;
  pbVar2[0x19] = 0;
  pbVar2[0x1a] = 0;
  pbVar2[0x1b] = 0;
  return pbVar2;
LAB_002e98ec:
  iVar9 = FUN_002e978c(iVar15);
  pbVar2 = pbVar17;
  goto LAB_002e98f2;
}


