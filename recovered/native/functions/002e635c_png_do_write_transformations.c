/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e635c png_do_write_transformations */

void png_do_write_transformations(int param_1,int *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined1 uVar5;
  uint uVar6;
  byte bVar7;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  byte *pbVar15;
  uint uVar16;
  int local_50;
  uint local_38 [4];
  uint local_28 [5];
  
  if (param_1 == 0) {
    return;
  }
  if ((*(int *)(param_1 + 0x13c) << 0xb < 0) && (*(code **)(param_1 + 0x128) != (code *)0x0)) {
    (**(code **)(param_1 + 0x128))(param_1,param_2,*(int *)(param_1 + 0x1e4) + 1);
  }
  if (*(int *)(param_1 + 0x13c) << 0x10 < 0) {
    png_do_strip_channel
              (param_2,*(int *)(param_1 + 0x1e4) + 1,(*(uint *)(param_1 + 0x138) & 0x80) == 0);
  }
  if (*(int *)(param_1 + 0x13c) << 0xf < 0) {
    png_do_packswap(param_2,*(int *)(param_1 + 0x1e4) + 1);
  }
  if (-1 < *(int *)(param_1 + 0x13c) << 0x1d) goto LAB_002e64c2;
  iVar12 = *(int *)(param_1 + 0x1e4);
  cVar3 = *(char *)(param_1 + 0x218);
  if ((param_2[2] & DAT_002e6704) != 0x10800) goto LAB_002e64c2;
  iVar13 = *param_2;
  puVar10 = (undefined1 *)(iVar12 + 1);
  if (cVar3 == '\x02') {
    uVar6 = 0;
    uVar8 = 6;
    for (iVar14 = 0; uVar5 = (undefined1)uVar6, iVar14 != iVar13; iVar14 = iVar14 + 1) {
      uVar6 = uVar6 | (*(byte *)(iVar12 + iVar14 + 1) & 3) << (uVar8 & 0xff);
      if (uVar8 == 0) {
        *puVar10 = (char)uVar6;
        puVar10 = puVar10 + 1;
        uVar8 = 6;
        uVar6 = 0;
      }
      else {
        uVar8 = uVar8 - 2;
      }
    }
    if (uVar8 != 6) {
LAB_002e64a0:
      *puVar10 = uVar5;
    }
  }
  else if (cVar3 == '\x04') {
    uVar8 = 0;
    uVar6 = 4;
    for (iVar14 = 0; uVar5 = (undefined1)uVar8, iVar14 != iVar13; iVar14 = iVar14 + 1) {
      uVar8 = uVar8 | (*(byte *)(iVar12 + iVar14 + 1) & 0xf) << (uVar6 & 0xff);
      if (uVar6 == 0) {
        *puVar10 = (char)uVar8;
        puVar10 = puVar10 + 1;
        uVar6 = 4;
        uVar8 = 0;
      }
      else {
        uVar6 = uVar6 - 4;
      }
    }
    if (uVar6 != 4) goto LAB_002e64a0;
  }
  else if (cVar3 == '\x01') {
    uVar6 = 0;
    uVar8 = 0x80;
    for (iVar14 = 0; uVar5 = (undefined1)uVar6, iVar14 != iVar13; iVar14 = iVar14 + 1) {
      if (*(char *)(iVar12 + iVar14 + 1) != '\0') {
        uVar6 = uVar6 | uVar8;
      }
      if (uVar8 < 2) {
        *puVar10 = (char)uVar6;
        uVar8 = 0x80;
        puVar10 = puVar10 + 1;
        uVar6 = 0;
      }
      else {
        uVar8 = (int)uVar8 >> 1;
      }
    }
    if (uVar8 != 0x80) goto LAB_002e64a0;
  }
  *(char *)((int)param_2 + 9) = cVar3;
  bVar7 = *(char *)((int)param_2 + 10) * cVar3;
  *(byte *)((int)param_2 + 0xb) = bVar7;
  if (bVar7 < 8) {
    uVar6 = *param_2 * (uint)bVar7 + 7 >> 3;
  }
  else {
    uVar6 = *param_2 * (uint)(bVar7 >> 3);
  }
  param_2[1] = uVar6;
LAB_002e64c2:
  if (*(int *)(param_1 + 0x13c) << 0x1b < 0) {
    png_do_swap(param_2,*(int *)(param_1 + 0x1e4) + 1);
  }
  if (*(int *)(param_1 + 0x13c) << 0x1c < 0) {
    uVar6 = (uint)*(byte *)(param_2 + 2);
    iVar12 = *(int *)(param_1 + 0x1e4);
    if (uVar6 != 3) {
      uVar8 = (uint)*(byte *)((int)param_2 + 9);
      if ((int)(uVar6 << 0x1e) < 0) {
        bVar7 = *(byte *)(param_1 + DAT_002e6708);
        local_28[1] = (uint)*(byte *)(param_1 + DAT_002e6708 + 1);
        local_38[1] = uVar8 - local_28[1];
        local_28[2] = (uint)*(byte *)(param_1 + DAT_002e6708 + 2);
        local_38[2] = uVar8 - local_28[2];
        iVar13 = 3;
      }
      else {
        bVar7 = *(byte *)(param_1 + DAT_002e6708 + 3);
        iVar13 = 1;
      }
      local_28[0] = (uint)bVar7;
      local_38[0] = uVar8 - local_28[0];
      iVar14 = iVar13;
      if ((int)(uVar6 << 0x1d) < 0) {
        iVar14 = iVar13 + 1;
        uVar6 = (uint)*(byte *)(param_1 + DAT_002e6708 + 4);
        local_38[iVar13] = uVar8 - uVar6;
        local_28[iVar13] = uVar6;
      }
      pbVar15 = (byte *)(iVar12 + 1);
      if (uVar8 < 8) {
        iVar13 = param_2[1];
        cVar3 = *(char *)(param_1 + DAT_002e6708 + 3);
        if ((((cVar3 != '\x01') || (uVar6 = 0x55, uVar8 != 2)) && (uVar6 = 0xff, uVar8 == 4)) &&
           (uVar6 = 0x11, cVar3 != '\x03')) {
          uVar6 = 0xff;
        }
        for (iVar14 = 1; iVar14 != iVar13 + 1; iVar14 = iVar14 + 1) {
          uVar9 = 0;
          uVar16 = -local_38[0];
          for (uVar8 = local_38[0]; (int)-local_28[0] < (int)uVar8; uVar8 = uVar8 + -local_28[0]) {
            if ((int)uVar8 < 1) {
              uVar11 = *(byte *)(iVar12 + iVar14) >> (uVar16 & 0xff) & uVar6;
            }
            else {
              uVar11 = (uint)*(byte *)(iVar12 + iVar14) << (uVar8 & 0xff);
            }
            uVar9 = uVar9 | uVar11;
            uVar16 = uVar16 + local_28[0];
          }
          *(char *)(iVar12 + iVar14) = (char)uVar9;
        }
      }
      else {
        iVar13 = *param_2;
        if (uVar8 == 8) {
          for (local_50 = 0; local_50 != iVar14 * iVar13; local_50 = local_50 + 1) {
            __aeabi_uidivmod(local_50,iVar14);
            uVar16 = local_38[extraout_r1];
            uVar6 = -uVar16;
            iVar4 = -local_28[extraout_r1];
            uVar8 = 0;
            for (; iVar4 < (int)uVar16; uVar16 = uVar16 + iVar4) {
              if ((int)uVar16 < 1) {
                uVar9 = (uint)(*(byte *)(iVar12 + 1) >> (uVar6 & 0xff));
              }
              else {
                uVar9 = (uint)*(byte *)(iVar12 + 1) << (uVar16 & 0xff);
              }
              uVar8 = uVar8 | uVar9;
              uVar6 = uVar6 + local_28[extraout_r1];
            }
            *(char *)(iVar12 + 1) = (char)uVar8;
            iVar12 = iVar12 + 1;
          }
        }
        else {
          for (iVar12 = 0; iVar12 != iVar14 * iVar13; iVar12 = iVar12 + 1) {
            __aeabi_uidivmod(iVar12,iVar14);
            uVar16 = local_38[extraout_r1_00];
            uVar8 = (uint)*pbVar15 * 0x100 + (uint)pbVar15[1] & 0xffff;
            iVar4 = -local_28[extraout_r1_00];
            uVar9 = 0;
            uVar6 = -uVar16;
            for (; iVar4 < (int)uVar16; uVar16 = uVar16 + iVar4) {
              if ((int)uVar16 < 1) {
                uVar11 = uVar8 >> (uVar6 & 0xff);
              }
              else {
                uVar11 = uVar8 << (uVar16 & 0xff);
              }
              uVar9 = uVar9 | uVar11;
              uVar6 = uVar6 + local_28[extraout_r1_00];
            }
            *pbVar15 = (byte)(uVar9 >> 8);
            pbVar15[1] = (byte)uVar9;
            pbVar15 = pbVar15 + 2;
          }
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x13c) << 0xe < 0) {
    puVar10 = (undefined1 *)(*(int *)(param_1 + 0x1e4) + 1);
    if ((char)param_2[2] == '\x06') {
      iVar12 = *param_2;
      iVar13 = 0;
      if (*(char *)((int)param_2 + 9) == '\b') {
        for (; iVar13 != iVar12; iVar13 = iVar13 + 1) {
          uVar5 = *puVar10;
          *puVar10 = puVar10[1];
          puVar10[1] = puVar10[2];
          uVar1 = puVar10[3];
          puVar10[3] = uVar5;
          puVar10[2] = uVar1;
          puVar10 = puVar10 + 4;
        }
      }
      else {
        for (; iVar13 != iVar12; iVar13 = iVar13 + 1) {
          uVar5 = *puVar10;
          uVar1 = puVar10[1];
          *puVar10 = puVar10[2];
          puVar10[1] = puVar10[3];
          puVar10[2] = puVar10[4];
          puVar10[3] = puVar10[5];
          uVar2 = puVar10[6];
          puVar10[6] = uVar5;
          puVar10[4] = uVar2;
          uVar5 = puVar10[7];
          puVar10[7] = uVar1;
          puVar10[5] = uVar5;
          puVar10 = puVar10 + 8;
        }
      }
    }
    else if ((char)param_2[2] == '\x04') {
      iVar12 = *param_2;
      iVar13 = 0;
      if (*(char *)((int)param_2 + 9) == '\b') {
        for (; iVar13 != iVar12; iVar13 = iVar13 + 1) {
          uVar5 = puVar10[1];
          puVar10[1] = *puVar10;
          *puVar10 = uVar5;
          puVar10 = puVar10 + 2;
        }
      }
      else {
        for (; iVar13 != iVar12; iVar13 = iVar13 + 1) {
          uVar5 = *puVar10;
          *puVar10 = puVar10[2];
          uVar1 = puVar10[3];
          puVar10[2] = uVar5;
          puVar10[3] = puVar10[1];
          puVar10[1] = uVar1;
          puVar10 = puVar10 + 4;
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x13c) << 0xc < 0) {
    iVar12 = *(int *)(param_1 + 0x1e4) + 1;
    if ((char)param_2[2] == '\x06') {
      iVar13 = *param_2;
      iVar14 = 0;
      if (*(char *)((int)param_2 + 9) == '\b') {
        for (; iVar14 != iVar13; iVar14 = iVar14 + 1) {
          *(byte *)(iVar12 + 3) = ~*(byte *)(iVar12 + 3);
          iVar12 = iVar12 + 4;
        }
      }
      else {
        for (; iVar14 != iVar13; iVar14 = iVar14 + 1) {
          *(byte *)(iVar12 + 6) = ~*(byte *)(iVar12 + 6);
          *(byte *)(iVar12 + 7) = ~*(byte *)(iVar12 + 7);
          iVar12 = iVar12 + 8;
        }
      }
    }
    else if ((char)param_2[2] == '\x04') {
      iVar13 = *param_2;
      iVar14 = 0;
      if (*(char *)((int)param_2 + 9) == '\b') {
        for (; iVar14 != iVar13; iVar14 = iVar14 + 1) {
          *(byte *)(iVar12 + 1) = ~*(byte *)(iVar12 + 1);
          iVar12 = iVar12 + 2;
        }
      }
      else {
        for (; iVar14 != iVar13; iVar14 = iVar14 + 1) {
          *(byte *)(iVar12 + 2) = ~*(byte *)(iVar12 + 2);
          *(byte *)(iVar12 + 3) = ~*(byte *)(iVar12 + 3);
          iVar12 = iVar12 + 4;
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x13c) << 0x1f < 0) {
    png_do_bgr(param_2,*(int *)(param_1 + 0x1e4) + 1);
  }
  if (*(int *)(param_1 + 0x13c) << 0x1a < 0) {
    png_do_invert(param_2,*(int *)(param_1 + 0x1e4) + 1);
  }
  return;
}


