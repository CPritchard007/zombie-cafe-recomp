/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002751b8 FUN_002751b8 */

void FUN_002751b8(int *param_1,int param_2,undefined4 param_3,uint *param_4,uint *param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *__s;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  uint *puVar13;
  size_t __n;
  int iVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  uint local_e0;
  undefined1 *local_d0;
  int local_cc;
  char *local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_94;
  ushort local_8a;
  ushort local_88;
  undefined1 auStack_80 [100];
  int local_1c;
  
  piVar12 = *(int **)(DAT_0027549c + 0x2751c4);
  local_1c = *piVar12;
  local_b0 = 0;
  local_ac = 0;
  local_a8 = 0;
  local_a4 = 0;
  sqlite3_snprintf(100,auStack_80,DAT_002754a0 + 0x2751e6,param_2);
  iVar14 = *param_1;
  iVar3 = *(int *)(iVar14 + 0x24);
  if (param_2 == 0) {
    local_cc = 0;
    goto LAB_0027564c;
  }
  iVar4 = FUN_0026826c(param_1,param_2,param_3);
  local_cc = 0;
  if (iVar4 != 0) goto LAB_0027564c;
  iVar4 = FUN_00274984(iVar14,param_2,&local_b4,0);
  if (iVar4 != 0) {
    FUN_00268204(param_1,auStack_80,DAT_002754a4 + 0x275228,iVar4);
    goto LAB_0027564c;
  }
  *local_b4 = '\0';
  if ((*local_b4 == '\0') && (iVar4 = FUN_0026b81c(), iVar4 != 0)) {
    FUN_00268204(param_1,auStack_80,DAT_002754ac + 0x275258);
    FUN_00274a30(local_b4);
    goto LAB_0027564c;
  }
  local_cc = 0;
  iVar4 = DAT_002754a8 + 0x27524a;
  puVar13 = (uint *)0x0;
  while (((int)puVar13 < (int)(uint)*(ushort *)(local_b4 + 0x10) && (param_1[4] != 0))) {
    sqlite3_snprintf(100,auStack_80,iVar4,param_2,puVar13);
    iVar8 = *(int *)(local_b4 + 0x38) +
            (uint)(CONCAT11(*(undefined1 *)(*(int *)(local_b4 + 0x40) + (int)puVar13 * 2),
                            *(undefined1 *)(*(int *)(local_b4 + 0x40) + (int)puVar13 * 2 + 1)) &
                  *(ushort *)(local_b4 + 0x12));
    FUN_00260a6c(local_b4,iVar8,&local_a0);
    local_e0 = local_94;
    if (local_b4[2] == '\0') {
      local_e0 = local_94 + local_a0;
    }
    else if (puVar13 == (uint *)0x0) {
      local_a8 = local_a0;
      local_a4 = local_9c;
      local_b0 = local_a0;
      local_ac = local_9c;
    }
    else {
      if (((int)local_9c <= (int)local_a4) && ((local_9c != local_a4 || (local_a0 <= local_a8)))) {
        FUN_00268204(param_1,auStack_80,DAT_002754b0 + 0x2752e0,local_a4,local_a0,local_9c,local_a8,
                     local_a4);
      }
      local_a8 = local_a0;
      local_a4 = local_9c;
    }
    if ((local_8a < local_e0) &&
       (uVar7 = (uint)local_88,
       iVar8 + uVar7 <= (uint)(*(int *)(local_b4 + 0x38) + *(int *)(iVar14 + 0x24)))) {
      uVar5 = __udivsi3(((iVar3 + -5) - (uint)local_8a) + local_e0,iVar3 + -4);
      uVar6 = FUN_0025ba30(iVar8 + uVar7);
      if (*(char *)(iVar14 + 0x11) != '\0') {
        FUN_00274ffc(param_1,uVar6,3,param_2,auStack_80);
      }
      FUN_00275070(param_1,0,uVar6,uVar5,auStack_80);
    }
    if (local_b4[3] == '\0') {
      uVar5 = FUN_0025ba30(iVar8);
      if (*(char *)(iVar14 + 0x11) != '\0') {
        FUN_00274ffc(param_1,uVar5,5,param_2,auStack_80);
      }
      puVar9 = puVar13;
      if (puVar13 != (uint *)0x0) {
        puVar9 = &local_a8;
      }
      iVar8 = FUN_002751b8(param_1,uVar5,auStack_80,&local_b0,puVar9);
      bVar15 = iVar8 != local_cc;
      local_cc = iVar8;
      if ((bVar15) && (0 < (int)puVar13)) {
        FUN_00268204(param_1,auStack_80,DAT_002754b4 + 0x2753a2);
      }
    }
    puVar13 = (uint *)((int)puVar13 + 1);
  }
  if (local_b4[3] == '\0') {
    uVar5 = FUN_0025ba30(*(int *)(local_b4 + 0x38) + (byte)local_b4[5] + 8);
    sqlite3_snprintf(100,auStack_80,DAT_002754b8 + 0x2753de,param_2);
    if (*(char *)(iVar14 + 0x11) != '\0') {
      FUN_00274ffc(param_1,uVar5,5,param_2,auStack_80);
    }
    puVar13 = (uint *)(uint)*(ushort *)(local_b4 + 0x10);
    if (puVar13 != (uint *)0x0) {
      puVar13 = &local_a8;
    }
    FUN_002751b8(param_1,uVar5,auStack_80,0,puVar13);
  }
  if ((local_b4[3] != '\0') && (local_b4[2] != '\0')) {
    if (param_4 == (uint *)0x0) {
      if (param_5 != (uint *)0x0) {
        uVar7 = *param_5;
        uVar10 = param_5[1];
        if (((int)local_ac <= (int)uVar10) && ((local_ac != uVar10 || (local_b0 <= uVar7)))) {
          iVar4 = DAT_00275660 + 0x2754e6;
          uVar11 = local_ac;
          uVar16 = local_b0;
          uVar17 = local_ac;
          goto LAB_002754e8;
        }
      }
    }
    else {
      uVar7 = *param_4;
      uVar10 = param_4[1];
      if (param_5 == (uint *)0x0) {
        if (((int)uVar10 < (int)local_a4) || ((local_a4 == uVar10 && (uVar7 < local_a8)))) {
          iVar4 = DAT_002754bc + 0x275446;
          uVar11 = uVar10;
          uVar16 = local_a8;
          uVar17 = local_a4;
LAB_002754e8:
          FUN_00268204(param_1,auStack_80,iVar4,uVar11,uVar16,uVar17,uVar7,uVar10);
        }
      }
      else {
        if (((int)local_ac <= (int)uVar10) && ((local_ac != uVar10 || (local_b0 <= uVar7)))) {
          FUN_00268204(param_1,auStack_80,DAT_002754c0 + 0x275462,uVar10,local_b0,local_ac,uVar7,
                       uVar10);
        }
        uVar7 = param_5[1];
        if (((int)uVar7 < (int)local_a4) || ((local_a4 == uVar7 && (*param_5 < local_a8)))) {
          FUN_00268204(param_1,auStack_80,DAT_002754c4 + 0x275486,local_a4,local_a8,local_a4,
                       *param_5,uVar7);
        }
        *param_4 = local_a8;
        param_4[1] = local_a4;
      }
    }
  }
  iVar4 = *(int *)(local_b4 + 0x38);
  uVar7 = (uint)(byte)local_b4[5];
  __s = (void *)FUN_0025f320(*(undefined4 *)(iVar14 + 0x20));
  if (__s == (void *)0x0) {
    param_1[6] = 1;
  }
  else {
    iVar14 = iVar4 + uVar7;
    __n = (CONCAT11(*(undefined1 *)(iVar14 + 5),*(undefined1 *)(iVar14 + 6)) - 1 & 0xffff) + 1;
    memset((void *)((int)__s + __n),0,iVar3 - __n);
    memset(__s,1,__n);
    uVar1 = *(undefined1 *)(iVar14 + 3);
    uVar2 = *(undefined1 *)(iVar14 + 4);
    iVar14 = DAT_00275664 + 0x275542;
    local_d0 = (undefined1 *)(iVar4 + uVar7 + 0xc + (uint)(byte)local_b4[3] * -4);
    for (local_e0 = 0; (int)local_e0 < (int)(uint)CONCAT11(uVar1,uVar2); local_e0 = local_e0 + 1) {
      uVar10 = (uint)CONCAT11(*local_d0,local_d0[1]);
      if ((int)uVar10 < iVar3 + -3) {
        iVar8 = FUN_00260b9e(local_b4,iVar4 + uVar10);
      }
      else {
        iVar8 = 0x10000;
      }
      iVar8 = (uVar10 - 1) + iVar8;
      if (iVar8 < iVar3) {
        for (; (int)uVar10 <= iVar8; iVar8 = iVar8 + -1) {
          *(char *)((int)__s + iVar8) = *(char *)((int)__s + iVar8) + '\x01';
        }
      }
      else {
        FUN_00268204(param_1,0,iVar14,local_e0,param_2);
      }
      local_d0 = local_d0 + 2;
    }
    uVar2 = *(undefined1 *)(iVar4 + uVar7 + 2);
    uVar1 = *(undefined1 *)(iVar4 + uVar7 + 1);
    while (uVar10 = (uint)CONCAT11(uVar1,uVar2), uVar10 != 0) {
      iVar14 = uVar10 + CONCAT11(*(undefined1 *)(iVar4 + uVar10 + 2),
                                 *(undefined1 *)(iVar4 + uVar10 + 3));
      while (iVar14 = iVar14 + -1, (int)uVar10 <= iVar14) {
        *(char *)((int)__s + iVar14) = *(char *)((int)__s + iVar14) + '\x01';
      }
      uVar2 = *(undefined1 *)(iVar4 + uVar10 + 1);
      uVar1 = *(undefined1 *)(iVar4 + uVar10);
    }
    uVar10 = 0;
    for (iVar14 = 0; iVar14 < iVar3; iVar14 = iVar14 + 1) {
      if (*(byte *)((int)__s + iVar14) == 0) {
        uVar10 = uVar10 + 1;
      }
      else if (1 < *(byte *)((int)__s + iVar14)) {
        FUN_00268204(param_1,0,DAT_00275668 + 0x275610,iVar14,param_2);
        break;
      }
    }
    uVar7 = (uint)*(byte *)(iVar4 + uVar7 + 7);
    if (uVar10 != uVar7) {
      FUN_00268204(param_1,0,DAT_0027566c + 0x275634,uVar10,uVar7,param_2);
    }
  }
  FUN_0025f6b8(__s);
  FUN_00274a30(local_b4);
  local_cc = local_cc + 1;
LAB_0027564c:
  if (local_1c == *piVar12) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_cc);
}


