/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0028ad28 FUN_0028ad28 */

void FUN_0028ad28(int *param_1,int param_2,int *param_3,undefined4 param_4,uint param_5)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  bool bVar24;
  int local_c8;
  int local_c4;
  int *local_bc;
  undefined4 local_b4;
  uint local_b0;
  int local_ac;
  int local_a8;
  uint local_a4;
  int *local_9c;
  int local_88;
  int *local_78;
  int *local_60;
  uint local_54;
  int local_50;
  int *local_4c;
  undefined1 local_48;
  undefined1 local_47;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int *local_38;
  int local_34;
  
  iVar23 = *param_1;
  local_50 = 0;
  local_4c = (int *)0x0;
  if (param_1[0x11] != 0) {
    FUN_0028b6dc();
  }
  if (*(char *)(iVar23 + 0x36) != '\0') {
    FUN_0028b6ec();
  }
  piVar3 = (int *)FUN_00288584();
  if (piVar3 == (int *)0x0) {
    FUN_0028b6e2();
  }
  iVar4 = FUN_0025d12c(*param_1,piVar3[0x11]);
  iVar5 = FUN_002648b0(param_1,piVar3,0x6b,param_3,&local_54);
  iVar6 = piVar3[7];
  iVar7 = FUN_0026d134(param_1,piVar3);
  if (iVar7 != 0) {
    FUN_0028b6e6();
  }
  iVar7 = FUN_0026a6a0(param_1,piVar3,local_54);
  if (iVar7 != 0) {
    FUN_0028b6ec();
  }
  piVar8 = (int *)FUN_0025ee10(iVar23,piVar3[2] << 2);
  piVar9 = piVar8;
  local_78 = piVar8;
  if (piVar8 == (int *)0x0) {
    piVar9 = (int *)FUN_0028b6f6();
    local_78 = piVar9;
  }
  for (; iVar7 < piVar3[2]; iVar7 = iVar7 + 1) {
    *piVar9 = -1;
    piVar9 = piVar9 + 1;
  }
  iVar7 = param_1[0x12];
  *(int *)(param_2 + 0x28) = iVar7;
  iVar14 = iVar7 + 1;
  param_1[0x12] = iVar14;
  for (iVar20 = piVar3[4]; iVar20 != 0; iVar20 = *(int *)(iVar20 + 0x14)) {
    param_1[0x12] = param_1[0x12] + 1;
  }
  memset(&local_38,0,0x20);
  local_c4 = 0;
  local_ac = 0;
  local_38 = param_1;
  local_34 = param_2;
  for (local_c8 = 0; local_c8 < *param_3; local_c8 = local_c8 + 1) {
    iVar20 = local_c8 * 0x14;
    piVar9 = (int *)FUN_00269020(&local_38,*(undefined4 *)(param_3[2] + iVar20));
    if (piVar9 != (int *)0x0) {
      piVar9 = (int *)FUN_0028b6f2();
    }
    for (; (int)piVar9 < piVar3[2]; piVar9 = (int *)((int)piVar9 + 1)) {
      iVar15 = sqlite3_stricmp(*(undefined4 *)((int)piVar9 * 0x18 + piVar3[3]),
                               *(undefined4 *)(param_3[2] + iVar20 + 4));
      if (iVar15 == 0) {
        if (piVar9 == (int *)piVar3[1]) {
          local_ac = 1;
          local_c4 = *(int *)(param_3[2] + iVar20);
        }
        piVar8[(int)piVar9] = local_c8;
        break;
      }
    }
    if (piVar3[2] <= (int)piVar9) {
      iVar15 = FUN_00264820(*(undefined4 *)(param_3[2] + iVar20 + 4));
      if (iVar15 == 0) {
        FUN_00268e48(param_1,DAT_0028b140 + 0x28ae96,*(undefined4 *)(param_3[2] + iVar20 + 4));
        *(undefined1 *)((int)param_1 + 0x11) = 1;
        FUN_0028b6f6();
        piVar9 = param_1;
      }
      else {
        local_c4 = *(int *)(param_3[2] + iVar20);
        local_ac = 1;
      }
    }
    iVar20 = FUN_00268e90(param_1,0x17,*piVar3,*(undefined4 *)((int)piVar9 * 0x18 + piVar3[3]),
                          *(undefined4 *)(*(int *)(iVar23 + 0x10) + iVar4 * 0x10));
    if (iVar20 == 1) {
      iVar20 = FUN_0028b6f2();
    }
    if (iVar20 == 2) {
      piVar8[(int)piVar9] = -1;
    }
  }
  iVar20 = FUN_00264918(param_1,piVar3,piVar8,local_ac);
  iVar15 = 0;
  for (iVar19 = piVar3[4]; iVar19 != 0; iVar19 = *(int *)(iVar19 + 0x14)) {
    iVar15 = iVar15 + 1;
  }
  if (iVar15 == 0) {
    local_bc = (int *)0x0;
  }
  else {
    local_bc = (int *)FUN_0025ee10(iVar23,iVar15 << 2);
    if (local_bc == (int *)0x0) {
      FUN_0028b6f6();
      return;
    }
  }
  piVar9 = local_bc;
  for (iVar15 = piVar3[4]; iVar15 != 0; iVar15 = *(int *)(iVar15 + 0x14)) {
    if (local_ac == 0 && iVar20 == 0) {
      for (iVar19 = 0; iVar19 < *(int *)(iVar15 + 0x24); iVar19 = iVar19 + 1) {
        if (-1 < piVar8[*(int *)(iVar19 * 4 + *(int *)(iVar15 + 4))]) goto LAB_0028af40;
      }
      iVar19 = 0;
    }
    else {
LAB_0028af40:
      iVar19 = param_1[0x13] + 1;
      param_1[0x13] = iVar19;
    }
    *piVar9 = iVar19;
    piVar9 = piVar9 + 1;
  }
  iVar15 = FUN_002662b8(param_1);
  if (iVar15 == 0) {
    FUN_0028b6f6();
    return;
  }
  if (*(char *)((int)param_1 + 0x12) == '\0') {
    *(undefined1 *)(iVar15 + 0x5e) = 1;
  }
  FUN_00275f2c(param_1,1,iVar4);
  if ((int)((uint)*(byte *)((int)piVar3 + 0x22) << 0x1b) < 0) {
    iVar23 = *param_1;
    iVar4 = param_1[2];
    uVar12 = FUN_0025d364(iVar23,piVar3);
    uVar10 = FUN_0025f1ba(iVar23,0x1a,DAT_0028b144 + 0x28afa0);
    local_c8 = FUN_00267228(param_1,0,uVar10);
    if (local_c4 != 0) {
      uVar10 = FUN_002606fc(iVar23,local_c4,0);
      local_c8 = FUN_00267228(param_1,local_c8,uVar10);
    }
    for (iVar5 = 0; iVar5 < piVar3[2]; iVar5 = iVar5 + 1) {
      iVar6 = *local_78;
      local_78 = local_78 + 1;
      if (iVar6 < 0) {
        uVar10 = FUN_0025f1ba(iVar23,0x1a,*(undefined4 *)(iVar5 * 0x18 + piVar3[3]));
      }
      else {
        uVar10 = FUN_002606fc(iVar23,*(undefined4 *)(iVar6 * 0x14 + param_3[2]),0);
      }
      local_c8 = FUN_00267228(param_1,local_c8,uVar10);
    }
    iVar15 = 0;
    uVar10 = FUN_002672e8(param_1,local_c8,param_2,param_4,0,0,0,0,0,0);
    iVar20 = param_1[0x12];
    param_1[0x12] = iVar20 + 1;
    uVar16 = (uint)(local_c4 != 0);
    FUN_0026641e(iVar4,0x2a,iVar20,piVar3[2] + 1 + uVar16);
    FUN_0025c3b8(iVar4,8);
    local_48 = 8;
    local_47 = 0;
    local_40 = 0;
    local_3c = 0;
    local_44 = iVar20;
    FUN_00276118(param_1,uVar10);
    iVar6 = param_1[0x13];
    iVar7 = iVar6 + 1;
    param_1[0x13] = iVar7;
    param_1[0x13] = iVar7 + piVar3[2] + 1;
    iVar14 = FUN_0026641e(iVar4,0x48,iVar20,0);
    FUN_00266266(iVar4,0x1d,iVar20,0,iVar7);
    iVar6 = iVar6 + 2;
    uVar17 = uVar16;
    iVar5 = iVar6;
    while (FUN_00266266(iVar4,0x1d,iVar20,uVar17,iVar5), iVar15 < piVar3[2]) {
      iVar15 = iVar15 + 1;
      iVar5 = iVar6 + iVar15;
      uVar17 = iVar15 + uVar16;
    }
    FUN_002683ea(param_1,piVar3);
    FUN_002662da(iVar4,0x8c,0,piVar3[2] + 2,iVar7,uVar12,0xfffffff6);
    uVar16 = 2;
    if (param_5 != 99) {
      uVar16 = param_5 & 0xff;
    }
    FUN_0025c3b8(iVar4,uVar16);
    FUN_0025cdea(param_1);
    FUN_0026641e(iVar4,0x5f,iVar20,iVar14 + 1);
    FUN_002624c2(iVar4,iVar14);
    FUN_0026641e(iVar4,0x2d,iVar20,0);
    FUN_00261092(iVar23,uVar10);
    FUN_0028b6f6();
    return;
  }
  iVar19 = param_1[0x13];
  uVar16 = (uint)(iVar20 != 0);
  iVar11 = iVar19 + 2;
  uVar17 = (uint)(iVar20 != 0 || iVar5 != 0);
  param_1[0x13] = iVar11;
  local_a4 = uVar17;
  if (uVar17 != 0) {
    local_a4 = iVar19 + 3;
    param_1[0x13] = iVar11 + piVar3[2];
  }
  if (((local_ac != 0) || (iVar5 != 0)) || (local_a8 = iVar11, uVar16 != 0)) {
    local_a8 = param_1[0x13] + 1;
    param_1[0x13] = local_a8;
  }
  iVar18 = param_1[0x13];
  bVar24 = iVar6 != 0;
  param_1[0x13] = iVar18 + piVar3[2];
  if (bVar24) {
    local_50 = param_1[0x81];
    param_1[0x81] = *piVar3;
    local_4c = param_1;
    FUN_0027bff0(param_1,piVar3,param_4,iVar7);
  }
  iVar6 = FUN_00269020(&local_38,param_4);
  if (iVar6 != 0) {
    FUN_0028b6f6();
    return;
  }
  iVar19 = iVar19 + 1;
  FUN_00266266(iVar15,10,0,iVar19,iVar11);
  iVar6 = FUN_00279b98(param_1,param_2,param_4,0,0,4,0);
  if (iVar6 == 0) {
    FUN_0028b6f6();
    return;
  }
  cVar1 = *(char *)(iVar6 + 6);
  FUN_0026641e(iVar15,0x41,iVar7,iVar11);
  if (cVar1 == '\0') {
    FUN_0026641e(iVar15,0x70,iVar19,iVar11);
  }
  FUN_0026663a(iVar6);
  local_b0 = *(uint *)(iVar23 + 0x18) & 0x1000;
  if ((local_b0 != 0) && (local_b0 = 0, param_1[0x6d] == 0)) {
    local_b0 = param_1[0x13] + 1;
    param_1[0x13] = local_b0;
    FUN_0026641e(iVar15,7);
  }
  bVar2 = false;
  if (!bVar24) {
    if (cVar1 == '\0') {
      FUN_002663cc(param_1,iVar7,iVar4,piVar3,0x28);
    }
    iVar21 = piVar3[4];
    bVar2 = true;
    iVar6 = iVar21;
    if (param_5 != 5) {
      for (; iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x14)) {
        if (*(char *)(iVar6 + 0x2c) == '\x05') {
          bVar2 = true;
          goto LAB_0028b29a;
        }
      }
      bVar2 = false;
    }
LAB_0028b29a:
    local_60 = local_bc;
    local_88 = iVar14;
    for (; iVar21 != 0; iVar21 = *(int *)(iVar21 + 0x14)) {
      if ((bVar2) || (0 < *local_60)) {
        uVar12 = FUN_0026e770(param_1,iVar21);
        FUN_002662da(iVar15,0x28,local_88,*(undefined4 *)(iVar21 + 0x28),iVar4,uVar12,0xfffffff0);
      }
      local_60 = local_60 + 1;
      local_88 = local_88 + 1;
    }
  }
  if (cVar1 == '\0') {
    local_b4 = FUN_00266266(iVar15,0x71,iVar19,0,iVar11);
  }
  else {
    uVar12 = FUN_002665da(iVar15,0x4a,iVar11);
    local_b4 = FUN_002662aa(iVar15,1);
    FUN_002624c2(iVar15,uVar12);
  }
  FUN_00266266(iVar15,0x36,iVar7,local_b4,iVar11);
  if (local_ac != 0) {
    FUN_002786f4(param_1,local_c4,local_a8);
    FUN_002665da(iVar15,0x15,local_a8);
  }
  if (uVar17 != 0) {
    uVar17 = uVar16;
    if ((uVar16 != 0) && (uVar17 = *(uint *)(*param_1 + 0x18) & 0x4000000, uVar17 != 0)) {
      uVar17 = FUN_0026a868(param_1,piVar3);
    }
    uVar13 = FUN_00289d88(param_1,iVar5,param_3,0,3,piVar3,param_5);
    local_9c = piVar8;
    for (uVar22 = 0; (int)uVar22 < piVar3[2]; uVar22 = uVar22 + 1) {
      iVar4 = *local_9c;
      local_9c = local_9c + 1;
      if (((iVar4 < 0) || ((uVar13 | uVar17) == 0xffffffff)) ||
         (((int)uVar22 < 0x20 && (((uVar13 | uVar17) & 1 << (uVar22 & 0xff)) != 0)))) {
        FUN_002706fc(iVar15,piVar3,iVar7,uVar22,local_a4);
      }
      else {
        FUN_0026641e(iVar15,10,0,local_a4);
      }
      local_a4 = local_a4 + 1;
    }
    if (local_ac == 0) {
      FUN_0026641e(iVar15,0xe,iVar11,local_a8);
    }
  }
  iVar4 = iVar18 + 1;
  iVar6 = FUN_00289d88(param_1,iVar5,param_3,1,1,piVar3,param_5);
  FUN_00266266(iVar15,10,0,iVar4,iVar4 + piVar3[2] + -1);
  local_c4 = iVar4;
  local_9c = piVar8;
  for (uVar17 = 0; (int)uVar17 < piVar3[2]; uVar17 = uVar17 + 1) {
    if (uVar17 != piVar3[1]) {
      if (*local_9c < 0) {
        if ((((0x1f < (int)uVar17) || ((local_54 & 1) == 0)) ||
            ((iVar6 >> (uVar17 & 0xff) & 1U) != 0)) &&
           (FUN_00266266(iVar15,0x1d,iVar7,uVar17,local_c4), piVar3[7] == 0)) {
          FUN_002706a0(iVar15,piVar3,uVar17,local_c4);
        }
      }
      else {
        FUN_002786f4(param_1,*(undefined4 *)(*local_9c * 0x14 + param_3[2]),local_c4);
      }
    }
    local_c4 = local_c4 + 1;
    local_9c = local_9c + 1;
  }
  if ((local_54 & 1) != 0) {
    FUN_0026641e(iVar15,0x1e,iVar4);
    FUN_00263920(iVar15,piVar3);
    FUN_0028a2ac(param_1,iVar5,0x6b,param_3,1,piVar3,iVar11,param_5,local_b4);
    FUN_00266266(iVar15,0x36,iVar7,local_b4,iVar11);
    for (local_c4 = 0; local_c4 < piVar3[2]; local_c4 = local_c4 + 1) {
      iVar4 = *local_78;
      local_78 = local_78 + 1;
      if ((iVar4 < 0) && (local_c4 != piVar3[1])) {
        iVar4 = iVar18 + 1 + local_c4;
        FUN_00266266(iVar15,0x1d,iVar7,local_c4,iVar4);
        if (piVar3[7] == 0) {
          FUN_002706a0(iVar15,piVar3,local_c4,iVar4);
        }
      }
    }
  }
  if (!bVar24) {
    iVar4 = iVar11;
    if (local_ac == 0) {
      iVar4 = 0;
    }
    FUN_0028a7e0(param_1,piVar3,iVar7,local_a8,local_bc,iVar4,1,param_5,local_b4,0);
    if (uVar16 != 0) {
      FUN_002888e0(param_1,piVar3,iVar11,0);
    }
    uVar12 = FUN_00266266(iVar15,0x36,iVar7,0,iVar11);
    FUN_002708b2(param_1,piVar3,iVar7,local_bc);
    if (local_ac != 0 || iVar20 != 0) {
      FUN_0026641e(iVar15,0x3b,iVar7,0);
    }
    FUN_002624c2(iVar15,uVar12);
    if (uVar16 != 0) {
      FUN_002888e0(param_1,piVar3,0,local_a8);
    }
    FUN_00266cf4(param_1,piVar3,iVar7,local_a8,local_bc,1,0,0);
    if ((uVar16 != 0) && (*(int *)(*param_1 + 0x18) << 5 < 0)) {
      FUN_00289eb4(param_1,piVar3,param_3,iVar11);
    }
  }
  if (((*(uint *)(iVar23 + 0x18) & 0x1000) != 0) && (param_1[0x6d] == 0)) {
    FUN_0026641e(iVar15,0x14,local_b0,1);
  }
  FUN_0028a2ac(param_1,iVar5,0x6b,param_3,2,piVar3,iVar11,param_5,local_b4);
  FUN_0026641e(iVar15,1,0,local_b4);
  FUN_002624c2(iVar15,local_b4);
  iVar4 = piVar3[4];
  piVar3 = local_bc;
  for (; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x14)) {
    if ((bVar2) || (0 < *piVar3)) {
      FUN_0026641e(iVar15,0x2d,iVar14,0);
    }
    piVar3 = piVar3 + 1;
    iVar14 = iVar14 + 1;
  }
  FUN_0026641e(iVar15,0x2d,iVar7,0);
  if ((*(char *)((int)param_1 + 0x12) == '\0') && (param_1[0x6d] == 0)) {
    FUN_00266be6(param_1);
  }
  if ((((*(uint *)(iVar23 + 0x18) & 0x1000) != 0) && (param_1[0x6d] == 0)) &&
     (*(char *)((int)param_1 + 0x12) == '\0')) {
    FUN_0026641e(iVar15,0x10,local_b0,1);
    FUN_00263b94(iVar15,1);
    FUN_00265916(iVar15,0,0,DAT_0028b730 + 0x28b6d4,0);
    FUN_0028b6f6();
    return;
  }
  if (local_4c != (int *)0x0) {
    local_4c[0x81] = local_50;
  }
  FUN_0025fbda(iVar23,local_bc);
  FUN_0025fbda(iVar23,piVar8);
  FUN_00260fde(iVar23,param_2);
  FUN_00261102(iVar23,param_3);
  FUN_002610aa(iVar23,param_4);
  return;
}


