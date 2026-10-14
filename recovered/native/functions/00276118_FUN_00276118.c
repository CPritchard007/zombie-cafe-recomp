/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00276118 FUN_00276118 */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0027730e) */
/* WARNING: Removing unreachable block (ram,0x0027730e) */

void FUN_00276118(int *param_1,uint *param_2,byte *param_3)

{
  uint *puVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  undefined1 uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  ushort uVar20;
  int iVar21;
  undefined4 *puVar22;
  int iVar23;
  uint uVar24;
  uint *puVar25;
  int iVar26;
  int iVar27;
  int *piVar28;
  int iVar29;
  int iVar30;
  short *psVar31;
  undefined4 *puVar32;
  uint *puVar33;
  int *piVar34;
  undefined4 uVar35;
  int iVar36;
  char *pcVar37;
  short *psVar38;
  int iVar39;
  short *psVar40;
  short *psVar41;
  int iVar42;
  int *piVar43;
  uint uVar44;
  int iVar45;
  bool bVar46;
  int *local_e8;
  int *local_dc;
  int local_d8;
  int *local_d4;
  uint local_d0;
  int *local_cc;
  uint local_c8;
  short *local_c0;
  int local_a8;
  short *local_a0;
  int *local_80;
  int *piStack_7c;
  uint local_78;
  int iStack_74;
  int iStack_70;
  int **ppiStack_64;
  int *piStack_60;
  short *psStack_5c;
  undefined4 uStack_58;
  undefined1 *puStack_54;
  byte bStack_44;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  int iStack_3c;
  int *piStack_38;
  int *piStack_34;
  int *piStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  piVar28 = (int *)param_1[0x79];
  param_1[0x79] = param_1[0x7a];
  param_1[0x7a] = param_1[0x7a] + 1;
  iVar39 = *param_1;
  piVar6 = param_1;
  if (param_2 == (uint *)0x0) {
    piVar6 = (int *)FUN_00277474();
  }
  if (*(char *)(iVar39 + 0x36) != '\0') {
    piVar6 = (int *)FUN_00277474();
  }
  iVar21 = piVar6[0x11];
  if (iVar21 != 0) {
    piVar6 = (int *)FUN_00277474();
  }
  uVar7 = FUN_00268e90(piVar6,0x15,iVar21);
  if (uVar7 != 0) {
    FUN_00277474();
  }
  memset(&uStack_40,uVar7,0x28);
  uVar20 = (ushort)*param_3;
  if (uVar20 < 5) {
    FUN_00261102(iVar39,param_2[0xe]);
    param_2[0xe] = uVar7;
    uVar20 = *(ushort *)((int)param_2 + 6) & 0xfffe;
    *(ushort *)((int)param_2 + 6) = uVar20;
  }
  FUN_0025d2dc(param_1,param_2,0,uVar20,iVar21);
  local_80 = (int *)param_2[0xe];
  piVar6 = (int *)*param_2;
  local_a0 = (short *)param_2[10];
  if (param_1[0x11] != 0) {
    FUN_00277446();
  }
  if (*(char *)(iVar39 + 0x36) != '\0') {
    FUN_00277446();
  }
  uVar20 = *(ushort *)((int)param_2 + 6);
  iVar21 = FUN_002662b8(param_1);
  if (iVar21 == 0) {
    FUN_00277446();
  }
  if ((1 < *piVar6) && (*param_3 - 6 < 2)) {
    FUN_00268e48(param_1,DAT_00276500 + 0x2761fa);
    FUN_00277446();
    goto LAB_00276200;
  }
  local_c8 = ((uint)uVar20 << 0x1d) >> 0x1f;
  local_dc = param_1;
  for (local_d0 = 0;
      (piVar6 = local_dc, piVar34 = (int *)param_2[0xf], piVar34 == (int *)0x0 &&
      ((int)local_d0 < (int)*local_a0)); local_d0 = local_d0 + 1) {
LAB_00276200:
    psVar38 = local_a0 + local_d0 * 0x20 + 4;
    local_cc = *(int **)(psVar38 + 8);
    if (local_cc != (int *)0x0) {
      if (*(uint *)(psVar38 + 10) == 0) {
        iVar29 = local_dc[0x78];
        local_78 = *(uint *)(psVar38 + 10);
        FUN_0025c94a(param_2,&local_78);
        local_dc[0x78] = iVar29 + local_78;
        iVar29 = local_dc[0x81];
        iVar30 = *local_dc;
        if (-1 < *(int *)(iVar30 + 0x18) << 0x1f) {
          psVar31 = (short *)param_2[10];
          iVar42 = (uint)*(ushort *)((int)local_cc + 6) << 0x1d;
          psVar40 = psVar31 + local_d0 * 0x20 + 4;
          uVar10 = *(undefined4 *)(psVar40 + 0x10);
          puVar32 = *(undefined4 **)(psVar40 + 8);
          if ((((local_c8 & 0xff) == 0) || (-1 < iVar42)) && ((-1 < iVar42 || (*psVar31 < 2)))) {
            iVar8 = puVar32[0x12];
            if (((((iVar8 == 0) || (param_2[0x12] == 0)) && (puVar32[0x13] == 0)) &&
                ((param_2[0x11] == 0 || (iVar8 == 0)))) &&
               (((*(short *)puVar32[10] != 0 &&
                 (-1 < (int)((uint)*(ushort *)((int)puVar32 + 6) << 0x1f))) &&
                ((iVar8 == 0 || (((local_c8 & 0xff) == 0 && (*psVar31 < 2)))))))) {
              uVar20 = *(ushort *)((int)param_2 + 6);
              if ((((-1 < iVar42) || ((uVar20 & 1) == 0)) &&
                  (((piVar6 = (int *)param_2[0xe], piVar6 == (int *)0x0 || (puVar32[0xe] == 0)) &&
                   ((local_c8 == 0 || (puVar32[0xe] == 0)))))) &&
                 (((iVar8 == 0 || ((param_2[0xb] == 0 && ((uVar20 & 1) == 0)))) &&
                  (-1 < (int)((uint)*(byte *)(psVar40 + 0xe) << 0x1a))))) {
                if (puVar32[0xf] == 0) {
LAB_002763bc:
                  local_dc[0x81] = *(int *)(psVar40 + 2);
                  FUN_00268e90(local_dc,0x15,0,0,0);
                  local_dc[0x81] = iVar29;
                  while (puVar32 = (undefined4 *)puVar32[0xf], puVar32 != (undefined4 *)0x0) {
                    uVar18 = param_2[0xe];
                    local_cc = (int *)param_2[0xf];
                    uVar24 = param_2[0x12];
                    param_2[0xe] = 0;
                    param_2[10] = 0;
                    param_2[0xf] = 0;
                    param_2[0x12] = 0;
                    uVar7 = FUN_002607da(iVar30,param_2,0);
                    param_2[0x12] = uVar24;
                    param_2[0xe] = uVar18;
                    param_2[10] = (uint)psVar31;
                    *(undefined1 *)(param_2 + 1) = 0x71;
                    param_2[0x11] = 0;
                    if (uVar7 != 0) {
                      *(undefined4 *)(uVar7 + 0x44) = 0;
                      *(int **)(uVar7 + 0x3c) = local_cc;
                      local_cc = (int *)uVar7;
                    }
                    param_2[0xf] = (uint)local_cc;
                    if (*(char *)(iVar30 + 0x36) != '\0') {
                      FUN_0027747a();
                    }
                  }
                  psVar31 = *(short **)(psVar40 + 8);
                  FUN_0025fbda(iVar30,*(undefined4 *)psVar40);
                  FUN_0025fbda(iVar30,*(undefined4 *)(psVar40 + 2));
                  FUN_0025fbda(iVar30,*(undefined4 *)(psVar40 + 4));
                  iVar29 = *(int *)(psVar40 + 6);
                  psVar40[0] = 0;
                  psVar40[1] = 0;
                  psVar40[2] = 0;
                  psVar40[3] = 0;
                  psVar40[4] = 0;
                  psVar40[5] = 0;
                  psVar40[8] = 0;
                  psVar40[9] = 0;
                  if (iVar29 != 0) {
                    if (*(short *)(iVar29 + 0x20) == 1) {
                      piVar6 = (int *)local_dc[0x6c];
                      if ((int *)local_dc[0x6c] == (int *)0x0) {
                        piVar6 = local_dc;
                      }
                      *(int *)(iVar29 + 0x48) = piVar6[0x89];
                      piVar6[0x89] = iVar29;
                    }
                    else {
                      *(short *)(iVar29 + 0x20) = *(short *)(iVar29 + 0x20) + -1;
                    }
                    psVar40[6] = 0;
                    psVar40[7] = 0;
                  }
                  puVar33 = param_2;
                  psVar38 = psVar31;
                  do {
                    psVar41 = *(short **)(psVar38 + 0x14);
                    uVar7 = puVar33[10];
                    sVar4 = *psVar41;
                    if (uVar7 == 0) {
                      uVar7 = FUN_00266f0c(iVar30,0,0,0);
                      puVar33[10] = uVar7;
                      if (uVar7 == 0) break;
                      uVar5 = 0;
                    }
                    else {
                      uVar5 = (undefined1)psVar40[0xe];
                    }
                    iVar29 = (int)sVar4;
                    if (1 < iVar29) {
                      uVar7 = FUN_00266e60(iVar30,uVar7,iVar29 + -1,local_d0 + 1);
                      puVar33[10] = uVar7;
                      if (*(char *)(iVar30 + 0x36) != '\0') break;
                    }
                    puVar32 = (undefined4 *)(uVar7 + local_d0 * 0x40 + 0x30);
                    local_c0 = psVar41;
                    for (local_cc = (int *)0x0; (int)local_cc < iVar29;
                        local_cc = (int *)((int)local_cc + 1)) {
                      FUN_00260004(iVar30,*puVar32);
                      memcpy(puVar32 + -10,local_c0 + 4,0x40);
                      puVar32 = puVar32 + 0x10;
                      memset(psVar41 + (int)local_cc * 0x20 + 4,0,0x40);
                      local_c0 = local_c0 + 0x20;
                    }
                    *(undefined1 *)(uVar7 + local_d0 * 0x40 + 0x24) = uVar5;
                    piVar6 = (int *)*puVar33;
                    for (local_d8 = 0; local_d8 < *piVar6; local_d8 = local_d8 + 1) {
                      iVar29 = piVar6[2] + local_d8 * 0x14;
                      if ((*(int *)(iVar29 + 4) == 0) && (*(int *)(iVar29 + 8) != 0)) {
                        uVar9 = FUN_0025f25a(iVar30);
                        *(undefined4 *)(iVar29 + 4) = uVar9;
                      }
                    }
                    FUN_00261336(iVar30,*puVar33,uVar10,*(undefined4 *)psVar38);
                    if (local_c8 != 0) {
                      FUN_00261336(iVar30,puVar33[0xc],uVar10,*(undefined4 *)psVar38);
                      uVar7 = FUN_002612ac(iVar30,puVar33[0xd],uVar10,*(undefined4 *)psVar38);
                      puVar33[0xd] = uVar7;
                    }
                    if (*(uint *)(psVar38 + 0x1c) == 0) {
                      if (puVar33[0xe] != 0) {
                        FUN_00261336(iVar30,puVar33[0xe],uVar10,*(undefined4 *)psVar38);
                      }
                    }
                    else {
                      puVar33[0xe] = *(uint *)(psVar38 + 0x1c);
                      psVar38[0x1c] = 0;
                      psVar38[0x1d] = 0;
                    }
                    uVar7 = *(uint *)(psVar38 + 0x16);
                    if (uVar7 != 0) {
                      uVar7 = FUN_002606fc(iVar30,uVar7,0);
                    }
                    uVar18 = puVar33[0xb];
                    if (iVar42 < 0) {
                      puVar33[0xd] = uVar18;
                      puVar33[0xb] = uVar7;
                      uVar7 = FUN_002612ac(iVar30,uVar18,uVar10,*(undefined4 *)psVar38);
                      puVar33[0xd] = uVar7;
                      uVar9 = FUN_002606fc(iVar30,*(undefined4 *)(psVar38 + 0x1a),0);
                      uVar7 = FUN_00262684(iVar30,uVar7,uVar9);
                      puVar33[0xd] = uVar7;
                      uVar7 = FUN_002604c0(iVar30,*(undefined4 *)(psVar38 + 0x18),0);
                      puVar33[0xc] = uVar7;
                    }
                    else {
                      uVar18 = FUN_002612ac(iVar30,uVar18,uVar10,*(undefined4 *)psVar38);
                      puVar33[0xb] = uVar18;
                      uVar7 = FUN_00262684(iVar30,uVar18,uVar7);
                      puVar33[0xb] = uVar7;
                    }
                    *(ushort *)((int)puVar33 + 6) = *(ushort *)((int)puVar33 + 6) | psVar38[3] & 1U;
                    if (*(uint *)(psVar38 + 0x24) != 0) {
                      puVar33[0x12] = *(uint *)(psVar38 + 0x24);
                      psVar38[0x24] = 0;
                      psVar38[0x25] = 0;
                    }
                    puVar33 = (uint *)puVar33[0xf];
                    psVar38 = *(short **)(psVar38 + 0x1e);
                  } while (puVar33 != (uint *)0x0);
                  FUN_00261092(iVar30,psVar31);
                  FUN_0027747a();
                }
                else if ((((puVar32[0xe] == 0) && (local_c8 == 0)) && ((uVar20 & 1) == 0)) &&
                        (puVar22 = puVar32, *psVar31 == 1)) {
                  do {
                    if (puVar22 == (undefined4 *)0x0) {
                      if (piVar6 == (int *)0x0) goto LAB_002763bc;
                      iVar8 = 0;
                      iVar23 = 0;
                      goto LAB_002763b8;
                    }
                  } while (((((*(ushort *)((int)puVar22 + 6) & 5) == 0) &&
                            (((undefined4 *)puVar22[0xf] == (undefined4 *)0x0 ||
                             (*(char *)(puVar22 + 1) == 'q')))) && (0 < *(short *)puVar22[10])) &&
                          (piVar34 = (int *)*puVar22, puVar22 = (undefined4 *)puVar22[0xf],
                          *(int *)*puVar32 == *piVar34));
                }
              }
            }
          }
        }
LAB_0027666a:
        iVar29 = local_dc[0x13];
        local_dc[0x13] = iVar29 + 1;
        *(int *)(psVar38 + 0xc) = iVar29 + 1;
        iVar29 = FUN_0026641e(iVar21,7,0);
        *(int *)(psVar38 + 10) = iVar29 + 1;
        iVar30 = 0;
        if ((char)psVar38[0xf] == '\0') {
          iVar30 = FUN_002665e6(local_dc);
        }
        psStack_5c = *(short **)(psVar38 + 0x10);
        piStack_60 = (int *)CONCAT22(piStack_60._2_2_,9);
        uStack_58 = 0;
        puStack_54 = (undefined1 *)0x0;
        *(char *)((int)psVar38 + 0x1f) = (char)local_dc[0x7a];
        FUN_00276118(local_dc,local_cc);
        iVar42 = *(int *)(psVar38 + 6);
        uVar10 = __fixunsdfsi(*(undefined4 *)((int)local_cc + 0x20),
                              *(undefined4 *)((int)local_cc + 0x24));
        *(undefined4 *)(iVar42 + 0x18) = uVar10;
        if (iVar30 != 0) {
          FUN_002624c2(iVar21,iVar30);
        }
        uVar10 = FUN_002665da(iVar21,3,*(undefined4 *)(psVar38 + 0xc));
        FUN_0025c394(iVar21,iVar29,uVar10);
        *(undefined1 *)((int)local_dc + 0x13) = 0;
        local_dc[0xf] = 0;
        uVar7 = (uint)*(byte *)(iVar39 + 0x36);
        if (uVar7 != 0) {
          FUN_00277442();
        }
        iVar29 = local_dc[0x78];
        local_78 = uVar7;
        FUN_0025c94a(param_2,&local_78);
        local_dc[0x78] = iVar29 - local_78;
        local_a0 = (short *)param_2[10];
        if (4 < *param_3) {
          local_80 = (int *)param_2[0xe];
        }
      }
      else {
        FUN_0026641e(iVar21,2,*(undefined4 *)(psVar38 + 0xc));
      }
    }
  }
  piVar43 = (int *)*param_2;
  piVar11 = (int *)param_2[0xc];
  uVar7 = param_2[0xb];
  uVar18 = param_2[0xd];
  uVar20 = *(ushort *)((int)param_2 + 6);
  piStack_7c = piVar11;
  if (piVar34 != (int *)0x0) {
    if (param_2[0x11] == 0) {
      iVar29 = 0;
      puVar33 = (uint *)0x0;
      puVar25 = param_2;
      do {
        puVar1 = puVar25 + 0xf;
        puVar25[0x11] = (uint)param_2;
        puVar25[0x10] = (uint)puVar33;
        iVar29 = iVar29 + 1;
        puVar33 = puVar25;
        puVar25 = (uint *)*puVar1;
      } while ((uint *)*puVar1 != (uint *)0x0);
      if ((*(int *)(iVar39 + 0x5c) < iVar29) && (*(int *)(iVar39 + 0x5c) != 0)) {
        FUN_00268e48(local_dc,DAT_00276ab0 + 0x2767a0);
        FUN_00277444();
      }
    }
    FUN_0027b444(local_dc,param_2,param_3);
    local_dc[0x79] = (int)piVar28;
    piVar11 = (int *)FUN_00277474();
    piVar34 = piVar28;
  }
  iVar29 = FUN_002631c8(piVar11,local_80);
  if ((iVar29 == 0) && (-1 < *(int *)(iVar39 + 0x18) << 0x1a)) {
    local_80 = piVar34;
  }
  if (((uVar20 & 5) == 1) && (iVar29 = FUN_002631c8(local_80,piVar43), iVar29 == 0)) {
    *(ushort *)((int)param_2 + 6) = uVar20 & 0xfffe;
    piStack_7c = (int *)FUN_002604c0(iVar39,piVar43,0);
    param_2[0xc] = (uint)piStack_7c;
    local_80 = (int *)0x0;
  }
  if (local_80 == (int *)0x0) {
    local_d0 = 0xffffffff;
  }
  else {
    uVar10 = FUN_0026d2ac(local_dc);
    iVar29 = local_dc[0x12];
    local_80[1] = iVar29;
    local_dc[0x12] = iVar29 + 1;
    local_d0 = FUN_002662da(iVar21,0x2a,local_80[1],*local_80 + 2,0,uVar10,0xfffffff0);
    param_2[6] = local_d0;
  }
  if (*param_3 == 9) {
    FUN_0026641e(iVar21,0x2a,*(undefined4 *)(param_3 + 4),*piVar43);
  }
  uVar10 = FUN_00266020(iVar21);
  uVar24 = DAT_00276aa4;
  param_2[8] = DAT_00276aa0;
  param_2[9] = uVar24;
  FUN_00278c6c(local_dc,param_2,uVar10);
  if ((-1 < (int)local_d0) && (param_2[2] == 0)) {
    puVar12 = (undefined1 *)FUN_0025c3cc(iVar21,local_d0);
    *puVar12 = 0x2b;
    *(ushort *)((int)param_2 + 6) = *(ushort *)((int)param_2 + 6) | 0x40;
  }
  if ((int)((uint)*(ushort *)((int)param_2 + 6) << 0x1f) < 0) {
    iVar29 = local_dc[0x12];
    local_dc[0x12] = iVar29 + 1;
    uVar9 = FUN_0026d2ac(local_dc,*param_2);
    local_d4 = (int *)FUN_002662da(iVar21,0x2a,iVar29,0,0,uVar9,0xfffffff0);
    FUN_0025c3b8(iVar21,8);
    local_dc = (int *)iVar29;
  }
  else {
    local_d4 = (int *)0xffffffff;
    local_dc = (int *)0xffffffff;
  }
  uVar24 = DAT_00276dd4;
  uVar44 = uVar20 & 1;
  if ((local_c8 == 0) && (piStack_7c == (int *)0x0)) {
    if ((uVar20 & 1) != 0) {
      uVar44 = *param_2;
    }
    iVar29 = FUN_00279b98(piVar6,local_a0,uVar7,&local_80,uVar44,0,0);
    iVar39 = iVar29;
    if (iVar29 == 0) {
      iVar39 = FUN_00277446();
    }
    uVar18 = *(uint *)(iVar39 + 0x34);
    uVar7 = *(uint *)(iVar39 + 0x30);
    iVar39 = __aeabi_dcmplt(uVar7,uVar18,param_2[8],param_2[9]);
    if (iVar39 != 0) {
      param_2[8] = uVar7;
      param_2[9] = uVar18;
    }
    if ((-1 < (int)local_d0) && (local_80 == (int *)0x0)) {
      FUN_00263806(iVar21,local_d0);
      param_2[6] = 0xffffffff;
    }
    cVar2 = *(char *)(iVar29 + 8);
    if (cVar2 != '\0') {
      puVar12 = (undefined1 *)FUN_0025c3cc(iVar21,local_d4);
      if (cVar2 == '\x02') {
        iVar30 = piVar6[0x13];
        iVar42 = iVar30 + 1;
        piVar6[0x13] = iVar42;
        iVar8 = iVar30 + 2;
        iVar23 = iVar8 + *piVar43;
        piVar6[0x13] = iVar42 + *piVar43 * 2;
        *puVar12 = 7;
        *(undefined4 *)(puVar12 + 4) = 1;
        *(int *)(puVar12 + 8) = iVar42;
        FUN_00278300(piVar6,piVar43,iVar8);
        iVar39 = *(int *)(iVar21 + 0x1c) + 1 + *piVar43;
        FUN_0026641e(iVar21,0x1b,iVar42,iVar39 + 1);
        for (iVar17 = 0; iVar17 < *piVar43; iVar17 = iVar17 + 1) {
          uVar9 = FUN_0026cf38(piVar6,*(undefined4 *)(iVar17 * 0x14 + piVar43[2]));
          FUN_00266266(iVar21,0x4b,iVar30 + 2 + iVar17,iVar39 + 2,iVar17 + iVar23);
          FUN_00263832(iVar21,0xffffffff,uVar9,0xfffffffc);
          FUN_0025c3b8(iVar21,0x80);
        }
        FUN_0026641e(iVar21,1,0,*(undefined4 *)(iVar29 + 0x14));
        FUN_0026641e(iVar21,7,0,iVar42);
        FUN_00266266(iVar21,0xd,iVar8,iVar23,*piVar43);
      }
      else {
        *puVar12 = 0x95;
      }
      local_dc = (int *)0xffffffff;
    }
    FUN_00278436(piVar6,param_2,piVar43,0,0,local_80,local_dc,param_3,*(undefined4 *)(iVar29 + 0x14)
                 ,*(undefined4 *)(iVar29 + 0x18));
    FUN_0026663a(iVar29);
    goto LAB_002771c8;
  }
  if (piStack_7c == (int *)0x0) {
    param_2[8] = DAT_00276dd0;
    param_2[9] = uVar24;
  }
  else {
    iVar30 = ((int *)*param_2)[2];
    for (iVar29 = *(int *)*param_2; 0 < iVar29; iVar29 = iVar29 + -1) {
      *(undefined2 *)(iVar30 + 0x10) = 0;
      iVar30 = iVar30 + 0x14;
    }
    iVar30 = piStack_7c[2];
    for (iVar29 = *piStack_7c; 0 < iVar29; iVar29 = iVar29 + -1) {
      *(undefined2 *)(iVar30 + 0x10) = 0;
      iVar30 = iVar30 + 0x14;
    }
    iVar29 = __aeabi_dcmpgt(param_2[8],param_2[9],DAT_00276aa8,DAT_00276aac);
    uVar24 = DAT_00276aac;
    if (iVar29 != 0) {
      param_2[8] = DAT_00276aa8;
      param_2[9] = uVar24;
    }
  }
  uVar9 = FUN_00266020(iVar21);
  memset(&piStack_60,0,0x20);
  puStack_54 = &uStack_40;
  piStack_60 = piVar6;
  psStack_5c = local_a0;
  piStack_34 = piStack_7c;
  if (piStack_7c != (int *)0x0) {
    piStack_34 = (int *)(*piStack_7c + 1);
  }
  piStack_30 = piStack_7c;
  FUN_0025df00(&piStack_60,piVar43);
  FUN_0025df00(&piStack_60,local_80);
  if (uVar18 != 0) {
    memset(&iStack_74,0,0x14);
    iStack_74 = DAT_00276dd8 + 0x276b12;
    iStack_70 = DAT_00276ddc + 0x276b1a;
    ppiStack_64 = &piStack_60;
    FUN_0025c882(&iStack_74,uVar18);
  }
  iStack_24 = iStack_28;
  for (iVar29 = 0; iVar29 < iStack_1c; iVar29 = iVar29 + 1) {
    bStack_44 = bStack_44 | 8;
    FUN_0025df00(&piStack_60,*(undefined4 *)(*(int *)(iVar29 * 0x10 + iStack_20) + 0x10));
    bStack_44 = bStack_44 & 0xf7;
  }
  cVar2 = *(char *)(iVar39 + 0x36);
  if (cVar2 != '\0') {
    FUN_00277446();
  }
  if (piStack_7c == (int *)0x0) {
    piVar28 = (int *)*param_2;
    if ((((param_2[0xb] == 0) && (*piVar28 == 1)) && (psVar38 = (short *)param_2[10], *psVar38 == 1)
        ) && (*(int *)(psVar38 + 0xc) == 0)) {
      puVar32 = *(undefined4 **)(psVar38 + 10);
      if ((((int)((uint)*(byte *)((int)puVar32 + 0x22) << 0x1b) < 0) ||
          (**(char **)piVar28[2] != -0x67)) ||
         ((iStack_1c == 0 ||
          (((*(byte *)(*(int *)(iStack_20 + 4) + 3) & 0x10) == 0 ||
           (uVar20 = *(ushort *)(*(char **)piVar28[2] + 2), piVar34 = (int *)(uVar20 & 0x10),
           (uVar20 & 0x10) != 0)))))) goto LAB_002770bc;
      uVar16 = FUN_0025d12c(*piVar6,puVar32[0x11]);
      iVar29 = piVar6[0x12];
      piVar6[0x12] = iVar29 + 1;
      local_d8 = puVar32[5];
      FUN_00275ec4(piVar6,uVar16);
      FUN_00265f96(piVar6,uVar16,puVar32[5],piVar34,*puVar32);
      for (piVar28 = (int *)puVar32[4]; piVar28 != (int *)0x0; piVar28 = (int *)piVar28[5]) {
        if ((*(char *)((int)piVar28 + 0x2e) == '\0') &&
           ((piVar34 == (int *)0x0 || (piVar28[9] < piVar34[9])))) {
          piVar34 = piVar28;
        }
      }
      local_e8 = piVar34;
      if ((piVar34 != (int *)0x0) && (local_e8 = piVar28, piVar34[9] < (int)puVar32[2])) {
        local_d8 = piVar34[10];
        local_e8 = (int *)FUN_0026e770(piVar6,piVar34);
      }
      FUN_00266266(iVar21,0x27,iVar29,local_d8,uVar16);
      if (local_e8 != (int *)0x0) {
        FUN_00263832(iVar21,0xffffffff,local_e8,0xfffffff0);
      }
      FUN_0026641e(iVar21,0x20,iVar29,*(undefined4 *)(iStack_20 + 8));
      FUN_002665da(iVar21,0x2d,iVar29);
      local_e8 = (int *)0x0;
      if ((char)piVar6[0x75] == '\x02') {
        if (piVar34 == (int *)0x0) {
          iVar30 = DAT_002773cc + 0x27708c;
          iVar29 = iVar30;
        }
        else {
          iVar30 = DAT_002773c8 + 0x277086;
          iVar29 = *piVar34;
        }
        uVar16 = FUN_0026877c(*piVar6,DAT_002773d0 + 0x277096,*puVar32,iVar30,iVar29,puVar32[6]);
        FUN_002662da(piVar6[2],0x96,piVar6[0x79],0,0,uVar16,0xffffffff);
        local_e8 = (int *)0x0;
      }
    }
    else {
LAB_002770bc:
      local_78 = 0;
      if (((((*piVar28 == 1) && (pcVar37 = *(char **)piVar28[2], *pcVar37 == -0x67)) &&
           (-1 < (int)((uint)*(ushort *)(pcVar37 + 2) << 0x14))) &&
          ((piVar28 = *(int **)(pcVar37 + 0x10), piVar28 != (int *)0x0 && (*piVar28 == 1)))) &&
         (**(char **)piVar28[2] == -0x66)) {
        iVar29 = sqlite3_stricmp(*(undefined4 *)(pcVar37 + 4),DAT_002773d4 + 0x2770f4);
        if (iVar29 == 0) {
          iVar29 = 1;
        }
        else {
          iVar29 = 2;
          iVar30 = sqlite3_stricmp(*(undefined4 *)(pcVar37 + 4),DAT_002773d8 + 0x277106);
          if (iVar30 != 0) goto LAB_0027710e;
        }
        local_e8 = (int *)FUN_002604c0(iVar39,*(undefined4 *)(**(int **)(*param_2 + 8) + 0x10),0);
        local_78 = (uint)local_e8;
        if ((local_e8 != (int *)0x0) && (*(char *)(iVar39 + 0x36) == '\0')) {
          *(char *)(*(int *)((int)local_e8 + 8) + 0xc) = '\x01' - (iVar29 == 1);
          *(undefined1 *)**(undefined4 **)((int)local_e8 + 8) = 0x98;
        }
      }
      else {
LAB_0027710e:
        iVar29 = 0;
        local_e8 = (int *)0x0;
      }
      FUN_0026d31c(piVar6,&uStack_40);
      iVar30 = FUN_00279b98(piVar6,local_a0,uVar7,&local_78,0,iVar29,0);
      if (iVar30 == 0) {
        FUN_00261102(iVar39,local_e8);
        FUN_00277444();
        return;
      }
      FUN_00278d8a(piVar6,&uStack_40);
      if ((iVar29 != 0) && (local_78 == 0)) {
        FUN_0026641e(iVar21,1,0,*(undefined4 *)(iVar30 + 0x18));
      }
      FUN_0026663a(iVar30);
      FUN_0026638e(piVar6,&uStack_40);
    }
    local_80 = (int *)0x0;
    FUN_00278ac2(piVar6,uVar18,uVar9,8);
    FUN_00278436(piVar6,param_2,*param_2,0,0,0,0xffffffff,param_3,uVar9,uVar9);
    FUN_00261102(iVar39,local_e8);
  }
  else {
    iStack_3c = piVar6[0x12];
    piVar6[0x12] = iStack_3c + 1;
    uVar16 = FUN_0026d2ac(piVar6);
    uVar13 = FUN_002662da(iVar21,0x2b,iStack_3c,piStack_34,cVar2,uVar16,0xfffffff0);
    iVar23 = piVar6[0x13];
    iVar8 = iVar23 + 1;
    iVar39 = iVar23 + 2;
    iVar23 = iVar23 + 3;
    piVar6[0x13] = iVar23;
    uVar14 = FUN_00266020(iVar21);
    iVar17 = piVar6[0x13] + 1;
    piVar6[0x13] = iVar17;
    uVar15 = FUN_00266020(iVar21);
    iVar42 = piVar6[0x13] + 1;
    iVar30 = piVar6[0x13] + *piStack_7c;
    piVar6[0x13] = iVar30;
    iVar29 = iVar30 + 1;
    piVar6[0x13] = iVar30 + *piStack_7c;
    FUN_0026641e(iVar21,7,cVar2,iVar39);
    FUN_0026641e(iVar21,7,cVar2,iVar8);
    FUN_00266266(iVar21,10,cVar2,iVar42,iVar42 + *piStack_7c + -1);
    FUN_0026641e(iVar21,2,iVar17,uVar15);
    iVar30 = FUN_00279b98(piVar6,local_a0,uVar7,&piStack_7c,cVar2,cVar2,cVar2);
    if (iVar30 == 0) {
      FUN_00277446();
    }
    if (piStack_7c == (int *)0x0) {
      local_d4 = piStack_7c;
      local_e8 = piStack_7c;
      local_cc = piStack_7c;
      piStack_7c = (int *)param_2[0xc];
    }
    else {
      if ((uVar20 & 1) == 0) {
        iVar19 = DAT_00276de4 + 0x276c50;
      }
      else if ((*(ushort *)((int)param_2 + 6) & 1) == 0) {
        iVar19 = DAT_00276de8 + 0x276c56;
      }
      else {
        iVar19 = DAT_00276de0 + 0x276c4a;
      }
      if ((char)piVar6[0x75] == '\x02') {
        FUN_00268b58(piVar6,iVar19);
      }
      iVar26 = *piStack_7c;
      local_cc = (int *)(iVar26 + 1);
      iVar19 = iStack_2c;
      iVar36 = (int)local_cc;
      iVar45 = (int)local_cc;
      for (iVar27 = 0; iVar27 < iStack_28; iVar27 = iVar27 + 1) {
        if (iVar36 <= *(int *)(iVar19 + 0xc)) {
          iVar45 = iVar45 + 1;
          iVar36 = iVar36 + 1;
        }
        iVar19 = iVar19 + 0x18;
      }
      iVar19 = FUN_00262834(piVar6,iVar45);
      FUN_0025cb7c(piVar6);
      FUN_00278300(piVar6,piStack_7c,iVar19,0);
      FUN_0026641e(iVar21,0x37,iStack_3c,iVar19 + iVar26);
      for (iVar36 = 0; iVar36 < iStack_28; iVar36 = iVar36 + 1) {
        puVar32 = (undefined4 *)(iStack_2c + iVar36 * 0x18);
        if ((int)local_cc <= (int)puVar32[3]) {
          iVar27 = (int)local_cc + iVar19;
          iVar26 = FUN_0027074a(piVar6,*puVar32,puVar32[2],puVar32[1],iVar27,0);
          if (iVar27 != iVar26) {
            FUN_0026641e(iVar21,0xf,iVar26,iVar27);
          }
          local_cc = (int *)((int)local_cc + 1);
        }
      }
      uVar35 = FUN_002627dc(piVar6);
      FUN_00266266(iVar21,0x1f,iVar19,iVar45,uVar35);
      FUN_0026641e(iVar21,0x60,iStack_3c,uVar35);
      FUN_002627fe(piVar6,uVar35);
      FUN_0025cbb8(piVar6,iVar19,iVar45);
      FUN_0026663a(iVar30);
      local_e8 = (int *)piVar6[0x12];
      piVar6[0x12] = (int)local_e8 + 1;
      piStack_38 = local_e8;
      local_d4 = (int *)FUN_002627dc(piVar6);
      FUN_00266266(iVar21,0x2c,local_e8,local_d4,iVar45);
      FUN_0026641e(iVar21,0x46,iStack_3c,uVar9);
      uStack_3f = 1;
      FUN_0025cb7c(piVar6);
      local_cc = (int *)0x1;
    }
    uVar35 = *(undefined4 *)(iVar21 + 0x1c);
    FUN_0025cb7c(piVar6);
    if (local_cc != (int *)0x0) {
      FUN_0026641e(iVar21,0x3e,iStack_3c,local_d4);
    }
    iVar19 = iVar29;
    for (iVar36 = 0; iVar36 < *piStack_7c; iVar36 = iVar36 + 1) {
      if (local_cc == (int *)0x0) {
        uStack_40 = 1;
        FUN_002786f4(piVar6,*(undefined4 *)(iVar36 * 0x14 + piStack_7c[2]),iVar19);
      }
      else {
        FUN_00266266(iVar21,0x1d,local_e8,iVar36,iVar19);
        if (iVar36 == 0) {
          FUN_0025c3b8(iVar21,0x20);
        }
      }
      iVar19 = iVar19 + 1;
    }
    FUN_002662da(iVar21,0x18,iVar42,iVar29,*piStack_7c,uVar16,0xfffffffa);
    iVar36 = *(int *)(iVar21 + 0x1c);
    iVar19 = iVar36 + 1;
    FUN_00266266(iVar21,0x19,iVar19,0,iVar19);
    if (iVar29 != iVar42) {
      FUN_00266966(piVar6,iVar29,iVar42,*piStack_7c);
    }
    FUN_0026641e(iVar21,2,iVar23,uVar14);
    FUN_0026641e(iVar21,0x78,iVar39,uVar9);
    FUN_0026641e(iVar21,2,iVar17,uVar15);
    FUN_002624c2(iVar21,iVar36);
    FUN_00278d8a(piVar6,&uStack_40);
    FUN_0026641e(iVar21,7,1,iVar8);
    if (local_cc == (int *)0x0) {
      FUN_0026663a(iVar30);
      FUN_00263806(iVar21,uVar13);
    }
    else {
      FUN_0026641e(iVar21,0x51,iStack_3c,uVar35);
    }
    FUN_0026641e(iVar21,2,iVar23,uVar14);
    FUN_0026641e(iVar21,1,0,uVar9);
    uVar16 = *(undefined4 *)(iVar21 + 0x1c);
    FUN_0026641e(iVar21,7,1,iVar39);
    FUN_002665da(iVar21,3,iVar23);
    FUN_0025c384(iVar21,uVar14);
    iVar39 = *(int *)(iVar21 + 0x1c);
    FUN_0026641e(iVar21,0x78,iVar8,iVar39 + 2);
    FUN_002665da(iVar21,3,iVar23);
    iVar39 = iVar39 + 1;
    FUN_0026638e(piVar6,&uStack_40);
    FUN_00278ac2(piVar6,uVar18,iVar39,8);
    FUN_00278436(piVar6,param_2,*param_2,0,0,local_80,local_dc,param_3,iVar39,uVar16);
    FUN_002665da(iVar21,3,iVar23);
    FUN_0025c384(iVar21,uVar15);
    FUN_0026d31c(piVar6,&uStack_40);
    FUN_002665da(iVar21,3,iVar17);
  }
  FUN_0025c384(iVar21,uVar9);
LAB_002771c8:
  if ((-1 < (int)local_dc) && ((char)piVar6[0x75] == '\x02')) {
    FUN_00268b58(piVar6,DAT_002773dc + 0x2771e0);
  }
  if (local_80 != (int *)0x0) {
    if ((char)piVar6[0x75] == '\x02') {
      FUN_00268b58(piVar6,DAT_002773e0 + 0x2771fc);
    }
    iVar29 = *piVar43;
    uVar9 = FUN_00266020(iVar21);
    uVar16 = FUN_00266020(iVar21);
    piVar28 = (int *)param_2[0xe];
    bVar3 = *param_3;
    iVar30 = *(int *)(param_3 + 4);
    iVar42 = piVar28[1];
    iVar39 = FUN_002627dc(piVar6);
    bVar46 = bVar3 == 5;
    if (bVar46 || bVar3 == 10) {
      local_c8 = piVar6[0x12];
      piVar6[0x12] = local_c8 + 1;
      FUN_00266266(iVar21,0x2c,local_c8,iVar39,iVar29);
      local_dc = (int *)0x0;
    }
    else {
      local_dc = (int *)FUN_002627dc(piVar6);
      local_c8 = 0;
    }
    if ((int)((uint)*(ushort *)((int)param_2 + 6) << 0x19) < 0) {
      iVar8 = piVar6[0x12];
      iVar23 = piVar6[0x13] + 1;
      piVar6[0x13] = iVar23;
      piVar6[0x12] = iVar8 + 1;
      FUN_00266266(iVar21,0x2c,iVar8,iVar23,*piVar28 + 2);
      local_a8 = FUN_0026641e(iVar21,0x46,iVar42,uVar9);
      FUN_002665fc(iVar21,param_2,uVar16);
      FUN_0026641e(iVar21,0x3e,iVar42,iVar23);
      FUN_00266266(iVar21,0x1d,iVar8,*piVar28 + 1,iVar39);
      FUN_0025c3b8(iVar21,0x20);
    }
    else {
      local_a8 = FUN_0026641e(iVar21,0x47,iVar42,uVar9);
      FUN_002665fc(iVar21,param_2,uVar16);
      FUN_00266266(iVar21,0x1d,iVar42,*piVar28 + 1,iVar39);
    }
    local_a8 = local_a8 + 1;
    iVar8 = 0;
    switch(bVar3) {
    case 6:
      if (iVar39 != iVar30) {
        FUN_00266966(piVar6,iVar39,iVar30,1);
      }
      break;
    case 7:
      FUN_002662da(iVar21,0x1f,iVar39,1,local_dc,(int)param_2 + 5,1);
      FUN_0025cb14(piVar6,iVar39,1);
      FUN_0026641e(iVar21,0x61,iVar30,local_dc);
      break;
    case 8:
    case 9:
      FUN_0026641e(iVar21,0x38,iVar30,local_dc);
      FUN_00266266(iVar21,0x39,iVar30,iVar39,local_dc);
      FUN_0025c3b8(iVar21,8);
      break;
    default:
      for (; iVar8 < iVar29; iVar8 = iVar8 + 1) {
        FUN_00266266(iVar21,0x1d,local_c8,iVar8,iVar8 + *(int *)(param_3 + 8));
        if (iVar8 == 0) {
          FUN_0025c3b8(iVar21,0x20);
        }
      }
      if (bVar46) {
        FUN_0026641e(iVar21,0x10,*(undefined4 *)(param_3 + 8),iVar29);
        FUN_0025cb14(piVar6,*(undefined4 *)(param_3 + 8),iVar29);
      }
      else {
        FUN_002665da(iVar21,4,*(undefined4 *)(param_3 + 4));
      }
    }
    FUN_002627fe(piVar6,iVar39);
    FUN_002627fe(piVar6,local_dc);
    FUN_0025c384(iVar21,uVar16);
    uVar16 = 0x51;
    if (-1 < (int)((uint)*(ushort *)((int)param_2 + 6) << 0x19)) {
      uVar16 = 0x5f;
    }
    FUN_0026641e(iVar21,uVar16,iVar42,local_a8);
    FUN_0025c384(iVar21,uVar9);
    if (bVar46 || bVar3 == 10) {
      FUN_0026641e(iVar21,0x2d,local_c8,0);
    }
  }
  FUN_0025c384(iVar21,uVar10);
  FUN_00277446();
  return;
LAB_002763b8:
  if (*piVar6 <= iVar8) goto LAB_002763bc;
  iVar17 = piVar6[2] + iVar23;
  iVar23 = iVar23 + 0x14;
  if (*(short *)(iVar17 + 0xe) == 0) goto LAB_0027666a;
  iVar8 = iVar8 + 1;
  goto LAB_002763b8;
}


