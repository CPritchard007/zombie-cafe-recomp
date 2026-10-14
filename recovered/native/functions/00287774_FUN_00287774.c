/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00287774 FUN_00287774 */

int FUN_00287774(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  char *pcVar8;
  ushort *puVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c [4];
  uint local_1c;
  
  if (param_2 == 1) {
    local_44 = DAT_002879e4 + 0x2877ae;
    iVar12 = DAT_002879e8 + 0x28779e;
  }
  else {
    local_44 = DAT_002879dc + 0x287792;
    iVar12 = DAT_002879e0 + 0x287790;
  }
  local_48 = DAT_002879ec + 0x2877a6;
  local_40 = 0;
  local_30 = 0;
  local_4c = iVar12;
  local_3c = param_1;
  local_38 = param_3;
  local_34 = param_2;
  FUN_00286c08(&local_3c,3,&local_4c);
  if (local_30 != 0) goto LAB_002879c0;
  iVar7 = param_2 * 0x10;
  iVar2 = FUN_0026460e(param_1,iVar12,*(undefined4 *)(*(int *)(param_1 + 0x10) + iVar7));
  if (iVar2 != 0) {
    *(byte *)(iVar2 + 0x22) = *(byte *)(iVar2 + 0x22) | 1;
  }
  iVar2 = *(int *)(param_1 + 0x10) + iVar7;
  if (*(int *)(iVar2 + 4) == 0) {
    if (param_2 != 1) {
      return 0;
    }
    puVar9 = (ushort *)(*(int *)(*(int *)(param_1 + 0x10) + 0x1c) + 0x4e);
    *puVar9 = *puVar9 | 1;
    return 0;
  }
  FUN_00261f68();
  bVar1 = false;
  if (*(char *)(*(int *)(iVar2 + 4) + 8) == '\0') {
    iVar3 = FUN_0027d63c();
    bVar1 = true;
    if (iVar3 == 0) goto LAB_0028783a;
    uVar4 = FUN_0026311c();
    FUN_0026a976(param_3,param_1,DAT_002879f0 + 0x287834,uVar4);
  }
  else {
LAB_0028783a:
    iVar3 = 0;
    do {
      iVar10 = iVar3 + 1;
      FUN_00262122(*(undefined4 *)(iVar2 + 4),iVar10,local_2c + iVar3);
      iVar3 = iVar10;
    } while (iVar10 != 5);
    **(int **)(iVar2 + 0xc) = local_2c[0];
    iVar3 = *(int *)(param_1 + 0x10);
    if (local_1c == 0) {
      puVar9 = (ushort *)(*(int *)(iVar3 + iVar7 + 0xc) + 0x4e);
      *puVar9 = *puVar9 | 4;
LAB_00287896:
      *(undefined1 *)(*(int *)(iVar2 + 0xc) + 0x4d) =
           *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 0x4d);
      if (*(int *)(*(int *)(iVar2 + 0xc) + 0x50) == 0) {
        if (local_2c[2] < 0) {
          iVar3 = DAT_00287a0c;
          if (local_2c[2] != -0x80000000) {
            iVar3 = -local_2c[2];
          }
        }
        else {
          iVar3 = local_2c[2];
          if (local_2c[2] == 0) {
            iVar3 = 2000;
          }
        }
        *(int *)(*(int *)(iVar2 + 0xc) + 0x50) = iVar3;
        iVar3 = *(int *)(iVar2 + 4);
        puVar11 = *(undefined4 **)(iVar3 + 4);
        uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0xc) + 0x50);
        FUN_00261f68(iVar3);
        FUN_0025c030(*puVar11,uVar4);
        FUN_00262002(iVar3);
      }
      *(char *)(*(int *)(iVar2 + 0xc) + 0x4c) = (char)local_2c[1];
      pcVar8 = (char *)(*(int *)(iVar2 + 0xc) + 0x4c);
      if (*pcVar8 == '\0') {
        *pcVar8 = '\x01';
      }
      if (4 < *(byte *)(*(int *)(iVar2 + 0xc) + 0x4c)) {
        iVar12 = DAT_002879f8 + 0x287910;
        goto LAB_0028790e;
      }
      if ((param_2 == 0) && (3 < local_2c[1])) {
        *(uint *)(param_1 + 0x18) = DAT_002879fc & *(uint *)(param_1 + 0x18);
      }
      uVar4 = FUN_0026877c(param_1,DAT_00287a00 + 0x287938,
                           *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar7),iVar12);
      iVar12 = DAT_00287a04;
      uVar5 = *(undefined4 *)(param_1 + 0x10c);
      *(undefined4 *)(param_1 + 0x10c) = 0;
      iVar3 = sqlite3_exec(param_1,uVar4,iVar12 + 0x287952,&local_3c,0);
      *(undefined4 *)(param_1 + 0x10c) = uVar5;
      if (iVar3 == 0) {
        iVar3 = local_30;
      }
      FUN_0025fbda(param_1,uVar4);
      if (iVar3 == 0) {
        FUN_002876f4(param_1,param_2);
      }
      if (*(char *)(param_1 + 0x36) == '\0') {
        if (iVar3 != 0) goto LAB_00287994;
LAB_0028799a:
        iVar3 = 0;
        puVar9 = (ushort *)(*(int *)(*(int *)(param_1 + 0x10) + iVar7 + 0xc) + 0x4e);
        *puVar9 = *puVar9 | 1;
      }
      else {
        FUN_00262044(param_1);
        iVar3 = 7;
LAB_00287994:
        if (*(int *)(param_1 + 0x18) << 8 < 0) goto LAB_0028799a;
      }
    }
    else {
      if (param_2 == 0) {
        uVar6 = (undefined1)(local_1c & 3);
        if ((local_1c & 3) == 0) {
          uVar6 = 1;
        }
        *(undefined1 *)(*(int *)(iVar3 + 0xc) + 0x4d) = uVar6;
        goto LAB_00287896;
      }
      if (local_1c == *(byte *)(*(int *)(iVar3 + 0xc) + 0x4d)) goto LAB_00287896;
      iVar12 = DAT_002879f4 + 0x287886;
LAB_0028790e:
      FUN_0026a976(param_3,param_1,iVar12);
      iVar3 = 1;
    }
    if (bVar1) {
      FUN_00280518(*(undefined4 *)(iVar2 + 4));
    }
  }
  FUN_00262002(*(undefined4 *)(iVar2 + 4));
  local_30 = iVar3;
LAB_002879c0:
  if ((local_30 + DAT_00287a08 == 0) || (local_30 == 7)) {
    *(undefined1 *)(param_1 + 0x36) = 1;
  }
  return local_30;
}


