/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002653a4 FUN_002653a4 */

ushort FUN_002653a4(undefined4 *param_1,uint param_2)

{
  undefined1 uVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  undefined1 local_20;
  
  if ((*(ushort *)(param_1 + 7) & 2) == 0) {
    return *(ushort *)(param_1 + 7) & 2;
  }
  if (*(byte *)((int)param_1 + 0x1f) == param_2) {
    return 0;
  }
  uVar8 = param_2 & 0xff;
  local_20 = (undefined1)param_2;
  if ((uVar8 != 1) && (*(byte *)((int)param_1 + 0x1f) != 1)) {
    iVar5 = FUN_00265354(param_1);
    if (iVar5 != 0) {
      return 7;
    }
    puVar12 = (undefined1 *)param_1[1];
    puVar11 = puVar12 + (param_1[6] & 0xfffffffe);
    for (; puVar12 < puVar11; puVar12 = puVar12 + 2) {
      uVar1 = puVar12[1];
      puVar12[1] = *puVar12;
      *puVar12 = uVar1;
    }
    *(undefined1 *)((int)param_1 + 0x1f) = local_20;
    return 0;
  }
  if (uVar8 == 1) {
    uVar9 = param_1[6] & 0xfffffffe;
    param_1[6] = uVar9;
    iVar5 = uVar9 * 2 + 1;
  }
  else {
    iVar5 = (param_1[6] + 1) * 2;
  }
  pbVar14 = (byte *)param_1[1];
  iVar15 = param_1[6];
  pbVar6 = (byte *)FUN_0025ee10(*param_1,iVar5);
  uVar9 = DAT_00265724;
  iVar4 = DAT_00265714;
  iVar5 = DAT_00265710;
  if (pbVar6 == (byte *)0x0) {
    return 7;
  }
  pbVar10 = pbVar14 + iVar15;
  if (*(char *)((int)param_1 + 0x1f) == '\x01') {
    pbVar13 = pbVar6;
    if (uVar8 == 2) {
      while (iVar5 = DAT_00265720, pbVar14 < pbVar10) {
        uVar8 = (uint)*pbVar14;
        pbVar14 = pbVar14 + 1;
        if (uVar8 < 0xc0) {
LAB_00265498:
          *pbVar13 = (byte)uVar8;
          pbVar13[1] = (byte)(uVar8 >> 8);
          pbVar13 = pbVar13 + 2;
        }
        else {
          uVar9 = (uint)*(byte *)(uVar8 + iVar4 + 0x26538c);
          for (; (pbVar14 != pbVar10 && ((*pbVar14 & 0xc0) == 0x80)); pbVar14 = pbVar14 + 1) {
            uVar9 = (*pbVar14 & 0x3f) + uVar9 * 0x40;
          }
          uVar8 = DAT_00265730;
          if ((((uVar9 < 0x80) || (uVar9 >> 0xb == 0x1b)) || ((uVar9 & 0xfffffffe) == DAT_00265718))
             || (uVar8 = uVar9, uVar9 <= DAT_0026571c)) goto LAB_00265498;
          pbVar13[2] = (byte)uVar9;
          *pbVar13 = ((byte)(uVar9 + iVar5 >> 10) & 0xc0) + ((byte)(uVar9 >> 10) & 0x3f);
          pbVar13[1] = ((byte)(uVar9 + iVar5 >> 0x12) & 3) - 0x28;
          pbVar13[3] = ((byte)(uVar9 >> 8) & 3) - 0x24;
          pbVar13 = pbVar13 + 4;
        }
      }
    }
    else {
      while (iVar4 = DAT_00265720, pbVar14 < pbVar10) {
        uVar8 = (uint)*pbVar14;
        pbVar14 = pbVar14 + 1;
        if (uVar8 < 0xc0) {
LAB_00265522:
          *pbVar13 = (byte)(uVar8 >> 8);
          pbVar13[1] = (byte)uVar8;
          pbVar13 = pbVar13 + 2;
        }
        else {
          uVar9 = (uint)*(byte *)(uVar8 + iVar5 + 0x265384);
          for (; (pbVar14 != pbVar10 && ((*pbVar14 & 0xc0) == 0x80)); pbVar14 = pbVar14 + 1) {
            uVar9 = (*pbVar14 & 0x3f) + uVar9 * 0x40;
          }
          uVar8 = DAT_00265730;
          if (((uVar9 < 0x80) || (uVar9 >> 0xb == 0x1b)) ||
             (((uVar9 & 0xfffffffe) == DAT_00265718 || (uVar8 = uVar9, uVar9 <= DAT_0026571c))))
          goto LAB_00265522;
          pbVar13[3] = (byte)uVar9;
          *pbVar13 = ((byte)(uVar9 + iVar4 >> 0x12) & 3) - 0x28;
          pbVar13[1] = ((byte)(uVar9 + iVar4 >> 10) & 0xc0) + ((byte)(uVar9 >> 10) & 0x3f);
          pbVar13[2] = ((byte)(uVar9 >> 8) & 3) - 0x24;
          pbVar13 = pbVar13 + 4;
        }
      }
    }
    param_1[6] = (int)pbVar13 - (int)pbVar6;
    *pbVar13 = 0;
    pbVar13 = pbVar13 + 1;
  }
  else {
    pbVar13 = pbVar6;
    if (*(char *)((int)param_1 + 0x1f) == '\x02') {
      while (pbVar14 < pbVar10) {
        uVar8 = (uint)pbVar14[1] * 0x100 + (uint)*pbVar14;
        pbVar7 = pbVar14 + 2;
        if ((uVar8 + DAT_00265728 <= uVar9) && (pbVar7 < pbVar10)) {
          pbVar7 = pbVar14 + 4;
          uVar8 = (((uint)*pbVar14 << 0x1a) >> 0x10) +
                  ((uint)pbVar14[2] + (uint)pbVar14[3] * 0x100 & 0x3ff) +
                  ((uVar8 & 0x3c0) + 0x40) * 0x400;
        }
        bVar2 = (byte)uVar8;
        pbVar14 = pbVar7;
        if (uVar8 < 0x80) {
          *pbVar13 = bVar2;
          pbVar13 = pbVar13 + 1;
        }
        else if (DAT_00265724 < uVar8) {
          if (DAT_0026571c < uVar8) {
            *pbVar13 = (byte)((uVar8 << 0xb) >> 0x1d) - 0x10;
            pbVar13[1] = ((byte)(uVar8 >> 0xc) & 0x3f) + 0x80;
            pbVar13[2] = ((byte)(uVar8 >> 6) & 0x3f) + 0x80;
            pbVar13[3] = (bVar2 & 0x3f) + 0x80;
            pbVar13 = pbVar13 + 4;
          }
          else {
            *pbVar13 = (char)(uVar8 >> 0xc) - 0x20;
            pbVar13[1] = ((byte)(uVar8 >> 6) & 0x3f) + 0x80;
            pbVar13[2] = (bVar2 & 0x3f) + 0x80;
            pbVar13 = pbVar13 + 3;
          }
        }
        else {
          *pbVar13 = (char)(uVar8 >> 6) - 0x40;
          pbVar13[1] = (bVar2 & 0x3f) + 0x80;
          pbVar13 = pbVar13 + 2;
        }
      }
    }
    else {
      while (pbVar14 < pbVar10) {
        uVar8 = (uint)*pbVar14 * 0x100 + (uint)pbVar14[1];
        pbVar7 = pbVar14 + 2;
        if ((uVar8 + DAT_00265728 <= uVar9) && (pbVar7 < pbVar10)) {
          pbVar7 = pbVar14 + 4;
          uVar8 = (((uint)pbVar14[1] << 0x1a) >> 0x10) +
                  ((uint)pbVar14[2] * 0x100 + (uint)pbVar14[3] & 0x3ff) +
                  ((uVar8 & 0x3c0) + 0x40) * 0x400;
        }
        bVar2 = (byte)uVar8;
        pbVar14 = pbVar7;
        if (uVar8 < 0x80) {
          *pbVar13 = bVar2;
          pbVar13 = pbVar13 + 1;
        }
        else if (DAT_00265724 < uVar8) {
          if (DAT_0026571c < uVar8) {
            *pbVar13 = (byte)((uVar8 << 0xb) >> 0x1d) - 0x10;
            pbVar13[1] = ((byte)(uVar8 >> 0xc) & 0x3f) + 0x80;
            pbVar13[2] = ((byte)(uVar8 >> 6) & 0x3f) + 0x80;
            pbVar13[3] = (bVar2 & 0x3f) + 0x80;
            pbVar13 = pbVar13 + 4;
          }
          else {
            *pbVar13 = (char)(uVar8 >> 0xc) - 0x20;
            pbVar13[1] = ((byte)(uVar8 >> 6) & 0x3f) + 0x80;
            pbVar13[2] = (bVar2 & 0x3f) + 0x80;
            pbVar13 = pbVar13 + 3;
          }
        }
        else {
          *pbVar13 = (char)(uVar8 >> 6) - 0x40;
          pbVar13[1] = (bVar2 & 0x3f) + 0x80;
          pbVar13 = pbVar13 + 2;
        }
      }
    }
    param_1[6] = (int)pbVar13 - (int)pbVar6;
  }
  *pbVar13 = 0;
  FUN_00263730(param_1);
  uVar3 = (ushort)DAT_0026572c;
  *(undefined1 *)((int)param_1 + 0x1f) = local_20;
  *(ushort *)(param_1 + 7) = uVar3 & *(ushort *)(param_1 + 7) | 0x600;
  param_1[1] = pbVar6;
  param_1[9] = pbVar6;
  return 0;
}


