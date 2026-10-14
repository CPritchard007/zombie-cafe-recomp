/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025fd94 FUN_0025fd94 */

void FUN_0025fd94(int *param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  void *__s;
  uint uVar15;
  uint local_44;
  int local_40;
  undefined2 local_38;
  undefined2 local_34;
  int local_1c [2];
  
  iVar13 = *param_1;
  iVar14 = *(int *)(param_2 + 0x48);
  iVar10 = *(int *)(param_2 + 0x1cc);
  local_1c[0] = *(int *)(param_2 + 0x198);
  local_40 = *(int *)(param_2 + 0x54);
  if (local_40 == 0) {
    local_40 = 1;
  }
  local_44 = *(int *)(param_2 + 0x4c) + iVar14;
  __s = (void *)(param_1[1] + param_1[7] * 0x14);
  uVar15 = param_1[1] + param_1[8] * 0x14;
  FUN_0025fccc(param_1,local_1c);
  cVar9 = *(char *)(param_2 + 0x17);
  if (cVar9 != '\0') {
    cVar9 = '\x01' - (*(char *)(param_2 + 0x18) == '\0');
  }
  *(char *)((int)param_1 + 99) = cVar9;
  if (((uint)(local_44 < 10) != (int)local_44 >> 0x1f) && (*(char *)(param_2 + 0x1d4) != '\0')) {
    local_44 = 10;
  }
  memset(__s,0,uVar15 - (int)__s);
  uVar11 = (int)__s + ((uint)__s & 7);
  *(undefined1 *)((int)param_1 + 0x5f) = 0;
  uVar4 = iVar10 * 4 + 7U & 0xfffffff8;
  uVar5 = iVar14 * 4 + 7U & 0xfffffff8;
  do {
    uVar7 = param_1[2];
    iVar12 = 0;
    if ((uVar7 == 0) &&
       (uVar6 = uVar11 + local_44 * 0x28, iVar12 = local_44 * 0x28, uVar6 <= uVar15)) {
      iVar12 = 0;
      uVar7 = uVar11;
      uVar11 = uVar6;
    }
    param_1[2] = uVar7;
    uVar8 = param_1[0x11];
    uVar7 = uVar8;
    uVar6 = uVar11;
    if ((uVar8 == 0) && (uVar6 = uVar11 + iVar10 * 0x28, uVar7 = uVar11, uVar15 < uVar6)) {
      iVar12 = iVar12 + iVar10 * 0x28;
      uVar7 = uVar8;
      uVar6 = uVar11;
    }
    param_1[0x11] = uVar7;
    uVar8 = param_1[3];
    uVar11 = uVar8;
    uVar7 = uVar6;
    if (uVar8 == 0) {
      uVar2 = local_1c[0] * 4 + 7U & 0xfffffff8;
      uVar7 = uVar6 + uVar2;
      uVar11 = uVar6;
      if (uVar15 < uVar7) {
        iVar12 = iVar12 + uVar2;
        uVar11 = uVar8;
        uVar7 = uVar6;
      }
    }
    param_1[3] = uVar11;
    uVar8 = param_1[0x12];
    uVar11 = uVar8;
    uVar6 = uVar7;
    if ((uVar8 == 0) && (uVar6 = uVar7 + uVar4, uVar11 = uVar7, uVar15 < uVar6)) {
      iVar12 = iVar12 + uVar4;
      uVar11 = uVar8;
      uVar6 = uVar7;
    }
    param_1[0x12] = uVar11;
    uVar8 = param_1[0x10];
    uVar11 = uVar8;
    uVar7 = uVar6;
    if ((uVar8 == 0) && (uVar7 = uVar6 + uVar5, uVar11 = uVar6, uVar15 < uVar7)) {
      iVar12 = iVar12 + uVar5;
      uVar11 = uVar8;
      uVar7 = uVar6;
    }
    param_1[0x10] = uVar11;
    uVar6 = param_1[0x30];
    uVar11 = uVar6;
    if ((uVar6 == 0) && (uVar8 = local_40 + 7U & 0xfffffff8, uVar11 = uVar7, uVar15 < uVar7 + uVar8)
       ) {
      iVar12 = iVar12 + uVar8;
      uVar11 = uVar6;
    }
    param_1[0x30] = uVar11;
    if (iVar12 != 0) {
      iVar3 = FUN_0025f04c(iVar13,iVar12);
      param_1[0x29] = iVar3;
    }
    uVar11 = param_1[0x29];
    uVar15 = uVar11 + iVar12;
  } while ((iVar12 != 0) && (*(char *)(iVar13 + 0x36) == '\0'));
  local_34 = (undefined2)iVar14;
  *(undefined2 *)((int)param_1 + 0x2e) = local_34;
  param_1[0x2f] = local_40;
  if (param_1[0x11] != 0) {
    local_38 = (undefined2)iVar10;
    *(undefined2 *)(param_1 + 0x13) = local_38;
    iVar12 = 0;
    for (iVar14 = 0; iVar14 < iVar10; iVar14 = iVar14 + 1) {
      *(undefined2 *)(param_1[0x11] + iVar12 + 0x1c) = 1;
      *(int *)(param_1[0x11] + iVar12) = iVar13;
      iVar12 = iVar12 + 0x28;
    }
  }
  if ((void *)param_1[0x12] != (void *)0x0) {
    sVar1 = *(short *)(param_2 + 0x1d0);
    *(short *)((int)param_1 + 0x4e) = sVar1;
    memcpy((void *)param_1[0x12],*(void **)(param_2 + 0x1ec),(int)sVar1 << 2);
    memset(*(void **)(param_2 + 0x1ec),0,*(int *)(param_2 + 0x1d0) << 2);
  }
  if (param_1[2] != 0) {
    param_1[2] = param_1[2] + -0x28;
    param_1[6] = local_44;
    iVar14 = 0x28;
    for (iVar10 = 1; iVar10 <= (int)local_44; iVar10 = iVar10 + 1) {
      *(undefined2 *)(param_1[2] + iVar14 + 0x1c) = 0x80;
      *(int *)(param_1[2] + iVar14) = iVar13;
      iVar14 = iVar14 + 0x28;
    }
  }
  *(undefined1 *)((int)param_1 + 0x5d) = *(undefined1 *)(param_2 + 0x1d4);
  param_1[0xc] = DAT_00260000;
  param_1[0x15] = -1;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 2;
  param_1[0x14] = 1;
  param_1[0x1a] = 0;
  *(undefined1 *)((int)param_1 + 0x61) = 0xff;
  param_1[0x1d] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  return;
}


