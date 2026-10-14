/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dc880 FUN_002dc880 */

void FUN_002dc880(int *param_1,int param_2,uint param_3)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined1 *puVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  char *pcVar16;
  byte *pbVar17;
  int iVar18;
  byte *pbVar19;
  char *pcVar20;
  byte *local_30;
  byte *local_2c;
  int local_28;
  
  iVar15 = *param_1;
  if ((char)param_1[2] == '\0') {
    uVar13 = param_3;
    if (param_3 != 0) {
      uVar13 = (uint)*(ushort *)(param_3 + 8);
    }
    bVar1 = *(byte *)((int)param_1 + 9);
    if (bVar1 < 8) {
      if (bVar1 == 2) {
        uVar13 = (uVar13 & 3) * 0x55;
        local_30 = (byte *)(param_2 + (iVar15 - 1U >> 2));
        local_2c = (byte *)(param_2 + (iVar15 - 1U));
        uVar14 = (~(iVar15 + 3U) & 3) << 1;
        for (local_28 = 0; local_28 != iVar15; local_28 = local_28 + 1) {
          uVar10 = (int)(uint)*local_30 >> (uVar14 & 0xff) & 3;
          *local_2c = (byte)(uVar10 << 6) | (byte)(uVar10 << 4) | (byte)(uVar10 << 2) | (byte)uVar10
          ;
          if (uVar14 == 6) {
            local_30 = local_30 + -1;
            uVar14 = 0;
          }
          else {
            uVar14 = uVar14 + 2;
          }
          local_2c = local_2c + -1;
        }
      }
      else if (bVar1 == 4) {
        uVar13 = (uVar13 & 0xf) * 0x11;
        pbVar12 = (byte *)(param_2 + (iVar15 - 1U >> 1));
        local_30 = (byte *)(param_2 + (iVar15 - 1U));
        iVar18 = (uint)((iVar15 + 1U & 1) == 0) * 4;
        for (local_2c = (byte *)0x0; local_2c != (byte *)iVar15;
            local_2c = (byte *)((int)local_2c + 1)) {
          uVar14 = (int)(uint)*pbVar12 >> iVar18 & 0xf;
          *local_30 = (byte)uVar14 | (byte)(uVar14 << 4);
          if (iVar18 == 4) {
            pbVar12 = pbVar12 + -1;
            iVar18 = 0;
          }
          else {
            iVar18 = 4;
          }
          local_30 = local_30 + -1;
        }
      }
      else if (bVar1 == 1) {
        uVar13 = (uVar13 & 1) * 0xff;
        pbVar12 = (byte *)((iVar15 - 1U >> 3) + param_2);
        local_30 = (byte *)(param_2 + (iVar15 - 1U));
        uVar14 = ~(iVar15 + 7U) & 7;
        for (iVar18 = 0; iVar18 != iVar15; iVar18 = iVar18 + 1) {
          uVar10 = (int)(uint)*pbVar12 >> (uVar14 & 0xff) & 1;
          local_2c._0_1_ = (undefined1)uVar10;
          if (uVar10 != 0) {
            local_2c._0_1_ = 0xff;
          }
          *local_30 = local_2c._0_1_;
          if (uVar14 == 7) {
            pbVar12 = pbVar12 + -1;
            uVar14 = 0;
          }
          else {
            uVar14 = uVar14 + 1;
          }
          local_30 = local_30 + -1;
        }
      }
      *(undefined1 *)((int)param_1 + 9) = 8;
      *(undefined1 *)((int)param_1 + 0xb) = 8;
      param_1[1] = iVar15;
    }
    if (param_3 == 0) {
      return;
    }
    if (*(char *)((int)param_1 + 9) == '\b') {
      pbVar17 = (byte *)(param_2 + iVar15 + -1);
      pbVar12 = (byte *)(param_2 + iVar15 * 2);
      for (iVar18 = 0; iVar18 != iVar15; iVar18 = iVar18 + 1) {
        if ((uint)*pbVar17 == (uVar13 & 0xff)) {
          pbVar12[-1] = 0;
        }
        else {
          pbVar12[-1] = 0xff;
        }
        bVar1 = *pbVar17;
        pbVar17 = pbVar17 + -1;
        pbVar12[-2] = bVar1;
        pbVar12 = pbVar12 + -2;
      }
    }
    else if (*(char *)((int)param_1 + 9) == '\x10') {
      pbVar12 = (byte *)(param_2 + param_1[1] + -1);
      puVar8 = (undefined1 *)(param_2 + param_1[1] * 2 + -1);
      for (iVar18 = 0; iVar18 != iVar15; iVar18 = iVar18 + 1) {
        pbVar17 = pbVar12 + -1;
        if (((uint)*pbVar17 == uVar13 >> 8) && ((uint)*pbVar12 == (uVar13 & 0xff))) {
          *puVar8 = 0;
          puVar8[-1] = 0;
        }
        else {
          *puVar8 = 0xff;
          puVar8[-1] = 0xff;
        }
        bVar1 = *pbVar12;
        pbVar12 = pbVar12 + -2;
        puVar8[-2] = bVar1;
        pbVar19 = puVar8 + -3;
        puVar8 = puVar8 + -4;
        *pbVar19 = *pbVar17;
      }
    }
    *(undefined1 *)(param_1 + 2) = 4;
    *(undefined1 *)((int)param_1 + 10) = 2;
    uVar13 = (uint)*(byte *)((int)param_1 + 9) << 1;
  }
  else {
    if (param_3 == 0) {
      return;
    }
    if ((char)param_1[2] != '\x02') {
      return;
    }
    if (*(char *)((int)param_1 + 9) == '\b') {
      cVar2 = *(char *)(param_3 + 2);
      cVar3 = *(char *)(param_3 + 4);
      cVar4 = *(char *)(param_3 + 6);
      pcVar11 = (char *)(param_2 + param_1[1] + -1);
      pcVar9 = (char *)(param_2 + iVar15 * 4 + -2);
      for (iVar18 = 0; iVar18 != iVar15; iVar18 = iVar18 + 1) {
        pcVar20 = pcVar11 + -2;
        if (((*pcVar20 == cVar2) && (pcVar11[-1] == cVar3)) && (*pcVar11 == cVar4)) {
          pcVar9[1] = '\0';
        }
        else {
          pcVar9[1] = -1;
        }
        *pcVar9 = *pcVar11;
        pcVar16 = pcVar11 + -1;
        pcVar11 = pcVar11 + -3;
        pcVar9[-1] = *pcVar16;
        pcVar16 = pcVar9 + -2;
        pcVar9 = pcVar9 + -4;
        *pcVar16 = *pcVar20;
      }
    }
    else if (*(char *)((int)param_1 + 9) == '\x10') {
      uVar5 = *(ushort *)(param_3 + 2);
      uVar6 = *(ushort *)(param_3 + 4);
      uVar7 = *(ushort *)(param_3 + 6);
      pbVar12 = (byte *)(param_2 + param_1[1] + -1);
      puVar8 = (undefined1 *)(param_2 + iVar15 * 8 + -1);
      for (iVar18 = 0; iVar18 != iVar15; iVar18 = iVar18 + 1) {
        pbVar17 = pbVar12 + -5;
        if ((((((ushort)*pbVar17 == uVar5 >> 8) && ((ushort)pbVar12[-4] == (uVar5 & 0xff))) &&
             ((ushort)pbVar12[-3] == uVar6 >> 8)) &&
            (((ushort)pbVar12[-2] == (uVar6 & 0xff) && ((ushort)pbVar12[-1] == uVar7 >> 8)))) &&
           ((ushort)*pbVar12 == (uVar7 & 0xff))) {
          *puVar8 = 0;
          puVar8[-1] = 0;
        }
        else {
          *puVar8 = 0xff;
          puVar8[-1] = 0xff;
        }
        puVar8[-2] = *pbVar12;
        puVar8[-3] = pbVar12[-1];
        puVar8[-4] = pbVar12[-2];
        puVar8[-5] = pbVar12[-3];
        puVar8[-6] = pbVar12[-4];
        pbVar12 = pbVar12 + -6;
        puVar8[-7] = *pbVar17;
        puVar8 = puVar8 + -8;
      }
    }
    *(undefined1 *)(param_1 + 2) = 6;
    *(undefined1 *)((int)param_1 + 10) = 4;
    uVar13 = (uint)*(byte *)((int)param_1 + 9) << 2;
  }
  uVar14 = uVar13 & 0xff;
  *(char *)((int)param_1 + 0xb) = (char)uVar13;
  if (uVar14 < 8) {
    uVar13 = uVar14 * iVar15 + 7 >> 3;
  }
  else {
    uVar13 = (uVar14 >> 3) * iVar15;
  }
  param_1[1] = uVar13;
  return;
}


