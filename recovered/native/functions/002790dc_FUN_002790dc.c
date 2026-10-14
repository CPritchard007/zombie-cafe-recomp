/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002790dc FUN_002790dc */

void FUN_002790dc(undefined4 param_1,int *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  char cVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *extraout_r1;
  byte bVar16;
  byte bVar17;
  undefined2 uVar18;
  char *pcVar19;
  int iVar20;
  uint *puVar21;
  undefined4 *puVar22;
  undefined4 uVar23;
  int *piVar24;
  int iVar25;
  byte *pbVar26;
  uint uVar27;
  byte *pbVar28;
  char *pcVar29;
  int iVar30;
  int iVar31;
  int *piVar32;
  undefined4 uVar33;
  int iVar34;
  int iVar35;
  undefined4 *puVar36;
  bool bVar37;
  ulonglong uVar38;
  undefined8 uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  undefined4 *local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_6c;
  int *local_64;
  uint local_60;
  int local_54;
  int local_44;
  uint local_38;
  uint local_34;
  
  piVar24 = (int *)*param_2;
  iVar30 = *piVar24;
  piVar10 = param_2;
  iVar25 = param_3;
  if (*(char *)(iVar30 + 0x36) != '\0') {
    FUN_00279b7e();
    piVar10 = extraout_r1;
  }
  iVar25 = iVar25 * 0x28;
  iVar31 = piVar10[1];
  puVar36 = (undefined4 *)(piVar10[8] + iVar25);
  pbVar26 = (byte *)*puVar36;
  uVar38 = FUN_0025d4dc(iVar31,*(undefined4 *)(pbVar26 + 8));
  uVar27 = (uint)*pbVar26;
  if (uVar27 == 0x48) {
    if ((int)((uint)*(ushort *)(pbVar26 + 2) << 0x14) < 0) {
      uVar39 = FUN_0025d426(iVar31,*(undefined4 *)(pbVar26 + 0x10));
    }
    else {
      uVar39 = FUN_0025d53e(iVar31,*(undefined4 *)(pbVar26 + 0x10));
    }
LAB_0027915a:
    *(undefined8 *)(puVar36 + 6) = uVar39;
  }
  else {
    if (uVar27 != 0x49) {
      uVar39 = FUN_0025d4dc(iVar31,*(undefined4 *)(pbVar26 + 0xc));
      goto LAB_0027915a;
    }
    puVar36[6] = 0;
    puVar36[7] = 0;
  }
  uVar40 = FUN_0025d4dc(iVar31,pbVar26);
  uVar41 = 0;
  if ((int)((uint)*(ushort *)(pbVar26 + 2) << 0x1f) < 0) {
    uVar41 = FUN_0025d3f8(iVar31,(int)*(short *)(pbVar26 + 0x20));
    uVar40 = uVar40 | uVar41;
    uVar41 = uVar41 - 1;
  }
  local_34 = (uint)(uVar41 >> 0x20);
  local_38 = (uint)uVar41;
  local_64 = (int *)(uVar40 >> 0x20);
  local_78 = (uint)uVar40;
  puVar36[8] = local_78;
  *(undefined2 *)(puVar36 + 4) = 0;
  puVar36[9] = local_64;
  puVar36[2] = 0xffffffff;
  puVar36[1] = 0xffffffff;
  if ((((4 < uVar27 - 0x4c) && (uVar27 != 0x48)) && (uVar27 != 0x49)) ||
     ((puVar36[7] & (uint)(uVar38 >> 0x20)) != 0 || (puVar36[6] & (uint)uVar38) != 0)) {
    if (*pbVar26 == 0x47) {
      if ((char)param_2[5] == 'E') {
        iVar14 = *(int *)(pbVar26 + 0x10);
        iVar34 = 0;
        iVar15 = DAT_00279614 + 0x2793bb;
        do {
          uVar5 = *(undefined1 *)(iVar34 + iVar15);
          uVar23 = FUN_002606fc(iVar30,*(undefined4 *)(pbVar26 + 8),0);
          iVar35 = iVar34 * 0x14;
          iVar34 = iVar34 + 1;
          uVar33 = FUN_002606fc(iVar30,*(undefined4 *)(iVar35 + *(int *)(iVar14 + 8)),0);
          uVar23 = FUN_00269118(piVar24,uVar5,uVar23,uVar33,0);
          iVar35 = FUN_002613f4(param_2,uVar23,3);
          FUN_002790dc(param_1,param_2,iVar35);
          puVar36 = (undefined4 *)(param_2[8] + iVar25);
          *(int *)(param_2[8] + iVar35 * 0x28 + 4) = param_3;
        } while (iVar34 != 2);
        *(undefined1 *)((int)puVar36 + 0x13) = 2;
      }
    }
    else if (*pbVar26 == 0x44) {
      piVar32 = (int *)*param_2;
      iVar15 = *piVar32;
      local_64 = (int *)(param_2[8] + iVar25);
      iVar14 = *local_64;
      iVar34 = param_2[1];
      piVar10 = (int *)FUN_0025f04c(iVar15,0x170);
      local_64[3] = (int)piVar10;
      if (piVar10 != (int *)0x0) {
        *(byte *)((int)local_64 + 0x12) = *(byte *)((int)local_64 + 0x12) | 0x10;
        iVar35 = *param_2;
        uVar18 = *(undefined2 *)((int)param_2 + 0x16);
        piVar10[1] = iVar34;
        *piVar10 = iVar35;
        piVar10[4] = 0;
        piVar10[6] = 0;
        piVar10[7] = 8;
        piVar10[2] = 0;
        piVar10[3] = 0;
        piVar10[8] = (int)(piVar10 + 10);
        *(undefined2 *)((int)piVar10 + 0x16) = uVar18;
        FUN_0026147a(piVar10,iVar14,0x44);
        iVar35 = piVar10[6];
        while (iVar35 = iVar35 + -1, -1 < iVar35) {
          FUN_002790dc(param_1,piVar10,iVar35);
        }
        if (*(char *)(iVar15 + 0x36) == '\0') {
          puVar36 = (undefined4 *)piVar10[8];
          local_78 = ~param_2[2];
          local_80 = (undefined4 *)0xffffffff;
          local_7c = 0xffffffff;
          local_74 = ~param_2[3];
          local_54 = piVar10[6];
          while ((local_54 = local_54 + -1, local_80 != (undefined4 *)0x0 || local_7c != 0 &&
                 (-1 < local_54))) {
            uVar8 = *(ushort *)(puVar36 + 4);
            uVar27 = uVar8 & 0xff;
            if ((uVar8 & 0xff) == 0) {
              piVar11 = (int *)FUN_0025ee10(iVar15,0x168);
              local_78 = 0;
              local_74 = 0;
              if (piVar11 != (int *)0x0) {
                puVar36[3] = piVar11;
                *(byte *)((int)puVar36 + 0x12) = *(byte *)((int)puVar36 + 0x12) | 0x20;
                *(undefined2 *)(puVar36 + 4) = 0x200;
                uVar18 = *(undefined2 *)((int)param_2 + 0x16);
                *piVar11 = *param_2;
                piVar11[7] = 8;
                piVar11[4] = uVar27;
                piVar11[6] = uVar27;
                piVar11[8] = (int)(piVar11 + 10);
                piVar11[2] = 0;
                piVar11[3] = 0;
                *(undefined2 *)((int)piVar11 + 0x16) = uVar18;
                piVar11[1] = iVar34;
                FUN_0026147a(piVar11,*puVar36,0x45);
                iVar35 = piVar11[6];
                while (iVar35 = iVar35 + -1, -1 < iVar35) {
                  FUN_002790dc(param_1,piVar11,iVar35);
                }
                piVar11[4] = (int)param_2;
                local_78 = 0;
                local_74 = 0;
                if (*(char *)(iVar15 + 0x36) == '\0') {
                  puVar22 = (undefined4 *)piVar11[8];
                  for (local_60 = 0; (int)local_60 < piVar11[6]; local_60 = local_60 + 1) {
                    uVar27 = (uint)*(byte *)*puVar22;
                    if (((uVar27 - 0x4c < 5) || (uVar27 == 0x48)) || (uVar27 == 0x49)) {
                      uVar39 = FUN_0025d3f8(iVar34,puVar22[2]);
                      local_78 = (uint)uVar39 | local_78;
                      local_74 = local_74 | (uint)((ulonglong)uVar39 >> 0x20);
                    }
                    puVar22 = puVar22 + 10;
                  }
                }
                local_80 = (undefined4 *)(local_78 & (uint)local_80);
                local_7c = local_74 & local_7c;
LAB_0027958a:
                local_78 = 0;
                local_74 = 0;
              }
            }
            else {
              bVar16 = *(byte *)((int)puVar36 + 0x12);
              if (-1 < (int)((uint)bVar16 << 0x1c)) {
                uVar38 = FUN_0025d3f8(iVar34,puVar36[2]);
                if ((int)((uint)bVar16 << 0x1e) < 0) {
                  uVar40 = FUN_0025d3f8(iVar34,*(undefined4 *)(piVar10[8] + puVar36[1] * 0x28 + 8));
                  uVar38 = uVar40 | uVar38;
                }
                uVar27 = (uint)(uVar38 >> 0x20);
                local_7c = local_7c & uVar27;
                local_80 = (undefined4 *)((uint)local_80 & (uint)uVar38);
                if (uVar8 != 2) goto LAB_0027958a;
                local_78 = (uint)uVar38 & local_78;
                local_74 = local_74 & uVar27;
              }
            }
            puVar36 = puVar36 + 10;
          }
          piVar10[0x5a] = (int)local_80;
          piVar10[0x5b] = local_7c;
          local_7c = (uint)local_80 | local_7c;
          if (local_7c != 0) {
            local_7c = 0x100;
          }
          *(short *)(local_64 + 4) = (short)local_7c;
          if (local_78 != 0 || local_74 != 0) {
            local_44 = -1;
            bVar37 = false;
            for (local_60 = 0; (!bVar37 && ((uint)(local_60 < 2) != (int)local_60 >> 0x1f));
                local_60 = local_60 + 1) {
              local_80 = (undefined4 *)piVar10[6];
              piVar11 = (int *)piVar10[8];
              while( true ) {
                local_80 = (undefined4 *)((int)local_80 + -1);
                if ((int)local_80 < 0) goto LAB_00279752;
                *(byte *)((int)piVar11 + 0x12) = *(byte *)((int)piVar11 + 0x12) & 0xbf;
                iVar35 = piVar11[2];
                if ((iVar35 != local_44) &&
                   (uVar39 = FUN_0025d3f8(iVar34,iVar35),
                   ((uint)((ulonglong)uVar39 >> 0x20) & local_74) != 0 ||
                   ((uint)uVar39 & local_78) != 0)) break;
                piVar11 = piVar11 + 10;
              }
              iVar12 = piVar11[3];
              bVar37 = true;
              for (; (bVar37 && (-1 < (int)local_80)); local_80 = (undefined4 *)((int)local_80 + -1)
                  ) {
                if (piVar11[2] == iVar35) {
                  bVar37 = false;
                  if (piVar11[3] == iVar12) {
                    iVar20 = *piVar11;
                    iVar13 = FUN_0025ccc4(*(undefined4 *)(iVar20 + 0xc));
                    iVar20 = FUN_0025ccc4(*(undefined4 *)(iVar20 + 8));
                    if ((iVar13 == iVar20) || (iVar13 == 0)) {
                      bVar16 = *(byte *)((int)piVar11 + 0x12) | 0x40;
                      goto LAB_00279666;
                    }
                  }
                }
                else {
                  bVar16 = *(byte *)((int)piVar11 + 0x12) & 0xbf;
LAB_00279666:
                  *(byte *)((int)piVar11 + 0x12) = bVar16;
                  bVar37 = true;
                }
                piVar11 = piVar11 + 10;
              }
              local_44 = iVar35;
            }
            if (bVar37) {
              iVar34 = piVar10[6];
              uVar33 = 0;
              piVar10 = (int *)piVar10[8];
              uVar23 = 0;
              while (iVar34 = iVar34 + -1, -1 < iVar34) {
                if ((*(byte *)((int)piVar10 + 0x12) & 0x40) != 0) {
                  uVar33 = FUN_002606fc(iVar15,*(undefined4 *)(*piVar10 + 0xc),0);
                  uVar23 = FUN_00267228(*param_2,uVar23,uVar33);
                  uVar33 = *(undefined4 *)(*piVar10 + 8);
                }
                piVar10 = piVar10 + 10;
              }
              uVar33 = FUN_002606fc(iVar15,uVar33,0);
              iVar34 = FUN_00269118(piVar32,0x48,uVar33,0,0);
              if (iVar34 == 0) {
                FUN_00261102(iVar15,uVar23);
              }
              else {
                *(ushort *)(iVar34 + 2) = *(ushort *)(iVar34 + 2) | *(ushort *)(iVar14 + 2) & 1;
                uVar18 = *(undefined2 *)(iVar14 + 0x20);
                *(undefined4 *)(iVar34 + 0x10) = uVar23;
                *(undefined2 *)(iVar34 + 0x20) = uVar18;
                iVar15 = FUN_002613f4(param_2,iVar34,3);
                FUN_002790dc(param_1,param_2,iVar15);
                local_64 = (int *)(param_2[8] + iVar25);
                *(int *)(param_2[8] + iVar15 * 0x28 + 4) = param_3;
                *(undefined1 *)((int)local_64 + 0x13) = 1;
              }
              *(undefined2 *)(local_64 + 4) = 0x800;
            }
          }
        }
      }
LAB_00279752:
      puVar36 = (undefined4 *)(param_2[8] + iVar25);
    }
  }
  else {
    pcVar19 = *(char **)(pbVar26 + 8);
    pcVar29 = *(char **)(pbVar26 + 0xc);
    if (*pcVar19 == -0x68) {
      puVar36[2] = *(undefined4 *)(pcVar19 + 0x18);
      puVar36[3] = (int)*(short *)(pcVar19 + 0x1c);
      uVar18 = 1;
      if ((uVar27 != 0x48) && (uVar18 = 0x80, uVar27 != 0x49)) {
        uVar18 = (undefined2)((uint)(0x20000 << (uVar27 - 0x4c & 0xff)) >> 0x10);
      }
      *(undefined2 *)(puVar36 + 4) = uVar18;
    }
    if ((pcVar29 != (char *)0x0) && (*pcVar29 == -0x68)) {
      pbVar28 = pbVar26;
      local_80 = puVar36;
      if (-1 < (int)puVar36[2]) {
        pbVar28 = (byte *)FUN_002606fc(iVar30,pbVar26,0);
        if (*(char *)(iVar30 + 0x36) != '\0') {
          FUN_002610aa(iVar30,pbVar28);
          FUN_00279b7e();
        }
        iVar15 = FUN_002613f4(param_2,pbVar28,3);
        if (iVar15 == 0) {
          iVar15 = FUN_00279b7e();
        }
        local_80 = (undefined4 *)(param_2[8] + iVar15 * 0x28);
        local_80[1] = param_3;
        puVar36 = (undefined4 *)(param_2[8] + iVar25);
        *(undefined1 *)((int)puVar36 + 0x13) = 1;
        *(byte *)((int)puVar36 + 0x12) = *(byte *)((int)puVar36 + 0x12) | 8;
      }
      iVar15 = *(int *)(pbVar28 + 0xc);
      uVar8 = *(ushort *)(iVar15 + 2);
      uVar7 = *(ushort *)(*(int *)(pbVar28 + 8) + 2);
      uVar23 = FUN_0026cf38(piVar24,iVar15);
      *(undefined4 *)(iVar15 + 0x14) = uVar23;
      iVar15 = *(int *)(pbVar28 + 8);
      uVar23 = FUN_0026cf38(piVar24,iVar15);
      *(undefined4 *)(iVar15 + 0x14) = uVar23;
      uVar23 = *(undefined4 *)(*(int *)(pbVar28 + 0xc) + 0x14);
      *(undefined4 *)(*(int *)(pbVar28 + 0xc) + 0x14) =
           *(undefined4 *)(*(int *)(pbVar28 + 8) + 0x14);
      *(undefined4 *)(*(int *)(pbVar28 + 8) + 0x14) = uVar23;
      uVar9 = (ushort)DAT_00279610;
      *(ushort *)(*(int *)(pbVar28 + 0xc) + 2) =
           *(ushort *)(*(int *)(pbVar28 + 0xc) + 2) & uVar9 | uVar7 & 0x100;
      *(ushort *)(*(int *)(pbVar28 + 8) + 2) =
           *(ushort *)(*(int *)(pbVar28 + 8) + 2) & uVar9 | uVar8 & 0x100;
      iVar15 = *(int *)(pbVar28 + 0xc);
      *(undefined4 *)(pbVar28 + 0xc) = *(undefined4 *)(pbVar28 + 8);
      *(int *)(pbVar28 + 8) = iVar15;
      if (0x4c < *pbVar28) {
        *pbVar28 = (*pbVar28 + 0xb3 ^ 2) + 0x4d;
      }
      local_80[2] = *(undefined4 *)(iVar15 + 0x18);
      local_80[3] = (int)*(short *)(iVar15 + 0x1c);
      *(ulonglong *)(local_80 + 6) = uVar41 | uVar38;
      *(ulonglong *)(local_80 + 8) = uVar40;
      bVar16 = *pbVar28;
      uVar18 = 1;
      if ((bVar16 != 0x48) && (uVar18 = 0x80, bVar16 != 0x49)) {
        uVar18 = (undefined2)((uint)(0x20000 << (uint)(byte)(bVar16 + 0xb4)) >> 0x10);
      }
      *(undefined2 *)(local_80 + 4) = uVar18;
    }
  }
  if (((((char)param_2[5] != 'E') || (iVar15 = *piVar24, *pbVar26 != 0x97)) ||
      (*(int **)(pbVar26 + 0x10) == (int *)0x0)) || (**(int **)(pbVar26 + 0x10) != 2))
  goto LAB_00279abe;
  uVar33 = *(undefined4 *)(pbVar26 + 4);
  uVar23 = FUN_0025b154(uVar33);
  iVar14 = FUN_00262898(iVar15,uVar33,uVar23,2,1,0);
  if (iVar14 == 0) goto LAB_00279abe;
  bVar16 = *(byte *)(iVar14 + 3);
  if ((bVar16 & 1) == 0) goto LAB_00279abe;
  pcVar29 = *(char **)(iVar14 + 4);
  cVar1 = *pcVar29;
  cVar2 = pcVar29[1];
  cVar3 = pcVar29[2];
  puVar22 = *(undefined4 **)(*(int *)(pbVar26 + 0x10) + 8);
  pcVar29 = (char *)puVar22[5];
  if (((*pcVar29 != -0x68) || (iVar14 = FUN_0025ccc4(pcVar29), iVar14 != 0x61)) ||
     ((int)((uint)*(byte *)(*(int *)(pcVar29 + 0x28) + 0x22) << 0x1b) < 0)) goto LAB_00279abe;
  pcVar29 = (char *)*puVar22;
  cVar4 = *pcVar29;
  if (cVar4 == -0x7c) {
    cVar4 = pcVar29[0x23];
  }
  if (cVar4 == -0x7b) {
    iVar34 = (int)*(short *)(pcVar29 + 0x1c);
    puVar22 = (undefined4 *)piVar24[0x7c];
    if (puVar22 == (undefined4 *)0x0) {
LAB_0027985a:
      iVar14 = 0;
      local_80 = (undefined4 *)0x0;
    }
    else {
      iVar35 = puVar22[0x11] + (iVar34 + -1) * 0x28;
      uVar8 = *(ushort *)(iVar35 + 0x1c);
      local_80 = (undefined4 *)(uVar8 & 1);
      if (((uVar8 & 1) != 0) || (iVar14 = FUN_0025f066(*puVar22), iVar14 == 0)) goto LAB_0027985a;
      FUN_00265734(iVar14,iVar35);
      FUN_00270438(iVar14,0x62,1);
      FUN_0025c770(iVar14);
      iVar35 = sqlite3_value_type(iVar14);
      if (iVar35 == 3) {
        local_80 = (undefined4 *)sqlite3_value_text(iVar14);
      }
    }
    puVar21 = (uint *)(piVar24[2] + 0xb4);
    if (iVar34 < 0x21) {
      *puVar21 = *puVar21 | 1 << (iVar34 - 1U & 0xff);
    }
    else {
      *puVar21 = 0xffffffff;
    }
LAB_0027989c:
    if (local_80 == (undefined4 *)0x0) {
      local_78 = (uint)local_80;
      uVar27 = 0;
    }
    else {
      for (local_6c = 0;
          (((cVar6 = *(char *)((int)local_80 + local_6c), cVar6 != '\0' && (cVar6 != cVar1)) &&
           (cVar6 != cVar2)) && (cVar6 != cVar3)); local_6c = local_6c + 1) {
      }
      if (local_6c != 0) {
        uVar27 = 0;
        if (*(char *)((int)local_80 + local_6c + -1) != -1) {
          if (cVar6 == cVar1) {
            uVar27 = (uint)(*(char *)((int)local_80 + local_6c + 1) == '\0');
          }
          local_78 = FUN_0025f1ba(iVar15,0x5e,local_80);
          if (local_78 != 0) {
            *(undefined1 *)(*(int *)(local_78 + 4) + local_6c) = 0;
          }
          if (cVar4 == -0x7b) {
            iVar15 = piVar24[2];
            puVar21 = (uint *)(iVar15 + 0xb4);
            if (*(short *)(pcVar29 + 0x1c) < 0x21) {
              *puVar21 = *puVar21 | 1 << ((int)*(short *)(pcVar29 + 0x1c) - 1U & 0xff);
            }
            else {
              *puVar21 = 0xffffffff;
            }
            if ((uVar27 != 0) && (uVar27 = 1, *(char *)(*(int *)(pcVar29 + 4) + 1) != '\0')) {
              uVar23 = FUN_002627dc(piVar24);
              FUN_00277a30(piVar24,pcVar29,uVar23);
              if (*(int *)(iVar15 + 0x1c) != 0) {
                *(undefined4 *)(*(int *)(iVar15 + 4) + (*(int *)(iVar15 + 0x1c) + -1) * 0x14 + 0xc)
                     = 0;
              }
              FUN_002627fe(piVar24,uVar23);
              uVar27 = 1;
            }
          }
          goto LAB_0027998c;
        }
      }
      uVar27 = 0;
      local_80 = (undefined4 *)uVar27;
      local_78 = uVar27;
    }
  }
  else {
    if (cVar4 == '^') {
      iVar14 = 0;
      local_80 = *(undefined4 **)(pcVar29 + 4);
      goto LAB_0027989c;
    }
    iVar14 = 0;
    uVar27 = 0;
    local_78 = 0;
    local_80 = (undefined4 *)0x0;
  }
LAB_0027998c:
  FUN_00263758(iVar14);
  if (local_80 != (undefined4 *)0x0) {
    bVar37 = (bVar16 & 2) == 0;
    uVar23 = *(undefined4 *)(*(int *)(*(int *)(pbVar26 + 0x10) + 8) + 0x14);
    iVar15 = FUN_002606fc(iVar30,local_78,0);
    if (*(char *)(iVar30 + 0x36) == '\0') {
      iVar34 = *(int *)(iVar15 + 4);
      iVar14 = FUN_0025b154(iVar34);
      pbVar28 = (byte *)(iVar34 + iVar14 + -1);
      bVar17 = *pbVar28;
      if (bVar37) {
        if (bVar17 == 0x40) {
          uVar27 = bVar16 & 2;
        }
        bVar17 = *(byte *)(DAT_00279b84 + 0x279a26 + (uint)bVar17);
      }
      *pbVar28 = bVar17 + 1;
    }
    if (bVar37) {
      iVar14 = DAT_00279b88 + 0x2799f8;
    }
    else {
      iVar14 = DAT_00279b8c + 0x2799fe;
    }
    iVar14 = FUN_00261718(iVar30,1,iVar14,0);
    iVar34 = FUN_002606fc(iVar30,uVar23,0);
    if ((iVar14 != 0) && (iVar34 != 0)) {
      *(int *)(iVar34 + 0x14) = iVar14;
      *(ushort *)(iVar34 + 2) = *(ushort *)(iVar34 + 2) | 0x100;
    }
    uVar33 = FUN_00269118(piVar24,0x50,iVar34,local_78,0);
    iVar34 = FUN_002613f4(param_2,uVar33,3);
    FUN_002790dc(param_1,param_2,iVar34);
    iVar35 = FUN_002606fc(iVar30,uVar23,0);
    if ((iVar35 != 0) && (iVar14 != 0)) {
      *(int *)(iVar35 + 0x14) = iVar14;
      *(ushort *)(iVar35 + 2) = *(ushort *)(iVar35 + 2) | 0x100;
    }
    uVar23 = FUN_00269118(piVar24,0x4f,iVar35,iVar15,0);
    iVar15 = FUN_002613f4(param_2,uVar23,3);
    FUN_002790dc(param_1,param_2,iVar15);
    puVar36 = (undefined4 *)(param_2[8] + iVar25);
    if (uVar27 != 0) {
      *(int *)(param_2[8] + iVar34 * 0x28 + 4) = param_3;
      *(int *)(param_2[8] + iVar15 * 0x28 + 4) = param_3;
      *(undefined1 *)((int)puVar36 + 0x13) = 2;
    }
  }
LAB_00279abe:
  if (((*pbVar26 == 0x97) &&
      (iVar15 = sqlite3_stricmp(*(undefined4 *)(pbVar26 + 4),DAT_00279b90 + 0x279ace), iVar15 == 0))
     && (**(int **)(pbVar26 + 0x10) == 2)) {
    puVar22 = (undefined4 *)(*(int **)(pbVar26 + 0x10))[2];
    pcVar29 = (char *)puVar22[5];
    if (*pcVar29 == -0x68) {
      uVar23 = *puVar22;
      uVar38 = FUN_0025d4dc(iVar31,uVar23);
      uVar40 = FUN_0025d4dc(iVar31,pcVar29);
      if ((uVar38 & uVar40) == 0) {
        uVar23 = FUN_002606fc(iVar30,uVar23,0);
        uVar23 = FUN_00269118(piVar24,0x32,0,uVar23,0);
        iVar30 = FUN_002613f4(param_2,uVar23,3);
        iVar30 = param_2[8] + iVar30 * 0x28;
        *(ulonglong *)(iVar30 + 0x18) = uVar38;
        *(undefined4 *)(iVar30 + 8) = *(undefined4 *)(pcVar29 + 0x18);
        *(int *)(iVar30 + 0xc) = (int)*(short *)(pcVar29 + 0x1c);
        *(undefined2 *)(iVar30 + 0x10) = 0x40;
        *(int *)(iVar30 + 4) = param_3;
        puVar36 = (undefined4 *)(param_2[8] + iVar25);
        *(undefined1 *)((int)puVar36 + 0x13) = 1;
        *(byte *)((int)puVar36 + 0x12) = *(byte *)((int)puVar36 + 0x12) | 8;
        uVar23 = puVar36[9];
        *(undefined4 *)(iVar30 + 0x20) = puVar36[8];
        *(undefined4 *)(iVar30 + 0x24) = uVar23;
      }
    }
  }
  puVar36[6] = puVar36[6] | local_38;
  puVar36[7] = puVar36[7] | local_34;
  FUN_00279b7e();
  return;
}


