/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027366c FUN_0027366c */

/* WARNING: Removing unreachable block (ram,0x00273990) */
/* WARNING: Removing unreachable block (ram,0x002739f6) */

void FUN_0027366c(int param_1,int param_2,uint param_3,uint param_4)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_80;
  int local_74;
  int local_6c [2];
  int local_64;
  int local_60;
  int local_5c;
  int *local_58;
  int *local_54;
  undefined8 local_50;
  uint local_48;
  int local_44;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  int local_1c;
  
  piVar6 = *(int **)(DAT_002739b0 + 0x27367c);
  local_1c = *piVar6;
  iVar4 = 1;
  local_6c[0] = param_2;
  if (param_4 != 0) {
    iVar4 = 0;
    piVar9 = local_6c;
    for (; *piVar9 = param_2, param_2 != 0; param_2 = *(int *)(param_2 + 0xc)) {
      if (*(uint *)(param_2 + 0x14) <= param_3) {
        piVar9 = (int *)(param_2 + 0xc);
        iVar4 = iVar4 + 1;
      }
    }
  }
  iVar8 = local_6c[0];
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + iVar4;
  if (*(int *)(local_6c[0] + 0x14) == 1) {
    FUN_0025bf90(local_6c[0]);
  }
  piVar9 = *(int **)(param_1 + 0xb8);
  iVar4 = *(int *)(param_1 + 0x80);
  uVar10 = (uint)*(byte *)(param_1 + 10);
  if ((short)piVar9[10] == 0) {
    iVar11 = *(int *)piVar9[8];
    if (*(int *)(iVar11 + 0x60) != 0) {
      sqlite3_randomness(4,&local_64);
      if (*(char *)((int)piVar9 + 0x2b) == '\0') {
        iVar3 = (**(code **)(*(int *)piVar9[1] + 0x38))((int *)piVar9[1],4,4,10);
        if (iVar3 != 0) {
          if (iVar3 != 5) goto LAB_00273aa8;
          goto LAB_00273754;
        }
      }
      piVar9[0x1a] = piVar9[0x1a] + 1;
      piVar9[0x11] = 0;
      iVar3 = FUN_0025ba30(piVar9 + 0x15);
      FUN_0025ba48(piVar9 + 0x15,iVar3 + 1);
      piVar9[0x16] = local_64;
      FUN_0025e130(piVar9);
      *(undefined4 *)(iVar11 + 0x60) = 0;
      *(undefined4 *)(iVar11 + 0x68) = 0;
      *(undefined4 *)(iVar11 + 0x6c) = 0xffffffff;
      *(undefined4 *)(iVar11 + 0x70) = 0xffffffff;
      *(undefined4 *)(iVar11 + 0x74) = 0xffffffff;
      FUN_00261c56(piVar9,4,4);
    }
LAB_00273754:
    if (*(char *)((int)piVar9 + 0x2b) == '\0') {
      (**(code **)(*(int *)piVar9[1] + 0x38))((int *)piVar9[1],3,1,5);
    }
    iVar11 = DAT_002739b4;
    *(undefined2 *)(piVar9 + 10) = 0xffff;
    iVar12 = 0;
    do {
      iVar12 = iVar12 + 1;
      if (5 < iVar12) {
        if (100 < iVar12) {
          iVar3 = 0xf;
          goto LAB_00273aa8;
        }
        iVar3 = 1;
        if (9 < iVar12) {
          iVar3 = iVar11;
        }
        (**(code **)(*piVar9 + 0x3c))(*piVar9,iVar3);
      }
      iVar3 = FUN_002716d8(piVar9,&local_64,1);
      iVar11 = iVar11 + 0xee;
    } while (iVar3 == -1);
    if (iVar3 != 0) goto LAB_00273aa8;
  }
  local_80 = piVar9[0x11];
  if (local_80 == 0) {
    cVar1 = *(char *)(DAT_002739b8 + 0x2737f8);
    FUN_0025ba48(auStack_3c,DAT_002739bc + ((cVar1 == '\0') - 1));
    FUN_0025ba48(auStack_38,DAT_002739c0);
    FUN_0025ba48(auStack_34,iVar4);
    FUN_0025ba48(auStack_30,piVar9[0x1a]);
    if (piVar9[0x1a] == 0) {
      sqlite3_randomness(8,piVar9 + 0x15);
    }
    memcpy(auStack_2c,piVar9 + 0x15,8);
    FUN_0025c0ac(1,auStack_3c,0x18,0,&local_60);
    FUN_0025ba48(auStack_24,local_60);
    FUN_0025ba48(auStack_20,local_5c);
    piVar9[9] = iVar4;
    *(bool *)((int)piVar9 + 0x41) = cVar1 == '\0';
    piVar9[0x13] = local_60;
    piVar9[0x14] = local_5c;
    *(undefined1 *)((int)piVar9 + 0x2f) = 1;
    iVar3 = FUN_0025ace6(piVar9[2],auStack_3c,0x20,0,0,0);
    if (iVar3 != 0) goto LAB_00273aa8;
    if ((uVar10 != 0) && ((char)piVar9[0xc] != '\0')) {
      iVar3 = (**(code **)(*(int *)piVar9[2] + 0x14))((int *)piVar9[2],uVar10 & 0x13);
      if (iVar3 != 0) goto LAB_00273aa8;
    }
  }
  local_54 = (int *)piVar9[2];
  local_50._0_4_ = 0;
  local_50._4_4_ = 0;
  iVar12 = iVar4 + 0x18;
  iVar7 = iVar12 >> 0x1f;
  local_58 = piVar9;
  local_48 = uVar10;
  local_44 = iVar4;
  lVar14 = __muldi3(local_80,0,iVar12,iVar7);
  lVar14 = lVar14 + 0x20;
  local_74 = 0;
  iVar11 = 0;
  iVar3 = iVar8;
  while (iVar13 = iVar3, lVar16 = CONCAT44(local_50._4_4_,(undefined4)local_50), iVar13 != 0) {
    uVar5 = param_4;
    if (param_4 != 0) {
      iVar11 = *(int *)(iVar13 + 0xc);
      uVar5 = 0;
      if (iVar11 == 0) {
        uVar5 = param_3;
      }
    }
    iVar3 = FUN_0025e068(&local_58,iVar13,uVar5,iVar11,lVar14);
    if (iVar3 != 0) goto LAB_00273aa8;
    lVar14 = lVar14 + iVar12;
    local_80 = local_80 + 1;
    iVar11 = iVar7;
    local_74 = iVar13;
    iVar3 = *(int *)(iVar13 + 0xc);
  }
  if (param_4 == 0) {
    iVar3 = 0;
    iVar11 = 0;
  }
  else {
    iVar11 = 0;
    if ((int)(uVar10 << 0x1a) < 0) {
      if (*(char *)((int)piVar9 + 0x31) == '\0') {
        iVar3 = (**(code **)(*local_54 + 0x14))(local_54,uVar10 & 0x13);
        lVar16 = CONCAT44(local_50._4_4_,(undefined4)local_50);
      }
      else {
        if (*(code **)(*(int *)piVar9[2] + 0x2c) == (code *)0x0) {
          iVar11 = 0x1000;
        }
        else {
          iVar11 = (**(code **)(*(int *)piVar9[2] + 0x2c))();
        }
        lVar16 = lVar14 + iVar11 + -1;
        uVar15 = __aeabi_ldivmod((int)lVar16,(int)((ulonglong)lVar16 >> 0x20),iVar11,iVar11 >> 0x1f)
        ;
        lVar16 = __muldi3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),iVar11,iVar11 >> 0x1f);
        iVar11 = 0;
        for (; local_50._4_4_ = (undefined4)((ulonglong)lVar16 >> 0x20), lVar14 < lVar16;
            lVar14 = lVar14 + iVar12) {
          iVar3 = FUN_0025e068(&local_58,local_74,param_3,local_50._4_4_,lVar14);
          local_50 = lVar16;
          if (iVar3 != 0) goto LAB_00273aa8;
          iVar11 = iVar11 + 1;
          lVar16 = local_50;
        }
        iVar3 = 0;
      }
    }
    else {
      iVar3 = 0;
    }
    if (*(char *)((int)piVar9 + 0x2f) != '\0') {
      lVar2 = *(longlong *)(piVar9 + 4);
      lVar14 = *(longlong *)(piVar9 + 4);
      if (-1 < piVar9[5]) {
        local_50 = lVar16;
        lVar16 = __muldi3(iVar11 + local_80,0,iVar12,iVar7);
        if (lVar14 <= lVar16 + 0x1f) {
          lVar2 = lVar16 + 0x20;
        }
        local_9c = (undefined4)((ulonglong)lVar2 >> 0x20);
        local_a0 = (undefined4)lVar2;
        FUN_0026b494(piVar9,local_9c,local_a0,local_9c);
        *(undefined1 *)((int)piVar9 + 0x2f) = 0;
        lVar16 = local_50;
      }
    }
  }
  iVar12 = piVar9[0x11];
  local_50 = lVar16;
  for (; (iVar3 == 0 && (iVar8 != 0)); iVar8 = *(int *)(iVar8 + 0xc)) {
    iVar12 = iVar12 + 1;
    iVar3 = FUN_0026b504(piVar9,iVar12,*(undefined4 *)(iVar8 + 0x14));
  }
  while ((0 < iVar11 && (iVar3 == 0))) {
    iVar12 = iVar12 + 1;
    iVar11 = iVar11 + -1;
    iVar3 = FUN_0026b504(piVar9,iVar12,*(undefined4 *)(local_74 + 0x14));
  }
  if (iVar3 == 0) {
    *(ushort *)((int)piVar9 + 0x42) = (ushort)((uint)iVar4 >> 0x10) | (ushort)iVar4 & 0xff00;
    piVar9[0x11] = iVar12;
    if (param_4 != 0) {
      piVar9[0xf] = piVar9[0xf] + 1;
      piVar9[0x12] = param_3;
      FUN_0025e130(piVar9);
      piVar9[3] = iVar12;
    }
    iVar4 = local_6c[0];
    if (*(int *)(param_1 + 0x58) != 0) {
      for (; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xc)) {
        FUN_0027361c(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(iVar4 + 0x14),
                     *(undefined4 *)(iVar4 + 4));
      }
    }
  }
LAB_00273aa8:
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
  return;
}


