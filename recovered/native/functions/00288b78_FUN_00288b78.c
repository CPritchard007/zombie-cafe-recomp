/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00288b78 FUN_00288b78 */

/* WARNING: Removing unreachable block (ram,0x002897f2) */
/* WARNING: Removing unreachable block (ram,0x00289582) */
/* WARNING: Removing unreachable block (ram,0x0028942a) */
/* WARNING: Removing unreachable block (ram,0x002894ba) */
/* WARNING: Removing unreachable block (ram,0x00289668) */
/* WARNING: Removing unreachable block (ram,0x0028992c) */

void FUN_00288b78(int *param_1,int param_2,undefined4 *param_3,undefined4 *param_4,int *param_5,
                 uint param_6)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  char *pcVar14;
  undefined4 uVar15;
  uint uVar16;
  uint extraout_r1;
  uint extraout_r1_00;
  int iVar17;
  int iVar18;
  int iVar19;
  int *piVar20;
  short *psVar21;
  int iVar22;
  byte bVar23;
  int iVar24;
  bool bVar25;
  bool bVar26;
  int local_c4;
  int *local_c0;
  int local_bc;
  undefined4 *local_b8;
  uint local_b4;
  int local_b0;
  int local_ac;
  int local_a0;
  undefined4 local_98;
  uint local_94;
  int local_90;
  int iStack_7c;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68;
  int local_50;
  int iStack_4c;
  undefined1 local_48;
  undefined1 local_47;
  int local_44;
  int local_40;
  undefined4 local_3c;
  int *local_38 [9];
  
  iVar1 = *param_1;
  memset(&local_48,0,0x10);
  uVar16 = 0;
  if (param_1[0x11] != 0) {
    FUN_002899f4();
    uVar16 = extraout_r1;
  }
  bVar23 = *(byte *)(iVar1 + 0x36);
  if (bVar23 != uVar16) {
    FUN_002899f4();
    uVar16 = extraout_r1_00;
  }
  iVar4 = param_2;
  if (*(uint *)(param_2 + 0xc) == uVar16) {
    FUN_002899f4();
  }
  puVar2 = (undefined4 *)FUN_00288584(param_1,iVar4);
  puVar3 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_002899f4();
  }
  iVar4 = FUN_0025d12c(iVar1,puVar3[0x11]);
  iVar5 = FUN_00268e90(param_1,0x12,*puVar2,(uint)bVar23,
                       *(undefined4 *)(iVar4 * 0x10 + *(int *)(iVar1 + 0x10)));
  if (iVar5 != 0) {
    FUN_002899f4();
  }
  iVar5 = FUN_002648b0(param_1,puVar2,0x69,iVar5,&local_50);
  iVar17 = puVar2[7];
  iVar6 = FUN_0026d134(param_1,puVar2);
  if (iVar6 != 0) {
    FUN_002899f4();
  }
  iVar6 = FUN_0026a6a0(param_1,puVar2,local_50);
  if (iVar6 != 0) {
    FUN_002899f4();
  }
  iVar7 = FUN_002662b8(param_1);
  iVar6 = iVar7;
  if (iVar7 == 0) {
    iVar6 = FUN_002899f4();
  }
  if (*(char *)((int)param_1 + 0x12) == '\0') {
    *(undefined1 *)(iVar6 + 0x5e) = 1;
  }
  FUN_00275f2c(param_1,iVar5 != 0 || param_4 != (undefined4 *)0x0,iVar4);
  if ((((param_5 == (int *)0x0) && (param_4 != (undefined4 *)0x0)) &&
      (iVar6 = FUN_00264860(param_1,puVar2), iVar6 == 0)) &&
     (-1 < (int)((uint)*(byte *)((int)puVar2 + 0x22) << 0x1b))) {
    local_b8 = (undefined4 *)param_6;
    if (((param_6 == 99) && (local_b8 = (undefined4 *)0x2, -1 < (int)puVar2[1])) &&
       (local_b8 = (undefined4 *)(uint)*(byte *)((int)puVar2 + 0x23), local_b8 == (undefined4 *)0x63
       )) {
      local_b8 = (undefined4 *)0x2;
    }
    psVar21 = (short *)param_4[10];
    if ((((*psVar21 == 1) && (*(int *)(psVar21 + 0xc) == 0)) &&
        ((((param_4[0xb] == 0 &&
           (((param_4[0xe] == 0 && (param_4[0xc] == 0)) && (param_4[0x12] == 0)))) &&
          ((param_4[0xf] == 0 && ((*(ushort *)((int)param_4 + 6) & 1) == 0)))) &&
         (*(int *)*param_4 == 1)))) &&
       (((**(char **)((int *)*param_4)[2] == 'q' &&
         (puVar3 = (undefined4 *)
                   FUN_00287f90(param_1,0,*(undefined4 *)(psVar21 + 6),*(undefined4 *)(psVar21 + 4))
         , puVar3 != (undefined4 *)0x0)) &&
        ((puVar3 != puVar2 &&
         ((((-1 < (int)((uint)*(byte *)((int)puVar3 + 0x22) << 0x1b) && (puVar3[7] == 0)) &&
           (puVar2[2] == puVar3[2])) && (puVar2[1] == puVar3[1])))))))) {
      for (local_c0 = (int *)0x0; (int)local_c0 < (int)puVar2[2];
          local_c0 = (int *)((int)local_c0 + 1)) {
        iVar6 = (int)local_c0 * 0x18;
        if (*(char *)(puVar2[3] + iVar6 + 0x16) != *(char *)(puVar3[3] + iVar6 + 0x16))
        goto LAB_002890d0;
        iVar24 = *(int *)(puVar3[3] + iVar6 + 0x10);
        if (*(int *)(puVar2[3] + iVar6 + 0x10) != 0) {
          if (iVar24 == 0) goto LAB_002890d0;
          iVar24 = sqlite3_stricmp();
        }
        if ((iVar24 != 0) ||
           ((*(char *)(puVar2[3] + iVar6 + 0x14) != '\0' &&
            (*(char *)(puVar3[3] + iVar6 + 0x14) == '\0')))) goto LAB_002890d0;
      }
      local_c4 = puVar2[4];
      local_c0 = (int *)0x0;
      for (; local_c4 != 0; local_c4 = *(int *)(local_c4 + 0x14)) {
        if (*(char *)(local_c4 + 0x2c) != '\0') {
          local_c0 = (int *)0x1;
        }
        iVar6 = puVar3[4];
        while( true ) {
          if (iVar6 == 0) goto LAB_002890d0;
          if (((*(int *)(local_c4 + 0x24) == *(int *)(iVar6 + 0x24)) &&
              (*(char *)(local_c4 + 0x2c) == *(char *)(iVar6 + 0x2c))) &&
             (iVar24 = FUN_00264a16(local_c4,iVar6), iVar24 != 0)) break;
          iVar6 = *(int *)(iVar6 + 0x14);
        }
      }
      if ((puVar2[0xb] == 0) || (iVar6 = FUN_002631c8(puVar3[0xb]), iVar6 == 0)) {
        iVar6 = *(int *)(*param_1 + 0x18);
        if (((-1 < iVar6 << 5) || (puVar2[9] == 0)) && (-1 < iVar6 << 0x13)) {
          uVar13 = FUN_0025d12c(*param_1,puVar3[0x11]);
          uVar15 = FUN_002662b8(param_1);
          FUN_00275ec4(param_1,uVar13);
          iVar24 = param_1[0x12];
          iVar12 = iVar24 + 1;
          param_1[0x12] = iVar24 + 2;
          iVar6 = FUN_0025efee(param_1,iVar4,puVar2);
          FUN_002663cc(param_1,iVar12,iVar4,puVar2,0x28);
          if (((((int)puVar2[1] < 0) && (puVar2[4] != 0)) || (local_c0 != (int *)0x0)) ||
             (1 < (int)local_b8 - 1U)) {
            uVar8 = FUN_0026641e(uVar15,0x48,iVar12,0);
            local_c0 = (int *)FUN_0026641e(uVar15,1,0,0);
            FUN_002624c2(uVar15,uVar8);
          }
          FUN_002663cc(param_1,iVar24,uVar13,puVar3,0x27);
          uVar8 = FUN_0026641e(uVar15,0x48,iVar24,0);
          uVar9 = FUN_002627dc(param_1);
          uVar10 = FUN_002627dc(param_1);
          if ((int)puVar2[1] < 0) {
            if (puVar2[4] == 0) {
              uVar11 = 0x38;
              iVar6 = iVar12;
            }
            else {
              uVar11 = 0x41;
              iVar6 = iVar24;
            }
            local_a0 = FUN_0026641e(uVar15,uVar11,iVar6,uVar10);
          }
          else {
            local_a0 = FUN_0026641e(uVar15,0x41,iVar24,uVar10);
            uVar11 = FUN_00266266(uVar15,0x36,iVar12,0,uVar10);
            FUN_002662fa(param_1,local_b8,DAT_0028927c + 0x288f20,0xfffffffe);
            FUN_002624c2(uVar15,uVar11);
            if (0 < iVar6) {
              FUN_0026641e(param_1[2],0x77,iVar6,uVar10);
            }
          }
          FUN_0026641e(uVar15,0x40,iVar24,uVar9);
          FUN_00266266(uVar15,0x39,iVar12,uVar9,uVar10);
          FUN_0025c3b8(uVar15,0xb);
          FUN_00263832(uVar15,0xffffffff,*puVar2,0);
          FUN_0026641e(uVar15,0x5f,iVar24,local_a0);
          for (local_b8 = (undefined4 *)puVar2[4]; local_b8 != (undefined4 *)0x0;
              local_b8 = *(undefined4 **)((int)local_b8 + 0x14)) {
            iVar6 = puVar3[4];
            while ((iVar6 != 0 &&
                   (((*(int *)((int)local_b8 + 0x24) != *(int *)(iVar6 + 0x24) ||
                     (*(char *)((int)local_b8 + 0x2c) != *(char *)(iVar6 + 0x2c))) ||
                    (iVar18 = FUN_00264a16(local_b8,iVar6), iVar18 == 0))))) {
              iVar6 = *(int *)(iVar6 + 0x14);
            }
            FUN_0026641e(uVar15,0x2d,iVar24,0);
            FUN_0026641e(uVar15,0x2d,iVar12,0);
            uVar11 = FUN_0026e770(param_1,iVar6);
            FUN_002662da(uVar15,0x27,iVar24,*(undefined4 *)(iVar6 + 0x28),uVar13,uVar11,0xfffffff0);
            uVar11 = FUN_0026e770(param_1,local_b8);
            FUN_002662da(uVar15,0x28,iVar12,*(undefined4 *)((int)local_b8 + 0x28),iVar4,uVar11,
                         0xfffffff0);
            iVar6 = FUN_0026641e(uVar15,0x48,iVar24,0);
            FUN_0026641e(uVar15,0x3f,iVar24,uVar9);
            FUN_00266266(uVar15,0x61,iVar12,uVar9,1);
            FUN_0026641e(uVar15,0x5f,iVar24,iVar6 + 1);
            FUN_002624c2(uVar15,iVar6);
          }
          FUN_002624c2(uVar15,uVar8);
          FUN_002627fe(param_1,uVar10);
          FUN_002627fe(param_1,uVar9);
          FUN_0026641e(uVar15,0x2d,iVar24,0);
          FUN_0026641e(uVar15,0x2d,iVar12,0);
          if (local_c0 == (int *)0x0) {
            FUN_00289998();
          }
          FUN_0026641e(uVar15,6,0,0);
          FUN_002624c2(uVar15,local_c0);
          FUN_0026641e(uVar15,0x2d,iVar12,0);
        }
      }
    }
  }
LAB_002890d0:
  iVar6 = FUN_0025efee(param_1,iVar4,puVar2);
  if (param_4 == (undefined4 *)0x0) {
    memset(local_38,0,0x20);
    local_b8 = param_3;
    if (param_3 != (undefined4 *)0x0) {
      local_b8 = (undefined4 *)*param_3;
    }
    local_38[0] = param_1;
    for (iVar4 = 0; iVar4 < (int)local_b8; iVar4 = iVar4 + 1) {
      iVar24 = FUN_00269020(local_38,*(undefined4 *)(iVar4 * 0x14 + param_3[2]));
      if (iVar24 != 0) goto LAB_002899f0;
    }
    local_bc = 0;
    local_68 = 0;
  }
  else {
    local_bc = param_1[0x13] + 1;
    param_1[0x13] = local_bc;
    FUN_0026641e(iVar7,7,0);
    local_44 = param_1[0x13] + 1;
    param_1[0x13] = local_44;
    local_48 = 10;
    iVar12 = *(int *)(iVar7 + 0x1c);
    local_47 = 0;
    local_40 = 0;
    local_3c = 0;
    FUN_0026641e(iVar7,7,iVar12 + 1);
    uVar13 = FUN_0026641e(iVar7,1,0,0);
    iVar24 = FUN_00276118(param_1,param_4,&local_48);
    if (iVar24 != 0) {
      FUN_002899f4();
    }
    if (param_1[0x11] != 0) {
      FUN_002899f4();
    }
    if (*(char *)(iVar1 + 0x36) != '\0') {
      FUN_002899f4();
    }
    FUN_0026641e(iVar7,7,1,local_bc);
    FUN_002665da(iVar7,4,local_44);
    FUN_0026641e(iVar7,6,2,2);
    FUN_002624c2(iVar7,uVar13);
    local_68 = local_40;
    local_b8 = *(undefined4 **)*param_4;
    if (iVar5 != 0) {
      func_0x00289a20();
    }
    iVar24 = FUN_002662b8(param_1);
    iVar18 = *(int *)(iVar24 + 0x1c);
    local_b4 = iVar5;
    if ((int)((uint)*(byte *)((int)puVar2 + 0x22) << 0x1b) < 0) {
      local_b4 = FUN_0025d364(*param_1,puVar2);
    }
    for (iVar12 = iVar12 + 2; iVar12 < iVar18; iVar12 = iVar12 + 1) {
      pcVar14 = (char *)FUN_0025c3cc(iVar24,iVar12);
      if (*pcVar14 == '\'') {
        if (*(int *)(pcVar14 + 0xc) == iVar4) {
          iVar19 = *(int *)(pcVar14 + 8);
          if (iVar19 == puVar2[5]) {
            func_0x00289a20();
          }
          for (iVar22 = puVar2[4]; iVar22 != 0; iVar22 = *(int *)(iVar22 + 0x14)) {
            if (iVar19 == *(int *)(iVar22 + 0x28)) {
              func_0x00289a20();
            }
          }
        }
      }
      else if ((*pcVar14 == -0x79) && (*(int *)(pcVar14 + 0x10) == local_b4)) {
        func_0x00289a20();
      }
    }
  }
  uVar16 = *(byte *)((int)puVar2 + 0x22) & 0x10;
  if ((*(byte *)((int)puVar2 + 0x22) & 0x10) != 0) {
    iVar4 = 0;
    uVar16 = 0;
    for (iVar24 = 0; iVar24 < (int)puVar2[2]; iVar24 = iVar24 + 1) {
      iVar12 = puVar2[3] + iVar4;
      iVar4 = iVar4 + 0x18;
      uVar16 = uVar16 + (*(char *)(iVar12 + 0x17) != '\0');
    }
  }
  bVar25 = param_5 == (int *)0x0;
  if (((local_b8 != (undefined4 *)0x0) && (bVar25)) &&
     (local_b8 != (undefined4 *)(puVar2[2] - uVar16))) {
    FUN_00268e48(param_1,DAT_00289594 + 0x2892ba,param_2,0,(undefined4 *)(puVar2[2] - uVar16),
                 local_b8);
LAB_002899f0:
    local_c0 = (int *)0x0;
    goto code_r0x002899f4;
  }
  if (param_5 == (int *)0x0) {
    local_b4 = 0xffffffff;
  }
  else {
    iVar4 = 0;
    if (local_b8 != (undefined4 *)param_5[1]) {
      FUN_00268e48(param_1,DAT_00289598 + 0x2892de,local_b8);
LAB_00289374:
      FUN_002899f4();
      return;
    }
    for (; iVar4 < param_5[1]; iVar4 = iVar4 + 1) {
      *(undefined4 *)(*param_5 + iVar4 * 8 + 4) = 0xffffffff;
    }
    local_b4 = 0xffffffff;
    for (local_c0 = (int *)0x0; (int)local_c0 < param_5[1]; local_c0 = (int *)((int)local_c0 + 1)) {
      iVar4 = (int)local_c0 * 8;
      for (iVar24 = 0; iVar24 < (int)puVar2[2]; iVar24 = iVar24 + 1) {
        iVar12 = sqlite3_stricmp(*(undefined4 *)(*param_5 + iVar4),
                                 *(undefined4 *)(iVar24 * 0x18 + puVar2[3]));
        if (iVar12 == 0) {
          *(int *)(*param_5 + iVar4 + 4) = iVar24;
          if (iVar24 == puVar2[1]) {
            local_b4 = (uint)local_c0;
          }
          break;
        }
      }
      if ((int)puVar2[2] <= iVar24) {
        iVar24 = FUN_00264820(*(undefined4 *)(*param_5 + iVar4));
        if (iVar24 == 0) {
          FUN_00268e48(param_1,DAT_0028959c + 0x289368,param_2,0,*(undefined4 *)(*param_5 + iVar4));
          *(undefined1 *)((int)param_1 + 0x11) = 1;
          goto LAB_00289374;
        }
        local_b4 = (uint)local_c0;
      }
    }
  }
  if ((0 < (int)local_b8) && (bVar25)) {
    local_b4 = puVar2[1];
  }
  local_94 = *(uint *)(iVar1 + 0x18) & 0x1000;
  if (local_94 != 0) {
    local_94 = param_1[0x13] + 1;
    param_1[0x13] = local_94;
    FUN_0026641e(iVar7,7,0);
  }
  bVar26 = iVar17 != 0;
  if (bVar26) {
    local_c0 = (int *)0x0;
    local_b0 = 0;
  }
  else {
    local_b0 = param_1[0x12];
    iVar4 = 0;
    if (-1 < (int)((uint)*(byte *)((int)puVar2 + 0x22) << 0x1b)) {
      iVar4 = FUN_0026e7ea(param_1,puVar2,local_b0,0x28);
    }
    local_c0 = (int *)FUN_0025ee10(iVar1,(iVar4 + 1) * 4);
    if (local_c0 == (int *)0x0) {
      FUN_002899f4();
      return;
    }
    piVar20 = local_c0;
    for (iVar17 = 0; iVar17 < iVar4; iVar17 = iVar17 + 1) {
      iVar24 = param_1[0x13];
      param_1[0x13] = iVar24 + 1;
      *piVar20 = iVar24 + 1;
      piVar20 = piVar20 + 1;
    }
  }
  if (param_4 == (undefined4 *)0x0) {
    uStack_70 = 0;
    uStack_6c = 0;
  }
  else {
    uStack_6c = FUN_002665da(iVar7,4,local_44);
    uStack_70 = FUN_002665da(iVar7,0x1b,local_bc);
  }
  iVar24 = param_1[0x13];
  iVar4 = iVar24 + 1;
  iVar17 = iVar24 + puVar2[2] + 1;
  param_1[0x13] = iVar17;
  local_bc = iVar4;
  if ((int)((uint)*(byte *)((int)puVar2 + 0x22) << 0x1b) < 0) {
    local_bc = iVar24 + 2;
    param_1[0x13] = iVar17 + 1;
  }
  uVar13 = FUN_00266020(iVar7);
  if (local_50 << 0x1f < 0) {
    iVar17 = FUN_00262834(param_1,puVar2[2] + 1);
    if ((int)local_b4 < 0) {
      FUN_0026641e(iVar7,7,0xffffffff,iVar17);
    }
    else {
      FUN_002786f4(param_1,*(undefined4 *)(local_b4 * 0x14 + param_3[2]),iVar17);
      uVar15 = FUN_002665da(iVar7,0x4a,iVar17);
      FUN_0026641e(iVar7,7,0xffffffff,iVar17);
      FUN_002624c2(iVar7,uVar15);
      FUN_002665da(iVar7,0x15,iVar17);
    }
    iStack_7c = iVar17 + 1;
    for (local_a0 = 0; local_a0 < (int)puVar2[2]; local_a0 = local_a0 + 1) {
      iVar24 = local_a0;
      if (!bVar25) {
        iVar24 = 0;
        while ((iVar24 < param_5[1] && (*(int *)(*param_5 + iVar24 * 8 + 4) != local_a0))) {
          iVar24 = iVar24 + 1;
        }
      }
      if ((param_3 == (undefined4 *)0x0) || ((param_5 != (int *)0x0 && (param_5[1] <= iVar24)))) {
        FUN_002786f4(param_1,*(undefined4 *)(puVar2[3] + local_a0 * 0x18 + 4),iStack_7c);
      }
      else {
        pcVar14 = *(char **)(iVar24 * 0x14 + param_3[2]);
        iVar24 = param_1[2];
        uVar15 = FUN_002786f4(param_1,pcVar14,iStack_7c);
        if (*pcVar14 != -0x7c) {
          iVar12 = param_1[0x13] + 1;
          param_1[0x13] = iVar12;
          FUN_0026641e(iVar24,0xe,uVar15,iVar12);
          *(int *)(pcVar14 + 0x18) = iVar12;
          pcVar14[0x23] = *pcVar14;
          *pcVar14 = -0x7c;
        }
      }
      iStack_7c = iStack_7c + 1;
    }
    if (!bVar26) {
      FUN_0026641e(iVar7,0x1e,iVar17 + 1);
      FUN_00263920(iVar7,puVar2);
    }
    FUN_0028a2ac(param_1,iVar5,0x69,0,1,puVar2,(iVar17 - puVar2[2]) + -1,param_6,uVar13);
    FUN_0025cbb8(param_1,iVar17,puVar2[2] + 1);
  }
  if (!bVar26) {
    if ((int)((uint)*(byte *)((int)puVar2 + 0x22) << 0x1b) < 0) {
      FUN_0026641e(iVar7,10,0,iVar4);
    }
    if ((int)local_b4 < 0) {
      if ((int)((uint)*(byte *)((int)puVar2 + 0x22) << 0x1b) < 0) {
        FUN_0026641e(iVar7,10,0,local_bc);
        local_98 = 0;
      }
      else {
        FUN_00266266(iVar7,0x38,local_b0,local_bc,iVar6);
        local_98 = 1;
      }
    }
    else {
      if (param_4 == (undefined4 *)0x0) {
        FUN_002786f4(param_1,*(undefined4 *)(local_b4 * 0x14 + param_3[2]),local_bc);
        pcVar14 = (char *)FUN_0025c3cc(iVar7,0xffffffff);
        if (((pcVar14 != (char *)0x0) && (*pcVar14 == '\n')) &&
           (-1 < (int)((uint)*(byte *)((int)puVar2 + 0x22) << 0x1b))) {
          *pcVar14 = '8';
          *(int *)(pcVar14 + 4) = local_b0;
          *(int *)(pcVar14 + 0xc) = iVar6;
          *(int *)(pcVar14 + 8) = local_bc;
          local_98 = 1;
          goto LAB_0028974e;
        }
      }
      else {
        FUN_0026641e(iVar7,0xf,local_68 + local_b4,local_bc);
      }
      if ((int)((uint)*(byte *)((int)puVar2 + 0x22) << 0x1b) < 0) {
        FUN_0026641e(iVar7,0x49,local_bc,*(int *)(iVar7 + 0x1c) + 2);
      }
      else {
        uVar15 = FUN_002665da(iVar7,0x4a,local_bc);
        FUN_00266266(iVar7,0x38,local_b0,local_bc,iVar6);
        FUN_002624c2(iVar7,uVar15);
      }
      FUN_002665da(iVar7,0x15,local_bc);
      local_98 = 0;
    }
LAB_0028974e:
    if (0 < iVar6) {
      FUN_0026641e(param_1[2],0x77,iVar6,local_bc);
    }
    local_a0 = 0;
    local_90 = 0;
    for (local_ac = 0; local_ac < (int)puVar2[2]; local_ac = local_ac + 1) {
      iVar6 = local_bc + 1 + local_ac;
      if (local_ac == puVar2[1]) {
        uVar15 = 10;
        iVar17 = 0;
LAB_0028980e:
        FUN_0026641e(iVar7,uVar15,iVar17,iVar6);
      }
      else {
        if (bVar25) {
          iVar17 = local_ac - local_90;
          if (*(char *)(puVar2[3] + local_a0 + 0x17) != '\0') {
            local_90 = local_90 + 1;
            iVar17 = -1;
          }
        }
        else {
          iVar17 = 0;
          while ((iVar17 < param_5[1] && (*(int *)(*param_5 + iVar17 * 8 + 4) != local_ac))) {
            iVar17 = iVar17 + 1;
          }
        }
        if (((iVar17 < 0) || (local_b8 == (undefined4 *)0x0)) ||
           ((param_5 != (int *)0x0 && (param_5[1] <= iVar17)))) {
          uVar15 = *(undefined4 *)(puVar2[3] + local_a0 + 4);
        }
        else {
          if (param_4 != (undefined4 *)0x0) {
            uVar15 = 0xf;
            iVar17 = local_68 + iVar17;
            goto LAB_0028980e;
          }
          uVar15 = *(undefined4 *)(iVar17 * 0x14 + param_3[2]);
        }
        FUN_002786f4(param_1,uVar15,iVar6);
      }
      local_a0 = local_a0 + 0x18;
    }
    bVar23 = *(byte *)((int)puVar2 + 0x22) & 0x10;
    if ((*(byte *)((int)puVar2 + 0x22) & 0x10) == 0) {
      FUN_0028a7e0(param_1,puVar2,local_b0,iVar4,local_c0,~local_b4 >> 0x1f,bVar23,param_6,uVar13,
                   &iStack_4c);
      FUN_002888e0(param_1,puVar2,bVar23,iVar4);
      FUN_00266cf4(param_1,puVar2,local_b0,iVar4,local_c0,bVar23,local_98,iStack_4c == 0);
    }
    else {
      uVar15 = FUN_0025d364(iVar1,puVar2);
      FUN_002683ea(param_1,puVar2);
      FUN_002662da(iVar7,0x8c,1,puVar2[2] + 2,iVar4,uVar15,0xfffffff6);
      uVar16 = 2;
      if (param_6 != 99) {
        uVar16 = param_6 & 0xff;
      }
      FUN_0025c3b8(iVar7,uVar16);
      FUN_0025cdea(param_1);
    }
  }
  if ((*(uint *)(iVar1 + 0x18) & 0x1000) != 0) {
    FUN_0026641e(iVar7,0x14,local_94,1);
  }
  if (iVar5 != 0) {
    FUN_0028a2ac(param_1,iVar5,0x69,0,2,puVar2,(local_bc + -1) - puVar2[2],param_6,uVar13);
  }
  FUN_0025c384(iVar7,uVar13);
  if (param_4 != (undefined4 *)0x0) {
    FUN_0026641e(iVar7,1,0,uStack_6c);
    FUN_002624c2(iVar7,uStack_70);
  }
  if ((*(byte *)((int)puVar2 + 0x22) & 0x10) == 0 && !bVar26) {
    FUN_002665da(iVar7,0x2d,local_b0);
    for (iVar4 = puVar2[4]; local_b0 = local_b0 + 1, iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x14)) {
      FUN_002665da(iVar7,0x2d,local_b0);
    }
  }
  if ((*(char *)((int)param_1 + 0x12) == '\0') && (param_1[0x6d] == 0)) {
    FUN_00266be6(param_1);
  }
  if (((*(int *)(iVar1 + 0x18) << 0x13 < 0) && (*(char *)((int)param_1 + 0x12) == '\0')) &&
     (param_1[0x6d] == 0)) {
    FUN_0026641e(iVar7,0x10,local_94,1);
    FUN_00263b94(iVar7,1);
    FUN_00265916(iVar7,0,0,iRam00289ab4 + 0x2899e8,0);
    FUN_002899f4();
    return;
  }
code_r0x002899f4:
  FUN_00260fde(iVar1,param_2);
  FUN_00261102(iVar1,param_3);
  FUN_00261092(iVar1,param_4);
  FUN_00260004(iVar1,param_5);
  FUN_0025fbda(iVar1,local_c0);
  return;
}


