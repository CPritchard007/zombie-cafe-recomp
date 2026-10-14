/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027e7d4 FUN_0027e7d4 */

void FUN_0027e7d4(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int *param_7)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  uint uVar8;
  undefined2 *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  byte *pbVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  undefined2 *puVar17;
  int iVar18;
  int local_4c;
  int local_48;
  int local_44;
  undefined2 local_20;
  
  local_48 = param_6;
  if (param_6 != 0) {
    local_48 = 4;
  }
  if (*param_7 != 0) {
    return;
  }
  if ((*(char *)(param_1 + 1) != '\0') || ((int)(uint)*(ushort *)(param_1 + 0xe) <= param_4 + 1)) {
    local_44 = param_3;
    if (param_5 != 0) {
      memcpy((void *)(param_5 + local_48),(void *)(param_3 + local_48),param_4 - local_48);
      local_44 = param_5;
    }
    if (param_6 != 0) {
      FUN_0025ba48(local_44,param_6);
    }
    local_20 = (undefined2)param_2;
    iVar11 = *(byte *)(param_1 + 1) + 8;
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) + 1;
    *(int *)(iVar11 * 4 + param_1) = local_44;
    *(undefined2 *)(param_1 + iVar11 * 2 + 4) = local_20;
    return;
  }
  iVar11 = FUN_002733c4(*(undefined4 *)(param_1 + 0x44));
  if (iVar11 == 0) {
    uVar2 = *(ushort *)(param_1 + 0xc);
    iVar18 = *(int *)(param_1 + 0x38);
    uVar12 = (uint)uVar2 + (uint)*(ushort *)(param_1 + 0x10) * 2;
    uVar5 = (uint)*(byte *)(param_1 + 5);
    iVar11 = *(int *)(*(int *)(param_1 + 0x34) + 0x24);
    pbVar13 = (byte *)(iVar18 + uVar5 + 7);
    bVar1 = *pbVar13;
    puVar14 = (undefined1 *)(iVar18 + uVar5 + 5);
    puVar15 = (undefined1 *)(iVar18 + uVar5 + 6);
    uVar10 = (CONCAT11(*puVar14,*puVar15) - 1 & 0xffff) + 1;
    uVar3 = DAT_0027ea24;
    if (uVar10 < uVar12) {
LAB_0027e8e2:
      iVar11 = FUN_0026b4e4(uVar3);
      if (iVar11 != 0) goto LAB_0027e996;
      local_4c = 0;
    }
    else {
      if (bVar1 < 0x3c) {
        if (uVar12 + 1 < uVar10) {
          uVar5 = uVar5 + 1;
          do {
            puVar4 = (undefined1 *)(iVar18 + uVar5);
            uVar16 = (uint)CONCAT11(*puVar4,puVar4[1]);
            if (uVar16 == 0) goto LAB_0027e95e;
            uVar3 = DAT_0027ea28;
            if ((iVar11 + -3 <= (int)uVar16) || (uVar16 <= uVar5 + 3)) goto LAB_0027e8e2;
            puVar6 = (undefined1 *)(iVar18 + uVar16 + 2);
            pcVar7 = (char *)(iVar18 + uVar16 + 3);
            uVar8 = (uint)CONCAT11(*puVar6,*pcVar7);
            uVar5 = uVar16;
          } while ((int)uVar8 < param_4);
          local_4c = uVar8 - param_4;
          if (local_4c < 4) {
            *puVar4 = *(undefined1 *)(iVar18 + uVar16);
            puVar4[1] = ((undefined1 *)(iVar18 + uVar16))[1];
            *pbVar13 = bVar1 + (char)local_4c;
          }
          else {
            uVar3 = DAT_0027ea2c;
            if (iVar11 < (int)(uVar8 + uVar16)) goto LAB_0027e8e2;
            *puVar6 = (char)((uint)local_4c >> 8);
            *pcVar7 = (char)local_4c;
          }
          local_4c = uVar16 + local_4c;
          goto LAB_0027e99c;
        }
      }
      else {
        iVar11 = FUN_0026bbbc(param_1);
        if (iVar11 != 0) goto LAB_0027e996;
        uVar10 = (CONCAT11(*puVar14,*puVar15) - 1 & 0xffff) + 1;
      }
LAB_0027e95e:
      if ((int)uVar10 < (int)(uVar12 + 2 + param_4)) {
        iVar11 = FUN_0026bbbc(param_1);
        if (iVar11 != 0) goto LAB_0027e996;
        uVar10 = (CONCAT11(*puVar14,*puVar15) - 1 & 0xffff) + 1;
      }
      local_4c = uVar10 - param_4;
      *puVar14 = (char)((uint)local_4c >> 8);
      *puVar15 = (char)local_4c;
    }
LAB_0027e99c:
    *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 1;
    *(short *)(param_1 + 0xe) = (*(short *)(param_1 + 0xe) + -2) - (short)param_4;
    memcpy((void *)(iVar18 + local_4c + local_48),(void *)(param_3 + local_48),param_4 - local_48);
    if (param_6 != 0) {
      FUN_0025ba48(iVar18 + local_4c,param_6);
    }
    iVar11 = (uint)uVar2 + param_2 * 2;
    puVar9 = (undefined2 *)(iVar18 + iVar11);
    puVar17 = (undefined2 *)(iVar18 + uVar12);
    while (puVar9 < puVar17) {
      *puVar17 = puVar17[-1];
      puVar17 = puVar17 + -1;
    }
    *(char *)puVar9 = (char)((uint)local_4c >> 8);
    *(char *)(iVar18 + iVar11 + 1) = (char)local_4c;
    *(char *)(iVar18 + (uint)*(byte *)(param_1 + 5) + 3) =
         (char)((ushort)*(undefined2 *)(param_1 + 0x10) >> 8);
    *(char *)(iVar18 + (uint)*(byte *)(param_1 + 5) + 4) = (char)*(undefined2 *)(param_1 + 0x10);
    if ((*(char *)(*(int *)(param_1 + 0x34) + 0x11) != '\0') && (*param_7 == 0)) {
      FUN_0027dfbc(param_1,param_3,param_7);
    }
  }
  else {
LAB_0027e996:
    *param_7 = iVar11;
  }
  return;
}


