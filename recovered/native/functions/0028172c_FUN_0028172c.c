/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0028172c FUN_0028172c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0028270e) */
/* WARNING (jumptable): Removing unreachable block (ram,0x00282736) */
/* WARNING: Removing unreachable block (ram,0x0028270e) */
/* WARNING: Removing unreachable block (ram,0x00282736) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0028172c(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 uVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int *extraout_r1;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  uint uVar18;
  int *piVar19;
  uint *puVar20;
  int iVar21;
  int iVar22;
  undefined4 *puVar23;
  int *piVar24;
  undefined1 uVar25;
  char cVar26;
  bool bVar27;
  byte *local_70;
  int *local_6c;
  byte *local_60;
  undefined4 *local_5c;
  int iStack_54;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  byte *local_24;
  byte *local_20;
  int local_1c;
  
  piVar24 = (int *)*param_1;
  pbVar3 = (byte *)FUN_0025f080(piVar24);
  param_1[2] = (int)pbVar3;
  pbVar4 = pbVar3;
  if (pbVar3 == (byte *)0x0) {
    pbVar4 = (byte *)FUN_0028316a();
  }
  pbVar4[0x60] = 1;
  param_1[0x13] = 2;
  local_6c = (int *)FUN_00268f60(param_1,param_2,param_3,&local_34);
  if ((int)local_6c < 0) {
    FUN_0028316a();
  }
  iVar5 = piVar24[4];
  if ((local_6c == (int *)0x1) && (iVar6 = FUN_00275e54(param_1), iVar6 != 0)) {
    FUN_0028316a();
  }
  pbVar4 = (byte *)FUN_0025f2ac(piVar24,local_34);
  if (pbVar4 == (byte *)0x0) {
    FUN_0028316a();
  }
  if (param_5 == 0) {
    pbVar7 = (byte *)FUN_0025f2ac(piVar24,param_4);
  }
  else {
    pbVar7 = (byte *)FUN_0026877c(piVar24,DAT_00281ad8 + 0x2817a8,param_4);
  }
  local_60 = *(byte **)(param_3 + 4);
  puVar16 = (undefined4 *)(iVar5 + (int)local_6c * 0x10);
  if (local_60 != (byte *)0x0) {
    local_60 = (byte *)*puVar16;
  }
  local_28 = FUN_00268e90(param_1,0x13,pbVar4,pbVar7,local_60);
  if (local_28 != 0) {
    local_28 = FUN_00283142();
  }
  local_24 = pbVar4;
  local_20 = pbVar7;
  local_1c = local_28;
  iVar5 = sqlite3_file_control(piVar24,local_60,0xe,&local_28);
  if (iVar5 == 0) {
    uVar8 = 0;
    iVar6 = local_28;
    if (local_28 == 0) {
      uVar8 = FUN_002830ca();
    }
    param_3 = param_1[0x13] + 1;
    param_1[0x13] = param_3;
    FUN_002662da(pbVar3,0x5e,0,param_3,uVar8,iVar6,uVar8);
    FUN_00263b94(pbVar3,1);
    FUN_00265916(pbVar3,0,0,DAT_00281adc + 0x28183a,0);
    FUN_0026641e(pbVar3,0x10,param_3,1);
    sqlite3_free(local_28);
    FUN_002830ca();
  }
  if (iVar5 != 0xc) {
    if (local_28 != 0) {
      FUN_00268e48(param_1,DAT_00281ae0 + 0x281868);
      sqlite3_free(local_28);
    }
    param_1[0x11] = param_1[0x11] + 1;
    param_1[3] = iVar5;
    FUN_002830ca();
  }
  iVar5 = sqlite3_stricmp(pbVar4,DAT_00281ae4 + 0x281886);
  if (iVar5 == 0) {
    iVar5 = FUN_00287abc(param_1);
    if (iVar5 != 0) {
      FUN_00283142();
    }
    FUN_0025c3f4(pbVar3,local_6c);
    if (pbVar7 == (byte *)0x0) {
      FUN_00263b94(pbVar3,1);
      FUN_00265916(pbVar3,0,0,DAT_00281ae8 + 0x2818be,0);
      iVar5 = DAT_00281aec;
      param_1[0x13] = param_1[0x13] + 2;
      iVar5 = FUN_00266dd0(pbVar3,8,iVar5 + 0x2818f3);
      FUN_0025c394(pbVar3,iVar5,local_6c);
      FUN_0025c394(pbVar3,iVar5 + 1,local_6c);
      FUN_0025c394(pbVar3,iVar5 + 6,2000);
      FUN_002830ca();
    }
    iVar6 = FUN_0025b90e(pbVar7);
    iVar5 = iVar6;
    if ((iVar6 < 0) && (iVar5 = DAT_00281af0, iVar6 != -0x80000000)) {
      iVar5 = -iVar6;
    }
    FUN_00275f2c(param_1,0,local_6c);
    FUN_0026641e(pbVar3,7,iVar5,1);
    FUN_00266266(pbVar3,0x25,local_6c,3,1);
    *(int *)(puVar16[3] + 0x50) = iVar5;
  }
  else {
    local_70 = (byte *)sqlite3_stricmp(pbVar4,DAT_00281af4 + 0x28194a);
    pbVar11 = pbVar7;
    if (local_70 == (byte *)0x0) {
      param_3 = puVar16[1];
      if (pbVar7 != (byte *)0x0) {
        iVar5 = FUN_0025b90e(pbVar7);
        piVar24[0xf] = iVar5;
        iVar5 = FUN_00262148(param_3,iVar5,0xffffffff,0);
        if (iVar5 != 7) {
          FUN_002830ca();
        }
        *(undefined1 *)((int)piVar24 + 0x36) = 1;
        FUN_002830ca();
        goto LAB_00281996;
      }
      if (param_3 != 0) {
        pbVar11 = *(byte **)(*(int *)(param_3 + 4) + 0x20);
      }
      iVar5 = DAT_00281af8 + 0x28196c;
      pbVar9 = (byte *)0x0;
LAB_00281d08:
      FUN_002830ac(pbVar9,iVar5,pbVar11,(int)pbVar11 >> 0x1f);
LAB_00281d0e:
      pbVar11 = (byte *)sqlite3_stricmp(pbVar7,DAT_00281e9c + 0x281d16);
      if (pbVar11 != (byte *)0x0) {
        iVar5 = sqlite3_stricmp(pbVar7,DAT_00281ea0 + 0x281d26);
        pbVar11 = (byte *)0x1;
        if (iVar5 != 0) {
          iVar5 = sqlite3_stricmp(pbVar7,DAT_00281ea4 + 0x281d36);
          pbVar11 = (byte *)0x2;
          if ((iVar5 != 0) && (uVar18 = FUN_0025b90e(pbVar7), pbVar11 = local_60, uVar18 < 3)) {
            pbVar11 = (byte *)(uVar18 & 0xff);
          }
        }
      }
      *(char *)(piVar24 + 0xe) = (char)pbVar11;
      iVar5 = FUN_002620c2(local_70,pbVar11);
      if (iVar5 != 0) {
        FUN_002830ca();
      }
      if ((byte *)0x1 < pbVar11 + -1) {
        FUN_002830ca();
      }
      param_1 = (int *)FUN_00266dd0(pbVar3,6,DAT_00281ea8 + 0x281dbd);
      FUN_0025c394(pbVar3,param_1,local_6c);
      FUN_0025c394(pbVar3,(int)param_1 + 1,local_6c);
      FUN_0025c3a6(pbVar3,(int)param_1 + 2,param_1 + 1);
      FUN_0025c394(pbVar3,param_1 + 1,pbVar11 + -1);
      FUN_0025c394(pbVar3,(int)param_1 + 5,local_6c);
      FUN_0025c3f4(pbVar3,local_6c);
      FUN_002830ca();
    }
    else {
LAB_00281996:
      iVar5 = sqlite3_stricmp(pbVar4,DAT_00281afc + 0x28199e);
      if (iVar5 == 0) {
        local_6c = (int *)puVar16[1];
        if (pbVar7 == (byte *)0x0) {
          pbVar3 = (byte *)0xffffffff;
        }
        else {
          pbVar3 = (byte *)FUN_00262a1c(pbVar7);
        }
        if ((-1 < (int)pbVar3) && (iVar5 = 0, *(int *)(param_3 + 4) == 0)) {
          for (; iVar5 < piVar24[5]; iVar5 = iVar5 + 1) {
            FUN_00262088(*(undefined4 *)(piVar24[4] + iVar5 * 0x10 + 4),pbVar3);
          }
        }
        pbVar9 = (byte *)FUN_00262088(local_6c,pbVar3);
        iVar5 = DAT_00281b00 + 0x2819f2;
        pbVar11 = pbVar9;
        goto LAB_00281d08;
      }
      iVar5 = sqlite3_stricmp(pbVar4,DAT_00281b04 + 0x2819fa);
      if ((iVar5 == 0) || (iVar5 = sqlite3_stricmp(pbVar4,DAT_00281b08 + 0x281a08), iVar5 == 0)) {
        iVar5 = FUN_00287abc(param_1);
        if (iVar5 != 0) {
          FUN_00283142();
        }
        FUN_00275ec4(param_1,local_6c);
        iVar5 = DAT_00281b0c;
        param_3 = param_1[0x13] + 1;
        param_1[0x13] = param_3;
        if (*(char *)(iVar5 + 0x281a74 + (uint)*pbVar4) == 'p') {
          FUN_0026641e(pbVar3,0x92,local_6c,param_3);
        }
        else {
          iVar6 = FUN_0025b90e(pbVar7);
          iVar5 = iVar6;
          if ((iVar6 < 0) && (iVar5 = DAT_00281af0, iVar6 != -0x80000000)) {
            iVar5 = -iVar6;
          }
          FUN_00266266(pbVar3,0x93,local_6c,param_3,iVar5);
        }
        FUN_0026641e(pbVar3,0x10,param_3,1);
        FUN_00282f08();
      }
      iVar5 = sqlite3_stricmp(pbVar4,DAT_00281b10 + 0x281a86);
      if (iVar5 == 0) {
        if (pbVar7 == (byte *)0x0) {
LAB_00281ab4:
          iVar5 = -1;
        }
        else {
          iVar5 = 1;
          iVar6 = sqlite3_stricmp(pbVar7,DAT_00281b14 + 0x281a9e);
          if ((iVar6 != 0) && (iVar5 = sqlite3_stricmp(pbVar7,DAT_00281b18 + 0x281aac), iVar5 != 0))
          goto LAB_00281ab4;
        }
        bVar27 = *(int *)(param_3 + 4) == 0;
        if (iVar5 == -1) {
          if (bVar27) {
            uVar18 = (uint)*(byte *)((int)piVar24 + 0x37);
            goto LAB_00281b4a;
          }
        }
        else {
          iVar6 = 2;
          if (bVar27) {
            for (; iVar6 < piVar24[5]; iVar6 = iVar6 + 1) {
              FUN_0025c088(**(undefined4 **)(*(int *)(piVar24[4] + iVar6 * 0x10 + 4) + 4),iVar5);
            }
            *(char *)((int)piVar24 + 0x37) = (char)iVar5;
          }
        }
        uVar18 = FUN_0025c088(**(undefined4 **)(puVar16[1] + 4),iVar5);
LAB_00281b4a:
        if (uVar18 == 1) {
          iVar5 = DAT_00281e74 + 0x281b5a;
        }
        else {
          iVar5 = DAT_00281e70 + 0x281b54;
        }
        FUN_00263b94(pbVar3,1);
        param_1 = (int *)0x0;
        FUN_00265916(pbVar3,0,0,DAT_00281e78 + 0x281b6c,0);
        pbVar11 = pbVar3;
        goto LAB_00281fac;
      }
      iVar5 = sqlite3_stricmp(pbVar4,DAT_00281e7c + 0x281b88);
      if (iVar5 == 0) {
        local_70 = (byte *)FUN_00287abc(param_1);
        if (local_70 != (byte *)0x0) {
          FUN_00283142();
        }
        FUN_00263b94(pbVar3,1);
        FUN_00265916(pbVar3,local_70,local_70,DAT_00281e80 + 0x281bae,local_70);
        if (pbVar7 != (byte *)0x0) {
          uVar8 = FUN_0025b154(pbVar7);
          piVar19 = (int *)(DAT_00281e84 + 0x281bf2);
          do {
            iVar5 = *piVar19;
            piVar19 = piVar19 + 1;
            if (iVar5 == 0) break;
            iVar5 = sqlite3_strnicmp(pbVar7,iVar5,uVar8);
            if (iVar5 == 0) goto LAB_00281c04;
            local_70 = (byte *)((int)local_70 + 1);
          } while (local_70 != (byte *)0x6);
        }
        if (*(int *)(param_3 + 4) == 0) {
          *(undefined4 *)(param_3 + 4) = 1;
          local_70 = (byte *)0xffffffff;
          local_6c = (int *)0x0;
        }
        else {
          local_70 = (byte *)0xffffffff;
        }
LAB_00281c04:
        iVar6 = piVar24[5] + -1;
        iVar5 = iVar6 * 0x10;
        for (; -1 < iVar6; iVar6 = iVar6 + -1) {
          if ((*(int *)(piVar24[4] + iVar5 + 4) != 0) &&
             (((int *)iVar6 == local_6c || (*(int *)(param_3 + 4) == 0)))) {
            FUN_0025c3f4(pbVar3,iVar6);
            FUN_00266266(pbVar3,0x7e,iVar6,1,local_70);
          }
          iVar5 = iVar5 + -0x10;
        }
        FUN_00281fb2();
        return;
      }
      iVar5 = sqlite3_stricmp(pbVar4,DAT_00281e88 + 0x281c52);
      if (iVar5 == 0) {
        iVar5 = **(int **)(puVar16[1] + 4);
        local_30 = -2;
        local_2c = -1;
        if ((pbVar7 != (byte *)0x0) &&
           ((FUN_0025b710(pbVar7,&local_30,DAT_00281e8c,1), local_2c + 1 < 0 != SCARRY4(local_2c,1)
            || ((local_2c == -1 && (local_30 != -1)))))) {
          local_30 = -1;
          local_2c = -1;
        }
        iVar6 = local_2c + 1;
        if ((iVar6 < 0 == SCARRY4(local_2c,1)) &&
           ((local_2c != -1 || (iVar6 = local_30 + 1, local_30 == -1)))) {
          *(int *)(iVar5 + 0x88) = local_30;
          *(int *)(iVar5 + 0x8c) = local_2c;
          iVar22 = *(int *)(iVar5 + 0xb8);
          if (iVar22 != 0) {
            *(int *)(iVar22 + 0x10) = local_30;
            *(int *)(iVar22 + 0x14) = local_2c;
          }
        }
        local_30 = *(int *)(iVar5 + 0x88);
        local_2c = *(undefined4 *)(iVar5 + 0x8c);
        FUN_002830ac(iVar6,DAT_00281e90 + 0x281cc6);
      }
      iVar5 = sqlite3_stricmp(pbVar4,DAT_00281e94 + 0x281cd4);
      if (iVar5 == 0) {
        local_70 = (byte *)puVar16[1];
        local_60 = (byte *)FUN_00287abc(param_1);
        pbVar9 = local_60;
        if (local_60 != (byte *)0x0) {
          pbVar9 = (byte *)FUN_00283142();
        }
        if (pbVar7 == (byte *)0x0) {
          if (local_70 != (byte *)0x0) {
            pbVar9 = (byte *)FUN_00262100(local_70);
            pbVar11 = pbVar9;
          }
          iVar5 = DAT_00281e98 + 0x281d0a;
          goto LAB_00281d08;
        }
        goto LAB_00281d0e;
      }
    }
    iVar5 = sqlite3_stricmp(pbVar4,DAT_00281eac + 0x281dc6);
    if (iVar5 == 0) {
      iVar5 = FUN_00287abc(param_1);
      if (iVar5 != 0) {
        FUN_00283142();
      }
      if (((pbVar7 == (byte *)0x0) || (iVar5 = FUN_0025b880(pbVar7,&local_30), iVar5 == 0)) ||
         (local_30 < 1)) {
        local_30 = DAT_00281eb0;
      }
      FUN_00275f2c(param_1,0,local_6c);
      FUN_0026641e(pbVar3,7,local_30,1);
      uVar8 = FUN_002665da(pbVar3,0x80,local_6c);
      FUN_002665da(pbVar3,0x10,1);
      FUN_0026641e(pbVar3,0x14,1,0xffffffff);
      FUN_0026641e(pbVar3,0x78,1,uVar8);
      FUN_002624c2(pbVar3,uVar8);
      FUN_002830ca();
    }
    local_70 = (byte *)(DAT_00281eb4 + 0x281e4c);
    iVar5 = sqlite3_stricmp(pbVar4);
    if (iVar5 != 0) goto LAB_00281ee4;
    iVar5 = FUN_00287abc(param_1);
    if (iVar5 != 0) {
      FUN_00283142();
    }
    if (pbVar7 == (byte *)0x0) {
      iVar5 = *(int *)(puVar16[3] + 0x50);
LAB_00282052:
      FUN_00281f08(param_1,local_70,iVar5,iVar5 >> 0x1f);
      return;
    }
    uVar8 = FUN_0025b90e(pbVar7);
    *(undefined4 *)(puVar16[3] + 0x50) = uVar8;
  }
  pbVar3 = (byte *)puVar16[1];
  puVar17 = *(undefined4 **)(pbVar3 + 4);
  param_1 = *(int **)(puVar16[3] + 0x50);
  FUN_00261f68(pbVar3);
  FUN_0025c030(*puVar17,param_1);
  FUN_00262002(pbVar3);
  FUN_002830ca();
LAB_00281ee4:
  iVar6 = DAT_002821ec + 0x281eec;
  iVar5 = sqlite3_stricmp(pbVar4,iVar6);
  if (iVar5 != 0) goto LAB_00281f5e;
  if (pbVar7 != (byte *)0x0) goto LAB_00281f10;
  uVar25 = *(undefined1 *)((int)piVar24 + 0x35);
LAB_00281f06:
  FUN_0026656e(param_1,iVar6,uVar25,pbVar7);
  FUN_002830ca();
LAB_00281f10:
  uVar18 = *pbVar7 - 0x30;
  if (2 < (uVar18 & 0xff)) {
    uVar18 = 1;
    iVar5 = sqlite3_stricmp(pbVar7,DAT_002821f0 + 0x281f26);
    if (iVar5 != 0) {
      iVar5 = sqlite3_stricmp(pbVar7,DAT_002821f4 + 0x281f34);
      uVar18 = (uint)(iVar5 == 0) * 2;
    }
  }
  pbVar3 = (byte *)(*param_1 + 0x35);
  if (*pbVar3 == uVar18) {
    FUN_002830ca();
  }
  iVar5 = FUN_0027c994(param_1);
  if (iVar5 != 0) {
    FUN_002830ca();
  }
  *pbVar3 = (byte)uVar18;
  FUN_002830ca();
LAB_00281f5e:
  iVar6 = DAT_002821f8 + 0x281f66;
  iVar5 = sqlite3_stricmp(pbVar4);
  if (iVar5 != 0) goto LAB_00282026;
  if (pbVar7 != (byte *)0x0) goto LAB_00281fc2;
  piVar19 = *(int **)(DAT_002821fc + 0x281f7a);
  if (*piVar19 == 0) {
    FUN_002830ca();
  }
  FUN_00263b94(pbVar3,1);
  FUN_00265916(pbVar3,0,0,iVar6,0);
  iVar5 = *piVar19;
  pbVar11 = pbVar3;
LAB_00281fac:
  FUN_002662da(pbVar11,0x5e,0,1,0,iVar5,0);
  uVar8 = 0x10;
  uVar15 = 1;
  pbVar3 = pbVar11;
LAB_00281fb8:
  FUN_0026641e(pbVar11,uVar8,uVar15,uVar15);
  FUN_002830ca();
LAB_00281fc2:
  if ((*pbVar7 != 0) &&
     ((iVar5 = (**(code **)(*piVar24 + 0x20))(*piVar24,pbVar7,1,&local_30), iVar5 != 0 ||
      (local_30 == 0)))) {
    FUN_00268e48(param_1,DAT_00282200 + 0x281fe6);
    FUN_00283142();
  }
  if (*(byte *)((int)piVar24 + 0x35) < 2) {
    FUN_0027c994(param_1);
  }
  puVar20 = *(uint **)(DAT_00282204 + 0x282002);
  sqlite3_free(*puVar20);
  uVar18 = (uint)*pbVar7;
  if (uVar18 != 0) {
    uVar10 = sqlite3_mprintf(DAT_00282208 + 0x282018,pbVar7);
    *puVar20 = uVar10;
    FUN_002830ca();
  }
  *puVar20 = uVar18;
  FUN_002830ca();
LAB_00282026:
  local_70 = (byte *)(DAT_0028220c + 0x28202e);
  iVar5 = sqlite3_stricmp(pbVar4,local_70);
  if (iVar5 == 0) {
    iVar5 = FUN_00287abc(param_1);
    if (iVar5 != 0) {
      FUN_00283142();
    }
    if (pbVar7 == (byte *)0x0) {
      iVar5 = *(byte *)((int)puVar16 + 9) - 1;
      goto LAB_00282052;
    }
    if ((char)piVar24[0xd] == '\0') {
      FUN_00268e48(param_1,DAT_00282210 + 0x28206c);
      FUN_002830ca();
    }
    bVar1 = *(byte *)(DAT_00282214 + 0x2820bc + (uint)*pbVar7);
    if ((bVar1 & 4) == 0) {
      cVar2 = FUN_002629bc(pbVar7,bVar1 & 4,1);
    }
    else {
      cVar2 = FUN_0025b90e();
    }
    *(char *)((int)puVar16 + 9) = cVar2 + '\x01';
    FUN_002830ca();
  }
  piVar19 = (int *)(DAT_00282218 + 0x282186);
  local_70 = (byte *)(DAT_00282218 + 0x282116);
  do {
    iVar5 = sqlite3_stricmp(pbVar4,*(int *)local_70);
    if (iVar5 == 0) goto code_r0x002820bc;
    local_70 = (byte *)((int)local_70 + 8);
  } while (local_70 != (byte *)piVar19);
  FUN_00283154();
  if (pbVar7 == (byte *)0x0) {
    FUN_002822e0();
    return;
  }
  local_70 = (byte *)FUN_00287abc(param_1);
  if (local_70 != (byte *)0x0) {
    FUN_00283142();
  }
  iVar5 = FUN_0026460e(piVar24,pbVar7,local_60);
  if (iVar5 == 0) {
    FUN_002830ca();
  }
  FUN_00263b94(pbVar3,6);
  param_1[0x13] = 6;
  FUN_00265916(pbVar3,local_70,local_70,DAT_00282220 + 0x28216a,local_70);
  FUN_00265916(pbVar3,1,local_70,DAT_00282224 + 0x282178,local_70);
  FUN_00265916(pbVar3,2,local_70,DAT_00282228 + 0x28218a,local_70);
  FUN_00265916(pbVar3,3,local_70,DAT_0028222c + 0x28219c,local_70);
  FUN_00265916(pbVar3,4,local_70,DAT_00282230 + 0x2821ac,local_70);
  FUN_00265916(pbVar3,5,local_70,DAT_00282234 + 0x2821be,local_70);
  FUN_0026d134(param_1,iVar5);
  iVar6 = DAT_00282238 + 0x2821d6;
  piVar19 = *(int **)(iVar5 + 0xc);
  local_6c = (int *)local_70;
  for (; (int)local_70 < *(int *)(iVar5 + 8); local_70 = (byte *)((int)local_70 + 1)) {
    param_1 = (int *)(uint)*(byte *)((int)piVar19 + 0x17);
    if (param_1 == (int *)0x0) {
      FUN_0026641e(pbVar3,7,(int)local_70 - (int)local_6c,1);
      FUN_002662da(pbVar3,0x5e,0,2,0,*piVar19,0);
      iVar22 = piVar19[3];
      if (piVar19[3] == 0) {
        iVar22 = iVar6;
      }
      param_1 = (int *)0x0;
      FUN_002662da(pbVar3,0x5e,0,3,0,iVar22,0);
      FUN_0026641e(pbVar3,7,(char)piVar19[5] != '\0',4);
      if (piVar19[2] == 0) {
        FUN_0026641e(pbVar3,10,0,5);
      }
      else {
        FUN_002662da(pbVar3,0x5e,0,5,0,piVar19[2],0);
      }
      FUN_0026641e(pbVar3,7,*(undefined1 *)((int)piVar19 + 0x15),6);
      FUN_0026641e(pbVar3,0x10,1,6);
    }
    else {
      local_6c = (int *)((int)local_6c + 1);
    }
    piVar19 = piVar19 + 6;
  }
  FUN_002830ca();
  iVar6 = sqlite3_stricmp(pbVar4,iRam002825d8 + 0x2822e8);
  if ((iVar6 == 0) && (pbVar7 != (byte *)0x0)) {
    piVar19 = (int *)FUN_00287abc(param_1);
    if (piVar19 != (int *)0x0) {
      FUN_00283142();
    }
    local_6c = (int *)FUN_00264662(piVar24,pbVar7,iVar5);
    piVar12 = local_6c;
    if (local_6c == (int *)0x0) {
      piVar12 = (int *)FUN_002830ca();
    }
    iVar6 = piVar12[3];
    FUN_00263b94(pbVar3,3);
    param_1[0x13] = 3;
    FUN_00265916(pbVar3,piVar19,piVar19,iRam002825dc + 0x282330,piVar19);
    FUN_00265916(pbVar3,1,piVar19,iRam002825e0 + 0x282340,piVar19);
    FUN_00265916(pbVar3,2,piVar19,iRam002825e4 + 0x282350,piVar19);
    for (param_1 = piVar19; (int)param_1 < local_6c[9]; param_1 = (int *)((int)param_1 + 1)) {
      iVar22 = *(int *)((int)param_1 * 4 + local_6c[1]);
      FUN_0026641e(pbVar3,7,param_1,1);
      FUN_0026641e(pbVar3,7,iVar22,2);
      piVar19 = (int *)(iVar22 * 0x18);
      FUN_002662da(pbVar3,0x5e,0,3,0,*(undefined4 *)((int)piVar19 + *(int *)(iVar6 + 0xc)),0);
      FUN_0026641e(pbVar3,0x10,1,3);
    }
    FUN_002830ca();
  }
  iVar6 = sqlite3_stricmp(pbVar4,iRam002825e8 + 0x2823b8);
  piVar12 = param_1;
  if ((iVar6 == 0) && (pbVar7 != (byte *)0x0)) {
    pbVar3 = (byte *)FUN_00287abc(param_1);
    if (pbVar3 != (byte *)0x0) {
      FUN_00283142();
    }
    iVar6 = FUN_0026460e(piVar24,pbVar7,iVar5);
    if (iVar6 == 0) {
      FUN_002830ca();
    }
    piVar12 = (int *)FUN_002662b8(param_1);
    puVar17 = *(undefined4 **)(iVar6 + 0x10);
    piVar19 = piVar12;
    if (puVar17 == (undefined4 *)0x0) {
      piVar19 = (int *)FUN_002830ca();
    }
    FUN_00263b94(piVar19,3);
    param_1[0x13] = 3;
    FUN_00265916(piVar12,pbVar3,pbVar3,iRam002825ec + 0x28240a,pbVar3);
    FUN_00265916(piVar12,1,pbVar3,iRam002825f0 + 0x28241a,pbVar3);
    FUN_00265916(piVar12,2,pbVar3,iRam002825f4 + 0x28242a,pbVar3);
    do {
      FUN_0026641e(piVar12,7,pbVar3,1);
      FUN_002662da(piVar12,0x5e,0,2,0,*puVar17,0);
      FUN_0026641e(piVar12,7,*(char *)(puVar17 + 0xb) != '\0',3);
      FUN_0026641e(piVar12,0x10,1,3);
      puVar17 = (undefined4 *)puVar17[5];
      pbVar3 = pbVar3 + 1;
    } while (puVar17 != (undefined4 *)0x0);
    FUN_002830ca();
    piVar19 = (int *)0x0;
    local_6c = piVar12;
  }
  iVar6 = sqlite3_stricmp(pbVar4,iRam002825f8 + 0x282486);
  if (iVar6 == 0) {
    piVar19 = (int *)FUN_00287abc(piVar12);
    if (piVar19 != (int *)0x0) {
      FUN_00283142();
    }
    FUN_00263b94(pbVar3,3);
    piVar12[0x13] = 3;
    FUN_00265916(pbVar3,piVar19,piVar19,iRam002825fc + 0x2824b0,piVar19);
    FUN_00265916(pbVar3,1,piVar19,iRam00282600 + 0x2824c0,piVar19);
    piVar12 = (int *)(iRam00282608 + 0x2824d8);
    FUN_00265916(pbVar3,2,piVar19,iRam00282604 + 0x2824d0,piVar19);
    for (; (int)piVar19 < piVar24[5]; piVar19 = (int *)((int)piVar19 + 1)) {
      local_6c = (int *)((int)piVar19 * 0x10);
      if (*(int *)((int)local_6c + piVar24[4] + 4) != 0) {
        FUN_0026641e(pbVar3,7,piVar19,1);
        FUN_002662da(pbVar3,0x5e,0,2,0,*(undefined4 *)(piVar24[4] + (int)local_6c),0);
        iVar6 = **(int **)(*(int *)((int)local_6c + piVar24[4] + 4) + 4);
        piVar13 = piVar12;
        if (*(char *)(iVar6 + 0xe) == '\0') {
          piVar13 = *(int **)(iVar6 + 0x90);
        }
        FUN_002662da(pbVar3,0x5e,0,3,0,piVar13,0);
        FUN_0026641e(pbVar3,0x10,1,3);
      }
    }
    FUN_002830ca();
  }
  iVar6 = sqlite3_stricmp(pbVar4,iRam0028260c + 0x28255e);
  if (iVar6 == 0) {
    FUN_00263b94(pbVar3,2);
    piVar12[0x13] = 2;
    FUN_00265916(pbVar3,0,0,iRam00282610 + 0x28257e,0);
    FUN_00265916(pbVar3,1,0,iRam00282614 + 0x28258c,0);
    puVar17 = (undefined4 *)piVar24[0x69];
    piVar24 = (int *)0x0;
    for (; puVar17 != (undefined4 *)0x0; puVar17 = (undefined4 *)*puVar17) {
      local_6c = (int *)((int)piVar24 + 1);
      puVar23 = (undefined4 *)puVar17[2];
      FUN_0026641e(pbVar3,7,piVar24,1);
      FUN_002662da(pbVar3,0x5e,0,2,0,*puVar23,0);
      FUN_0026641e(pbVar3,0x10,1,2);
      piVar24 = local_6c;
    }
    FUN_002830ca();
    piVar24 = (int *)&DAT_0000002a;
    piVar12 = (int *)&DAT_00000045;
    _DAT_00000074 = 0x74;
    _DAT_00000078 = 0x45;
    _DAT_0000007c = 0x2a;
    pbVar3 = (byte *)0x26;
    piVar19 = extraout_r1;
  }
  iVar6 = sqlite3_stricmp(pbVar4,iRam00282920 + 0x282620);
  if ((iVar6 == 0) && (pbVar7 != (byte *)0x0)) {
    iStack_54 = FUN_00287abc(piVar12);
    if (iStack_54 != 0) {
      FUN_00283142();
    }
    iVar5 = FUN_0026460e(piVar24,pbVar7,iVar5);
    if (iVar5 == 0) {
      FUN_002830ca();
    }
    uVar15 = FUN_002662b8(piVar12);
    local_70 = *(byte **)(iVar5 + 0x24);
    uVar8 = uVar15;
    if (local_70 == (byte *)0x0) {
      uVar8 = FUN_002830ca();
    }
    FUN_00263b94(uVar8,8);
    piVar12[0x13] = 8;
    FUN_00265916(uVar15,iStack_54,iStack_54,iRam00282924 + 0x28267c,iStack_54);
    FUN_00265916(uVar15,1,iStack_54,iRam00282928 + 0x28268c,iStack_54);
    FUN_00265916(uVar15,2,iStack_54,iRam0028292c + 0x28269c,iStack_54);
    FUN_00265916(uVar15,3,iStack_54,iRam00282930 + 0x2826ac,iStack_54);
    FUN_00265916(uVar15,4,iStack_54,iRam00282934 + 0x2826bc,iStack_54);
    FUN_00265916(uVar15,5,iStack_54,iRam00282938 + 0x2826cc,iStack_54);
    FUN_00265916(uVar15,6,iStack_54,iRam0028293c + 0x2826dc,iStack_54);
    FUN_00265916(uVar15,7,iStack_54,iRam00282940 + 0x2826ec,iStack_54);
    iVar6 = iRam00282944 + 0x2826fc;
    do {
      pbVar3 = local_70;
      for (local_60 = (byte *)0x0; (int)local_60 < *(int *)((int)local_70 + 0x14);
          local_60 = (byte *)((int)local_60 + 1)) {
        iVar14 = *(int *)((int)pbVar3 + 0x28);
        iVar22 = iVar6;
        switch(*(undefined1 *)((int)local_70 + 0x19)) {
        case 6:
          iVar22 = iRam00282950 + 0x282728;
          break;
        case 7:
          iVar22 = iRam00282948 + 0x28271c;
          break;
        case 8:
          iVar22 = iRam00282954 + 0x28272e;
          break;
        case 9:
          iVar22 = iRam0028294c + 0x282722;
        }
        switch(*(undefined1 *)((int)local_70 + 0x1a)) {
        case 6:
          iVar21 = iRam00282960 + 0x282750;
          break;
        case 7:
          iVar21 = iRam00282958 + 0x282744;
          break;
        case 8:
          iVar21 = iRam00282968 + 0x28275c;
          break;
        case 9:
          iVar21 = iRam0028295c + 0x28274a;
          break;
        default:
          iVar21 = iRam00282964 + 0x282756;
        }
        FUN_0026641e(uVar15,7,iStack_54,1);
        FUN_0026641e(uVar15,7,local_60,2);
        FUN_002662da(uVar15,0x5e,0,3,0,*(undefined4 *)((int)local_70 + 8),0);
        FUN_002662da(uVar15,0x5e,0,4,0,
                     *(undefined4 *)(*(int *)((int)pbVar3 + 0x24) * 0x18 + *(int *)(iVar5 + 0xc)),0)
        ;
        uVar8 = 10;
        if (iVar14 != 0) {
          uVar8 = 0x5e;
        }
        FUN_002662da(uVar15,uVar8,0,5,0,iVar14,0);
        FUN_002662da(uVar15,0x5e,0,6,0,iVar21,0);
        FUN_002662da(uVar15,0x5e,0,7,0,iVar22,0);
        FUN_002662da(uVar15,0x5e,0,8,0,DAT_0028296c + 0x2827f2,0);
        FUN_0026641e(uVar15,0x10,1,8);
        pbVar3 = (byte *)((int)pbVar3 + 8);
      }
      local_70 = *(byte **)((int)local_70 + 4);
      iStack_54 = iStack_54 + 1;
      if (local_70 == (byte *)0x0) {
        FUN_002830c8();
      }
    } while( true );
  }
  iVar5 = sqlite3_stricmp(pbVar4,DAT_00282970 + 0x282840);
  if (iVar5 == 0) {
    if (pbVar7 == (byte *)0x0) {
      FUN_002830ca();
    }
    iVar5 = FUN_00262a1c(pbVar7);
    if (iVar5 == 0) {
      iVar6 = DAT_00282978 + 0x28288d;
    }
    else {
      iVar6 = DAT_00282974 + 0x282881;
    }
    iVar14 = DAT_0028297c + 0x282876;
    iVar22 = DAT_00282980 + 0x282878;
    FUN_0026affc(piVar24,iVar14,2,1,iVar6,iVar22,0,0,0);
    FUN_0026affc(piVar24,iVar14,3,1,iVar6,iVar22,0,0,0);
    iVar6 = DAT_00282988 + 0x2828b2;
    FUN_0026affc(piVar24,iVar6,2,1,DAT_00282984 + 0x28290d,iVar22,0,0,0);
    uVar8 = FUN_0025b154(iVar6);
    iVar6 = FUN_00262898(piVar24,iVar6,uVar8,2,1,0);
    if (iVar6 != 0) {
      *(undefined1 *)(iVar6 + 3) = 3;
    }
    uVar25 = 1;
    if (iVar5 != 0) {
      uVar25 = 3;
    }
    iVar5 = DAT_0028298c + 0x2828f8;
    uVar8 = FUN_0025b154(iVar5);
    iVar5 = FUN_00262898(piVar24,iVar5,uVar8,2,1,0);
    if (iVar5 == 0) {
      iVar5 = FUN_002830ca();
    }
    *(undefined1 *)(iVar5 + 3) = uVar25;
    FUN_002830ca();
    software_interrupt(0xb8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar5 = sqlite3_stricmp(pbVar4,DAT_00282c54 + 0x282998);
  if ((iVar5 == 0) || (iVar5 = sqlite3_stricmp(pbVar4,DAT_00282c58 + 0x2829a6), iVar5 == 0)) {
    cVar2 = *(char *)(DAT_00282c5c + 0x2829f8 + (uint)*pbVar4);
    if (*piVar19 == 0) {
      local_6c = (int *)0xffffffff;
    }
    iVar5 = FUN_00287abc(piVar12);
    if (iVar5 == 0) {
      piVar12[0x13] = 6;
      FUN_00263b94(pbVar3,1);
      FUN_00265916(pbVar3,0,0,DAT_00282c60 + 0x2829ea,0);
      local_30 = 100;
      if ((pbVar7 != (byte *)0x0) && (FUN_0025b880(pbVar7,&local_30), local_30 < 1)) {
        local_30 = 100;
      }
      FUN_0026641e(pbVar3,7,local_30,1);
      iVar5 = DAT_00282c64 + 0x282a20;
      for (local_70 = (byte *)0x0; (int)local_70 < piVar24[5];
          local_70 = (byte *)((int)local_70 + 1)) {
        if ((local_70 == (byte *)local_6c) || ((int)local_6c < 0)) {
          FUN_00275ec4(piVar12,local_70);
          uVar8 = FUN_002665da(pbVar3,0x78,1);
          FUN_0026641e(pbVar3,6,0,0);
          FUN_002624c2(pbVar3,uVar8);
          iVar22 = 0;
          iVar6 = *(int *)(piVar24[4] + (int)local_70 * 0x10 + 0xc);
          for (local_5c = *(undefined4 **)(iVar6 + 0x10); local_5c != (undefined4 *)0x0;
              local_5c = (undefined4 *)*local_5c) {
            iVar14 = local_5c[2];
            FUN_0026641e(pbVar3,7,*(undefined4 *)(iVar14 + 0x14),iVar22 + 2);
            iVar21 = *(int *)(iVar14 + 0x10);
            iVar14 = iVar22;
            for (; iVar22 = iVar14 + 1, iVar21 != 0; iVar21 = *(int *)(iVar21 + 0x14)) {
              FUN_0026641e(pbVar3,7,*(undefined4 *)(iVar21 + 0x28),iVar14 + 3);
              iVar14 = iVar22;
            }
          }
          if (piVar12[0x13] <= iVar22 + 3) {
            piVar12[0x13] = iVar22 + 4;
          }
          FUN_00266266(pbVar3,0x6f,2,iVar22,1);
          FUN_0025c3b8(pbVar3,(uint)local_70 & 0xff);
          uVar8 = FUN_002665da(pbVar3,0x49,2);
          uVar15 = FUN_0026877c(piVar24,iVar5,*(undefined4 *)(piVar24[4] + (int)local_70 * 0x10));
          FUN_002662da(pbVar3,0x5e,0,3,0,uVar15,0xffffffff);
          FUN_00266266(pbVar3,0xd,2,4,1);
          FUN_00266266(pbVar3,0x5b,4,3,2);
          FUN_0026641e(pbVar3,0x10,2,1);
          FUN_002624c2(pbVar3,uVar8);
          local_5c = *(undefined4 **)(iVar6 + 0x10);
          while ((local_5c != (undefined4 *)0x0 && (cVar2 != 'q'))) {
            iVar6 = local_5c[2];
            if (*(int *)(iVar6 + 0x10) != 0) {
              uVar8 = FUN_002665da(pbVar3,0x78,1);
              FUN_0026641e(pbVar3,6,0,0);
              FUN_002624c2(pbVar3,uVar8);
              if (-1 < (int)((uint)*(byte *)(iVar6 + 0x22) << 0x1b)) {
                FUN_0026e7ea(piVar12,iVar6,1,0x27);
              }
              FUN_0026641e(pbVar3,7,0,2);
              iVar22 = FUN_0026641e(pbVar3,0x48,1,0);
              FUN_0026641e(pbVar3,0x14,2,1);
              puVar16 = *(undefined4 **)(iVar6 + 0x10);
              iStack_54 = 1;
              for (; iStack_54 = iStack_54 + 1, puVar16 != (undefined4 *)0x0;
                  puVar16 = (undefined4 *)puVar16[5]) {
                uVar8 = FUN_002707d4(piVar12,puVar16,1,3,0);
                uVar8 = FUN_00266944(pbVar3,0x34,iStack_54,0,uVar8,puVar16[9] + 1);
                iVar14 = FUN_00266dd0(pbVar3,0xb,DAT_00282c68 + 0x282c43);
                FUN_00263832(pbVar3,iVar14 + 1,DAT_00282c6c + 0x282bf4,0xfffffffe);
                FUN_00263832(pbVar3,iVar14 + 3,DAT_00282c70 + 0x282c04,0xfffffffe);
                FUN_00263832(pbVar3,iVar14 + 4,*puVar16,0);
                FUN_002624c2(pbVar3,iVar14 + 9);
                FUN_002624c2(pbVar3,uVar8);
              }
              FUN_0026641e(pbVar3,0x5f,1,iVar22 + 1);
              FUN_002624c2(pbVar3,iVar22);
              puVar16 = *(undefined4 **)(iVar6 + 0x10);
              iStack_54 = 1;
              for (; iStack_54 = iStack_54 + 1, puVar16 != (undefined4 *)0x0;
                  puVar16 = (undefined4 *)puVar16[5]) {
                uVar8 = FUN_002665da(pbVar3,0x78,1);
                FUN_0026641e(pbVar3,6,0,0);
                FUN_002624c2(pbVar3,uVar8);
                iVar6 = FUN_00266dd0(pbVar3,10,DAT_00282f84 + 0x282cab);
                FUN_0025c394(pbVar3,iVar6 + 1,iStack_54);
                FUN_0025c3a6(pbVar3,iVar6 + 1,iVar6 + 4);
                FUN_0025c394(pbVar3,iVar6 + 3,iStack_54);
                FUN_0025c3a6(pbVar3,iVar6 + 3,iVar6 + 2);
                FUN_002624c2(pbVar3,iVar6 + 4);
                FUN_00263832(pbVar3,iVar6 + 6,DAT_00282f88 + 0x282ce6,0xfffffffe);
                FUN_00263832(pbVar3,iVar6 + 7,*puVar16,0);
              }
            }
            local_5c = (undefined4 *)*local_5c;
          }
        }
      }
      iVar5 = FUN_00266dd0(pbVar3,4,DAT_00282f8c + 0x282d69);
      FUN_0025c3a6(pbVar3,iVar5,-local_30);
      FUN_002624c2(pbVar3,iVar5 + 1);
      FUN_00263832(pbVar3,iVar5 + 2,DAT_00282f90 + 0x282d58,0xfffffffe);
      FUN_002830ca();
      return;
    }
    FUN_00283142();
    return;
  }
  iVar6 = DAT_00282f94 + 0x282d68;
  iVar5 = sqlite3_stricmp(pbVar4);
  if (iVar5 != 0) {
    iVar5 = sqlite3_stricmp(pbVar4,DAT_00282fa8 + 0x282e38);
    if (((iVar5 == 0) || (iVar5 = sqlite3_stricmp(pbVar4,DAT_00282fac + 0x282e46), iVar5 == 0)) ||
       (iVar5 = sqlite3_stricmp(pbVar4,DAT_00282fb0 + 0x282e54), iVar5 == 0)) {
      FUN_0025c3f4(pbVar3,local_6c);
      bVar1 = *pbVar4;
      if (bVar1 == 0x53) {
LAB_00282e84:
        iVar5 = 1;
        goto LAB_00282e86;
      }
      if (bVar1 < 0x54) {
        if (bVar1 != 0x46) {
LAB_00282e80:
          iVar5 = 6;
          goto LAB_00282e86;
        }
      }
      else if (bVar1 != 0x66) {
        if (bVar1 == 0x73) goto LAB_00282e84;
        goto LAB_00282e80;
      }
      iVar5 = 0;
LAB_00282e86:
      if ((iVar5 != 0) && (pbVar7 != (byte *)0x0)) {
        iVar6 = FUN_00266dd0(pbVar3,3,DAT_00282fb4 + 0x282edf);
        FUN_0025c394(pbVar3,iVar6,local_6c);
        uVar8 = FUN_0025b90e(pbVar7);
        FUN_0025c394(pbVar3,iVar6 + 1,uVar8);
        FUN_0025c394(pbVar3,iVar6 + 2,local_6c);
        FUN_0025c3a6(pbVar3,iVar6 + 2,iVar5);
        FUN_002830ca();
        return;
      }
      iVar6 = FUN_00266dd0(pbVar3,3,DAT_00282fb8 + 0x282f2d);
      uVar18 = iVar6 + 1;
      FUN_0025c394(pbVar3,iVar6,local_6c);
      FUN_0025c394(pbVar3,uVar18,local_6c);
      if (uVar18 < *(uint *)(pbVar3 + 0x1c)) {
        *(int *)(*(int *)(pbVar3 + 4) + uVar18 * 0x14 + 0xc) = iVar5;
      }
      FUN_00263b94(pbVar3,1);
      FUN_00265916(pbVar3,0,0,pbVar4,0xffffffff);
      FUN_002830ca();
      return;
    }
    iVar5 = sqlite3_stricmp(pbVar4,DAT_00282fbc + 0x282f2c);
    if (iVar5 == 0) {
      FUN_00263b94(pbVar3,1);
      piVar12[0x13] = 1;
      FUN_00265916(pbVar3,0,0,DAT_00282fc0 + 0x282f4c,0);
      iVar5 = 0;
      while( true ) {
        iVar6 = sqlite3_compileoption_get(iVar5);
        if (iVar6 == 0) break;
        FUN_002662da(pbVar3,0x5e,0,1,0,iVar6,0);
        FUN_0026641e(pbVar3,0x10,1,1);
        iVar5 = iVar5 + 1;
      }
      FUN_002830ca();
      return;
    }
    iVar5 = sqlite3_stricmp(pbVar4,DAT_00283170 + 0x282fcc);
    if (iVar5 == 0) {
      if (*piVar19 == 0) {
        local_6c = (int *)0xa;
      }
      local_70 = pbVar7;
      if (pbVar7 != (byte *)0x0) {
        iVar5 = sqlite3_stricmp(pbVar7,DAT_00283174 + 0x282fea);
        local_70 = (byte *)0x1;
        if (iVar5 != 0) {
          iVar5 = sqlite3_stricmp(pbVar7,DAT_00283178 + 0x282ffc);
          local_70 = (byte *)((uint)(iVar5 == 0) * 2);
        }
      }
      iVar5 = FUN_00287abc(piVar12);
      if (iVar5 != 0) {
        FUN_00283142();
        return;
      }
      FUN_00263b94(pbVar3,3);
      iVar5 = DAT_0028317c;
      piVar12[0x13] = 3;
      FUN_00265916(pbVar3,0,0,iVar5 + 0x283028,0);
      FUN_00265916(pbVar3,1,0,DAT_00283180 + 0x283038,0);
      FUN_00265916(pbVar3,2,0,DAT_00283184 + 0x283048,0);
      FUN_00266266(pbVar3,0x7d,local_6c,local_70,1);
      FUN_00281fba(pbVar3,0x10,1,3);
    }
    iVar5 = sqlite3_stricmp(pbVar4,DAT_00283188 + 0x283072);
    if (iVar5 == 0) {
      if (pbVar7 != (byte *)0x0) {
        uVar8 = FUN_0025b90e(pbVar7);
        sqlite3_wal_autocheckpoint(piVar24,uVar8);
      }
      iVar5 = 0;
      iVar6 = 0;
      if (piVar24[0x2f] == DAT_0028318c + 0x28309c) {
        iVar5 = piVar24[0x30];
        iVar6 = iVar5 >> 0x1f;
      }
      FUN_00281f08(piVar12,DAT_00283190 + 0x2830ae,iVar5,iVar6);
    }
    iVar5 = sqlite3_stricmp(pbVar4,DAT_00283194 + 0x2830ba);
    if (iVar5 == 0) {
      sqlite3_db_release_memory(piVar24);
      FUN_002830ca();
      return;
    }
    if ((char)piVar24[0xd] == '\0') goto code_r0x00283142;
    iVar5 = piVar24[6];
    iVar22 = puVar16[1];
    cVar2 = *(char *)((int)puVar16 + 9);
    piVar19 = *(int **)(iVar22 + 4);
    FUN_00261f68(iVar22);
    iVar6 = *piVar19;
    cVar26 = cVar2;
    if (cVar2 != '\x01') {
      cVar26 = *(char *)(iVar6 + 0xc) != '\0';
    }
    *(char *)(iVar6 + 7) = cVar26;
    bVar27 = false;
    if (cVar2 == '\x03') {
      bVar27 = *(char *)(iVar6 + 0xc) == '\0';
    }
    *(bool *)(iVar6 + 8) = bVar27;
    if (cVar26 == '\0') {
      if (iVar5 << 10 < 0) {
        uVar25 = 3;
        goto LAB_0028311c;
      }
      uVar25 = 2;
      *(undefined1 *)(iVar6 + 0xb) = 2;
      if (iVar5 << 9 < 0) {
        uVar25 = 3;
      }
    }
    else {
      uVar25 = 0;
LAB_0028311c:
      *(undefined1 *)(iVar6 + 0xb) = uVar25;
    }
    *(undefined1 *)(iVar6 + 9) = uVar25;
    *(byte *)(iVar6 + 10) = *(byte *)(iVar6 + 0xb);
    if (bVar27 != false) {
      *(byte *)(iVar6 + 10) = *(byte *)(iVar6 + 0xb) | 0x20;
    }
    FUN_00262002(iVar22);
code_r0x00283142:
    FUN_0025fbda(piVar24,pbVar4);
    FUN_0025fbda(piVar24,pbVar7);
    FUN_0028316a();
    return;
  }
  if (pbVar7 == (byte *)0x0) {
    iVar5 = FUN_00287abc(piVar12);
    if (iVar5 != 0) {
      FUN_00283142();
      return;
    }
    FUN_00263b94(pbVar3,1);
    FUN_00265916(pbVar3,0,0,iVar6,0);
    FUN_0026641e(pbVar3,0x5e,0,1);
    FUN_00263832(pbVar3,0xffffffff,
                 *(undefined4 *)
                  (DAT_00282f98 +
                   (uint)*(byte *)(*(int *)(*(int *)(*piVar12 + 0x10) + 0xc) + 0x4d) * 8 + 0x282e12)
                 ,0xfffffffe);
    FUN_00281fb2();
  }
  if ((*(ushort *)(*(int *)(piVar24[4] + 0xc) + 0x4e) & 5) == 1) {
    FUN_002830ca();
    return;
  }
  piVar24 = (int *)(DAT_00282fa0 + 0x282e74);
  do {
    if (*piVar24 == 0) {
LAB_00282e1a:
      if (*piVar24 == 0) {
        FUN_00268e48(piVar12,DAT_00282fa4 + 0x282e2c,pbVar7);
        FUN_002830ca();
        return;
      }
      FUN_002830ca();
      return;
    }
    iVar5 = sqlite3_stricmp(pbVar7);
    if (iVar5 == 0) {
      cVar2 = (char)piVar24[1];
      if (cVar2 == '\0') {
        cVar2 = '\x03' - ('\x01' - (*(char *)(DAT_00282f9c + 0x282e3a) == '\0'));
      }
      *(char *)(*(int *)(*(int *)(*piVar12 + 0x10) + 0xc) + 0x4d) = cVar2;
      goto LAB_00282e1a;
    }
    piVar24 = piVar24 + 2;
  } while( true );
code_r0x002820bc:
  iVar5 = *param_1;
  pbVar11 = (byte *)FUN_002662b8(param_1);
  if (pbVar11 == (byte *)0x0) {
    FUN_002830ca();
  }
  pbVar3 = *(byte **)((int)local_70 + 4);
  if (pbVar7 == (byte *)0x0) goto code_r0x002820d8;
  if (*(char *)(iVar5 + 0x34) == '\0') {
    pbVar3 = (byte *)((uint)pbVar3 & DAT_0028221c);
  }
  iVar6 = FUN_00262a1c(pbVar7,0);
  if (iVar6 == 0) {
    *(uint *)(iVar5 + 0x18) = *(uint *)(iVar5 + 0x18) & ~(uint)pbVar3;
  }
  else {
    pbVar3 = (byte *)((uint)pbVar3 | *(uint *)(iVar5 + 0x18));
    *(byte **)(iVar5 + 0x18) = pbVar3;
  }
  uVar8 = 0x81;
  uVar15 = 0;
  goto LAB_00281fb8;
code_r0x002820d8:
  iVar6 = *(int *)local_70;
  uVar25 = ((uint)pbVar3 & *(uint *)(iVar5 + 0x18)) != 0;
  goto LAB_00281f06;
}


