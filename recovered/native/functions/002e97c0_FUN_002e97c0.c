/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e97c0 FUN_002e97c0 */

byte * FUN_002e97c0(uint param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                   undefined4 param_6,undefined4 param_7)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  int *piVar12;
  uint uVar13;
  byte *pbVar14;
  int unaff_r8;
  byte *pbVar15;
  byte *pbVar16;
  ulonglong uVar17;
  byte *pbStack_74;
  int iStack_6c;
  byte *pbStack_58;
  byte *pbStack_54;
  byte *pbStack_50;
  int iStack_4c;
  byte *pbStack_48;
  uint auStack_44 [2];
  undefined4 uStack_18;
  undefined4 local_14;
  
  if (param_3 != 0) {
    piVar12 = (int *)(param_3 + ~param_1 * 4);
    do {
      if (*piVar12 == 0) {
        return (byte *)0x1;
      }
      piVar2 = *(int **)((int)piVar12 + *piVar12);
      local_14 = param_6;
      piVar12 = piVar12 + 1;
      iVar3 = (**(code **)(*piVar2 + 8))(piVar2,param_5,&local_14);
    } while (iVar3 == 0);
    return (byte *)0x0;
  }
  uVar17 = FUN_002e978c(param_7);
  pbVar10 = (byte *)(uVar17 >> 0x20);
  pbVar16 = (byte *)uVar17;
  pbVar16[0] = 0;
  pbVar16[1] = 0;
  pbVar16[2] = 0;
  pbVar16[3] = 0;
  pbVar16[4] = 0;
  pbVar16[5] = 0;
  pbVar16[6] = 0;
  pbVar16[7] = 0;
  pbVar16[8] = 0;
  pbVar16[9] = 0;
  pbVar16[10] = 0;
  pbVar16[0xb] = 0;
  pbVar16[0xc] = 0;
  pbVar16[0xd] = 0;
  pbVar16[0xe] = 0;
  pbVar16[0xf] = 0;
  pbVar16[0x10] = 0;
  pbVar16[0x11] = 0;
  pbVar16[0x12] = 0;
  pbVar16[0x13] = 0;
  pbVar16[0x14] = 0;
  pbVar16[0x15] = 0;
  pbVar16[0x16] = 0;
  pbVar16[0x17] = 0;
  pbVar16[0x18] = 3;
  pbVar16[0x19] = 0;
  pbVar16[0x1a] = 0;
  pbVar16[0x1b] = 0;
  if ((uVar17 & 0x100000000) == 0) {
    if ((uVar17 & 0x200000000) == 0) {
      return pbVar16;
    }
    if (((uint)pbVar10 & 0xc) == 0xc) {
      pbVar16[0x18] = 2;
      pbVar16[0x19] = 0;
      pbVar16[0x1a] = 0;
      pbVar16[0x1b] = 0;
      return pbVar10;
    }
  }
  else if ((uVar17 & 0xe00000000) != 0) {
    return pbVar16;
  }
  pbStack_58 = (byte *)_Unwind_GetLanguageSpecificData(uStack_18);
  if (pbStack_58 == (byte *)0x0) {
    pbVar16[0x18] = 8;
    pbVar16[0x19] = 0;
    pbVar16[0x1a] = 0;
    pbVar16[0x1b] = 0;
    return (byte *)0x0;
  }
  *(byte **)(pbVar16 + 0xc) = pbStack_58;
  _Unwind_VRS_Get(uStack_18,0,0xf,0,auStack_44);
  iVar3 = _Unwind_GetRegionStart(uStack_18);
  bVar1 = *pbStack_58;
  pbStack_58 = pbStack_58 + 1;
  uVar13 = ((auStack_44[0] & 0xfffffffe) - 1) - iVar3;
  iStack_6c = FUN_002eb21c(&pbStack_58,bVar1);
  if (iStack_6c == 0) {
    iStack_6c = iVar3;
  }
  pbVar4 = (byte *)(uint)*pbStack_58;
  pbStack_58 = pbStack_58 + 1;
  pbStack_74 = (byte *)0x0;
  if (pbVar4 != (byte *)0xff) {
    iVar3 = FUN_002eb1c4(&pbStack_58);
    pbStack_74 = pbStack_58 + iVar3;
  }
  bVar1 = *pbStack_58;
  pbStack_58 = pbStack_58 + 1;
  iVar3 = FUN_002eb1c4(&pbStack_58);
  pbStack_54 = pbStack_58;
  pbVar5 = pbStack_58 + iVar3;
  do {
    pbVar15 = pbVar16;
    if (pbVar5 <= pbStack_54) goto LAB_002e98ec;
    uVar6 = FUN_002eb21c(&pbStack_54,bVar1);
    iVar3 = FUN_002eb21c(&pbStack_54,bVar1);
    unaff_r8 = FUN_002eb21c(&pbStack_54,bVar1);
    iVar7 = FUN_002eb1c4(&pbStack_54);
    if (uVar13 < uVar6) goto LAB_002e98ec;
  } while (iVar3 + uVar6 <= uVar13);
LAB_002e98f2:
  if (unaff_r8 != 0) {
    pbVar11 = (byte *)(iStack_6c + unaff_r8);
    if (iVar7 != 0) {
      iStack_6c = param_4 + 0x58;
      pbVar14 = pbVar5 + iVar7 + -1;
      do {
        pbStack_50 = pbVar14;
        iVar3 = FUN_002eb1e8(&pbStack_50);
        iVar7 = iVar3 >> 0x1f;
        pbVar5 = pbVar10;
        pbVar15 = pbVar4;
        if ((iVar3 < 0) || (iVar3 == 0)) {
          if (iVar3 == 0) {
            if (((uint)pbVar10 & 6) == 2) {
              pbVar16[0] = 0;
              pbVar16[1] = 0;
              pbVar16[2] = 0;
              pbVar16[3] = 0;
              pbVar16[4] = 0;
              pbVar16[5] = 0;
              pbVar16[6] = 0;
              pbVar16[7] = 0;
              *(byte **)(pbVar16 + 8) = pbVar14;
              *(byte **)(pbVar16 + 0x10) = pbVar11;
              *(int *)(pbVar16 + 0x14) = param_4 + 0x58;
              pbVar16[0x18] = 6;
              pbVar16[0x19] = 0;
              pbVar16[0x1a] = 0;
              pbVar16[0x1b] = 0;
              return pbVar11;
            }
          }
          else {
            if (param_3 == 0) {
              if ((uVar17 & 0x500000000) != 0) {
                *(int *)pbVar16 = iVar3;
                *(int *)(pbVar16 + 4) = iVar7;
                *(byte **)(pbVar16 + 8) = pbVar14;
                *(byte **)(pbVar16 + 0x10) = pbVar11;
                *(int *)(pbVar16 + 0x14) = param_4 + 0x58;
                pbVar16[0x18] = 6;
                pbVar16[0x19] = 0;
                pbVar16[0x1a] = 0;
                pbVar16[0x1b] = 0;
                return pbVar11;
              }
            }
            else {
              if ((iStack_6c == 0) || (*(int *)(param_4 + -0x34) == 0)) goto LAB_002e98ec;
              iVar9 = FUN_002e97c0(iVar3,iVar7,pbStack_74,pbVar4,*(int *)(param_4 + -0x34),iStack_6c
                                   ,param_4);
              if (iVar9 == 0) goto LAB_002e999c;
              if ((uVar17 & 0x100000000) != 0) {
                *(int *)(pbVar16 + 0x14) = iStack_6c;
                *(int *)pbVar16 = iVar3;
                *(int *)(pbVar16 + 4) = iVar7;
                *(byte **)(pbVar16 + 8) = pbVar14;
                *(byte **)(pbVar16 + 0x10) = pbVar11;
                pbVar16[0x18] = 6;
                pbVar16[0x19] = 0;
                pbVar16[0x1a] = 0;
                pbVar16[0x1b] = 0;
                return pbVar11;
              }
            }
joined_r0x002e9a7a:
            if (-1 < (int)pbVar10 << 0x1c) goto LAB_002e98ec;
          }
        }
        else {
          piVar12 = (int *)FUN_002e97a4(iVar3,0,pbStack_74,pbVar4,param_4);
          if (piVar12 == (int *)0x0) {
            if ((uVar17 & 0x500000000) != 0) {
              *(int *)(pbVar16 + 0x14) = param_4 + 0x58;
              *(int *)pbVar16 = iVar3;
              pbVar16[4] = 0;
              pbVar16[5] = 0;
              pbVar16[6] = 0;
              pbVar16[7] = 0;
              *(byte **)(pbVar16 + 8) = pbVar14;
              *(byte **)(pbVar16 + 0x10) = pbVar11;
              pbVar16[0x18] = 6;
              pbVar16[0x19] = 0;
              pbVar16[0x1a] = 0;
              pbVar16[0x1b] = 0;
              return pbVar10;
            }
            goto joined_r0x002e9a7a;
          }
          if (param_3 != 0) {
            unaff_r8 = *(int *)(param_4 + -0x34);
            iStack_4c = iStack_6c;
            if ((iStack_6c == 0) || (unaff_r8 == 0)) goto LAB_002e98ec;
            iVar9 = FUN_002e95ec(unaff_r8,*(undefined4 *)(DAT_002e9b24 + 0x2e9968),
                                 *(undefined4 *)(DAT_002e9b28 + 0x2e996a),0);
            if (iVar9 != 0) {
              iStack_4c = *(int *)(param_4 + 0x58);
            }
            pbVar8 = (byte *)(**(code **)(*piVar12 + 8))(piVar12,unaff_r8,&iStack_4c);
            if (pbVar8 != (byte *)0x0) {
              if ((uVar17 & 0x100000000) != 0) {
                *(byte **)(pbVar16 + 0x10) = pbVar11;
                *(int *)(pbVar16 + 0x14) = iStack_4c;
                *(int *)pbVar16 = iVar3;
                *(int *)(pbVar16 + 4) = iVar7;
                *(byte **)(pbVar16 + 8) = pbVar14;
                pbVar16[0x18] = 6;
                pbVar16[0x19] = 0;
                pbVar16[0x1a] = 0;
                pbVar16[0x1b] = 0;
                return pbVar8;
              }
              goto joined_r0x002e9a7a;
            }
          }
        }
LAB_002e999c:
        pbStack_48 = pbStack_50;
        iVar3 = FUN_002eb1e8(&pbStack_48);
        if (iVar3 == 0) {
          pbVar16[0x18] = 8;
          pbVar16[0x19] = 0;
          pbVar16[0x1a] = 0;
          pbVar16[0x1b] = 0;
          return (byte *)0x0;
        }
        pbVar14 = pbStack_50 + iVar3;
      } while( true );
    }
    if (((uint)pbVar10 & 6) == 2) {
      pbVar16[0] = 0;
      pbVar16[1] = 0;
      pbVar16[2] = 0;
      pbVar16[3] = 0;
      pbVar16[4] = 0;
      pbVar16[5] = 0;
      pbVar16[6] = 0;
      pbVar16[7] = 0;
      *(byte **)(pbVar16 + 0x10) = pbVar11;
      pbVar16[0x18] = 6;
      pbVar16[0x19] = 0;
      pbVar16[0x1a] = 0;
      pbVar16[0x1b] = 0;
      return pbVar16;
    }
  }
  pbVar16[0x18] = 8;
  pbVar16[0x19] = 0;
  pbVar16[0x1a] = 0;
  pbVar16[0x1b] = 0;
  return pbVar16;
LAB_002e98ec:
  iVar7 = FUN_002e978c(param_4);
  pbVar16 = pbVar15;
  goto LAB_002e98f2;
}


