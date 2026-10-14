/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e24bc png_combine_row */

void png_combine_row(int param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  size_t __n;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  byte *local_30;
  byte *local_28;
  byte *local_24;
  
  bVar6 = *(byte *)(param_1 + DAT_002e27b0);
  uVar9 = (uint)bVar6;
  iVar7 = *(int *)(param_1 + 0x1e4);
  uVar12 = *(uint *)(param_1 + 0x1c0);
  bVar2 = *(byte *)(param_1 + DAT_002e27b4);
  uVar13 = (uint)bVar2;
  if (uVar9 == 0) {
    iVar4 = DAT_002e27b8 + 0x2e24e4;
  }
  else {
    if (*(uint *)(param_1 + 0x1f8) == 0) goto LAB_002e250c;
    if (uVar9 < 8) {
      uVar5 = uVar9 * uVar12 + 7 >> 3;
    }
    else {
      uVar5 = uVar12 * (bVar6 >> 3);
    }
    if (*(uint *)(param_1 + 0x1f8) == uVar5) goto LAB_002e250c;
    iVar4 = DAT_002e27bc + 0x2e250a;
  }
  while( true ) {
    while( true ) {
      param_1 = png_error(param_1,iVar4);
LAB_002e250c:
      if (uVar12 != 0) break;
      iVar4 = DAT_002e27c0 + 0x2e2516;
    }
    uVar5 = uVar9 * uVar12;
    uVar11 = uVar5 & 7;
    if (uVar11 == 0) {
      bVar10 = 0;
      local_24 = (byte *)0x0;
      bVar1 = 0;
    }
    else {
      if (uVar9 < 8) {
        uVar8 = uVar5 + 7 >> 3;
      }
      else {
        uVar8 = uVar12 * (bVar6 >> 3);
      }
      local_24 = param_2 + (uVar8 - 1);
      bVar1 = *local_24;
      if (*(int *)(param_1 + 0x13c) << 0xf < 0) {
        bVar10 = (byte)(0xff << uVar11);
      }
      else {
        bVar10 = (byte)(0xff >> uVar11);
      }
    }
    local_28 = (byte *)(iVar7 + 1);
    if ((((*(char *)(param_1 + 0x214) == '\0') || (uVar11 = *(uint *)(param_1 + 0x13c), 5 < uVar13))
        || (-1 < (int)(uVar11 << 0x1e))) ||
       ((param_3 != 0 && ((param_3 != 1 || ((bVar2 & 1) == 0)))))) {
      if (uVar9 < 8) {
        __n = uVar5 + 7 >> 3;
      }
      else {
        __n = (bVar6 >> 3) * uVar12;
      }
      memcpy(param_2,local_28,__n);
      goto LAB_002e2810;
    }
    uVar5 = (uVar13 & 1) << (3 - (uVar13 + 1 >> 1) & 0xff) & 7;
    if (uVar12 <= uVar5) {
      return;
    }
    if (uVar9 < 8) break;
    if ((bVar6 & 7) == 0) {
      uVar11 = (uint)(bVar6 >> 3);
      iVar7 = uVar11 * uVar5;
      param_2 = param_2 + iVar7;
      uVar12 = uVar11 * uVar12 - iVar7;
      local_28 = local_28 + iVar7;
      uVar9 = uVar11;
      if ((param_3 != 0) &&
         (uVar5 = uVar11 << (6 - uVar13 >> 1 & 0xff), uVar9 = uVar12, uVar5 < uVar12)) {
        uVar9 = uVar5;
      }
      uVar11 = uVar11 << (7 - uVar13 >> 1 & 0xff);
      if (uVar9 == 2) {
        do {
          *param_2 = *local_28;
          param_2[1] = local_28[1];
          if (uVar12 <= uVar11) {
            return;
          }
          local_28 = local_28 + uVar11;
          param_2 = param_2 + uVar11;
          uVar12 = uVar12 - uVar11;
        } while (1 < uVar12);
        *param_2 = *local_28;
      }
      else if (uVar9 == 3) {
        while( true ) {
          *param_2 = *local_28;
          param_2[1] = local_28[1];
          param_2[2] = local_28[2];
          if (uVar12 <= uVar11) break;
          local_28 = local_28 + uVar11;
          param_2 = param_2 + uVar11;
          uVar12 = uVar12 - uVar11;
        }
      }
      else if (uVar9 == 1) {
        for (; *param_2 = *local_28, uVar11 < uVar12; uVar12 = uVar12 - uVar11) {
          param_2 = param_2 + uVar11;
          local_28 = local_28 + uVar11;
        }
      }
      else if ((((uVar9 < 0x10) && (((uint)param_2 & 1) == 0)) && (((uint)local_28 & 1) == 0)) &&
              (((uVar9 & 1) == 0 && ((uVar11 & 1) == 0)))) {
        if (((((uint)param_2 & 3) == 0) && (((uint)local_28 & 3) == 0)) &&
           (((uVar9 & 3) == 0 && ((uVar11 & 3) == 0)))) {
          uVar5 = uVar11 - uVar9 & 0xfffffffc;
          uVar13 = uVar9;
          do {
            do {
              uVar14 = *(undefined4 *)local_28;
              local_28 = local_28 + 4;
              uVar13 = uVar13 - 4;
              *(undefined4 *)param_2 = uVar14;
              param_2 = param_2 + 4;
            } while (uVar13 != 0);
            if (uVar12 <= uVar11) {
              return;
            }
            param_2 = param_2 + uVar5;
            local_28 = local_28 + uVar5;
            uVar12 = uVar12 - uVar11;
            uVar13 = uVar9;
          } while (uVar9 <= uVar12);
          do {
            bVar6 = *local_28;
            uVar12 = uVar12 - 1;
            local_28 = local_28 + 1;
            *param_2 = bVar6;
            param_2 = param_2 + 1;
          } while (uVar12 != 0);
        }
        else {
          uVar5 = uVar11 - uVar9 & 0xfffffffe;
          uVar13 = uVar9;
          do {
            do {
              uVar3 = *(undefined2 *)local_28;
              uVar13 = uVar13 - 2;
              local_28 = local_28 + 2;
              *(undefined2 *)param_2 = uVar3;
              param_2 = param_2 + 2;
            } while (uVar13 != 0);
            if (uVar12 <= uVar11) {
              return;
            }
            param_2 = param_2 + uVar5;
            local_28 = local_28 + uVar5;
            uVar12 = uVar12 - uVar11;
            uVar13 = uVar9;
          } while (uVar9 <= uVar12);
          do {
            bVar6 = *local_28;
            uVar12 = uVar12 - 1;
            local_28 = local_28 + 1;
            *param_2 = bVar6;
            param_2 = param_2 + 1;
          } while (uVar12 != 0);
        }
      }
      else {
        iVar7 = (int)local_28 - (int)param_2;
        while (memcpy(param_2,param_2 + iVar7,uVar9), uVar11 < uVar12) {
          param_2 = param_2 + uVar11;
          uVar12 = uVar12 - uVar11;
          if (uVar12 < uVar9) {
            uVar9 = uVar12;
          }
        }
      }
      return;
    }
    iVar4 = DAT_002e27d4 + 0x2e2696;
  }
  uVar5 = __udivsi3(8,uVar9);
  local_30 = param_2;
  if ((uVar11 & 0x10000) == 0) {
    if (param_3 != 0) {
      iVar7 = 0;
      if (uVar9 != 1) {
        iVar7 = 2 - (uint)(uVar9 == 2);
      }
      iVar4 = DAT_002e27cc + 0x2e2620;
      iVar7 = (iVar7 * 3 + (uint)(bVar2 >> 1) + 9) * 4;
      goto LAB_002e2620;
    }
    iVar7 = 0;
    if (uVar9 != 1) {
      iVar7 = 2 - (uint)(uVar9 == 2);
    }
    iVar7 = iVar7 * 6 + uVar13 + 0x12;
    iVar4 = DAT_002e27d0 + 0x2e2640;
  }
  else {
    if (param_3 != 0) {
      iVar4 = 0;
      if (uVar9 != 1) {
        iVar4 = 2 - (uint)(uVar9 == 2);
      }
      iVar7 = DAT_002e27c4 + 0x2e25e2;
      iVar4 = (iVar4 * 3 + (uint)(bVar2 >> 1)) * 4;
LAB_002e2620:
      uVar9 = *(uint *)(iVar7 + iVar4);
      goto LAB_002e2648;
    }
    iVar7 = 0;
    if (uVar9 != 1) {
      iVar7 = 2 - (uint)(uVar9 == 2);
    }
    iVar7 = iVar7 * 6 + uVar13;
    iVar4 = DAT_002e27c8 + 0x2e25fe;
  }
  uVar9 = *(uint *)(iVar4 + iVar7 * 4 + 0x48);
LAB_002e2648:
  while( true ) {
    if ((uVar9 & 0xff) != 0) {
      if ((uVar9 & 0xff) == 0xff) {
        bVar6 = *local_28;
      }
      else {
        bVar6 = (byte)uVar9 & *local_28 | *local_30 & ~(byte)uVar9;
      }
      *local_30 = bVar6;
    }
    if (uVar12 <= uVar5) break;
    uVar12 = uVar12 - uVar5;
    local_30 = local_30 + 1;
    local_28 = local_28 + 1;
    uVar9 = uVar9 >> 8 | uVar9 << 0x18;
  }
LAB_002e2810:
  if (local_24 == (byte *)0x0) {
    return;
  }
  *local_24 = bVar10 & bVar1 | *local_24 & ~bVar10;
  return;
}


