/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d9888 FUN_002d9888 */

void FUN_002d9888(undefined4 *param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                 uint param_6,int param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint local_2c;
  
  puVar3 = (undefined4 *)*param_1;
  iVar1 = DAT_002d9bd4 + 0x2d989e;
  iVar7 = 2 - (uint)((puVar3[4] & 4) == 0);
  bVar9 = (puVar3[4] & 2) == 0;
  bVar10 = param_4 != param_5;
  bVar11 = param_3 != param_4;
  if (param_2 < 0x100) {
    if (param_7 != 3) {
LAB_002d9992:
      if (param_7 == 4) {
        param_3 = param_3 * 0x101;
        param_4 = param_4 * 0x101;
        param_5 = param_5 * 0x101;
LAB_002d99c8:
        param_6 = param_6 * 0x101;
      }
      else {
        if (param_7 == 1) {
          if ((!bVar9 || !bVar10 && !bVar11) && (iVar7 != 2)) goto LAB_002d9c16;
          iVar8 = *(int *)(iVar1 + DAT_002d9be4);
          param_3 = (uint)*(ushort *)(param_3 * 2 + iVar8);
          param_4 = (uint)*(ushort *)(param_4 * 2 + iVar8);
          param_5 = (uint)*(ushort *)(param_5 * 2 + iVar8);
          goto LAB_002d99c8;
        }
        if (param_7 != 2) goto LAB_002d9a9a;
      }
      if (bVar9 && (bVar10 || bVar11)) {
        iVar8 = DAT_002d9be8 * param_4 + DAT_002d9bec * param_3 + DAT_002d9bf0 * param_5;
        if (iVar7 == 2) {
          param_5 = iVar8 + 0x4000U >> 0xf;
          param_4 = param_5;
          param_3 = param_5;
        }
        else {
          uVar4 = (iVar8 + 0x80U >> 8) * 0xff + 0x40;
          uVar5 = uVar4 >> 0x16;
          param_5 = ((uint)*(byte *)(*(int *)(iVar1 + DAT_002d9bdc) + uVar5) *
                     (uVar4 * 0x400 >> 0x11) >> 0xc) +
                    (uint)*(ushort *)(uVar5 * 2 + *(int *)(iVar1 + DAT_002d9be0)) >> 8 & 0xff;
          param_4 = param_5;
          param_3 = param_5;
        }
      }
      else if (iVar7 == 1) {
        uVar4 = param_3 * 0xff >> 0xf;
        iVar8 = *(int *)(iVar1 + DAT_002d9bdc);
        iVar1 = *(int *)(iVar1 + DAT_002d9be0);
        uVar5 = param_4 * 0xff >> 0xf;
        uVar6 = param_5 * 0xff >> 0xf;
        param_5 = ((uint)*(byte *)(iVar8 + uVar6) * (param_5 * 0x1fe0000 >> 0x11) >> 0xc) +
                  (uint)*(ushort *)(uVar6 * 2 + iVar1) >> 8 & 0xff;
        param_6 = param_6 * 0xff + DAT_002d9bf4 >> 0x10;
        param_4 = ((uint)*(byte *)(iVar8 + uVar5) * (param_4 * 0x1fe0000 >> 0x11) >> 0xc) +
                  (uint)*(ushort *)(uVar5 * 2 + iVar1) >> 8 & 0xff;
        param_3 = ((uint)*(byte *)(iVar8 + uVar4) * (param_3 * 0x1fe0000 >> 0x11) >> 0xc) +
                  (uint)*(ushort *)(uVar4 * 2 + iVar1) >> 8 & 0xff;
      }
      goto LAB_002d9aae;
    }
    if (param_1[8] == 0) {
      FUN_002d9834(param_1);
    }
    param_7 = param_1[8];
    if (param_7 != 3) goto LAB_002d9992;
    uVar2 = param_1[9];
    param_3 = png_gamma_16bit_correct(param_3 * 0x101);
    param_4 = png_gamma_16bit_correct(param_4 * 0x101,uVar2);
    param_5 = png_gamma_16bit_correct(param_5 * 0x101,uVar2);
    if ((bVar9 && (bVar10 || bVar11)) || (iVar7 == 2)) goto LAB_002d99c8;
    uVar4 = param_3 * 0xff >> 0xf;
    iVar8 = *(int *)(iVar1 + DAT_002d9bdc);
    iVar1 = *(int *)(iVar1 + DAT_002d9be0);
    uVar5 = param_4 * 0xff >> 0xf;
    uVar6 = param_5 * 0xff >> 0xf;
    param_3 = ((uint)*(byte *)(iVar8 + uVar4) * (param_3 * 0xff & 0x7fff) >> 0xc) +
              (uint)*(ushort *)(uVar4 * 2 + iVar1) >> 8 & 0xff;
    param_4 = ((uint)*(byte *)(iVar8 + uVar5) * (param_4 * 0xff & 0x7fff) >> 0xc) +
              (uint)*(ushort *)(uVar5 * 2 + iVar1) >> 8 & 0xff;
    param_5 = ((uint)*(byte *)(iVar8 + uVar6) * (param_5 * 0xff & 0x7fff) >> 0xc) +
              (uint)*(ushort *)(uVar6 * 2 + iVar1) >> 8 & 0xff;
LAB_002d9c16:
    param_7 = 1;
LAB_002d9a9a:
    if (param_7 == iVar7) goto LAB_002d9aae;
    iVar1 = DAT_002d9bf8 + 0x2d9aaa;
    uVar2 = *(undefined4 *)*puVar3;
  }
  else {
    uVar2 = *(undefined4 *)*puVar3;
    iVar1 = DAT_002d9bd8 + 0x2d98e6;
  }
  png_error(uVar2,iVar1);
LAB_002d9aae:
  uVar5 = DAT_002d9bfc;
  uVar6 = puVar3[4];
  uVar4 = (uint)((uVar6 & 0x21) == 0x21);
  local_2c = uVar6 & 0x10;
  if (local_2c != 0) {
    local_2c = 2;
  }
  iVar1 = (uVar6 & 3) + 1;
  if (iVar7 == 2) {
    iVar7 = param_1[3] + param_2 * iVar1 * 2;
    if (iVar1 != 3) {
      if (iVar1 != 4) {
        if (iVar1 == 2) {
          *(short *)((uVar4 ^ 1) * 2 + iVar7) = (short)param_6;
        }
        if (param_6 <= uVar5) {
          if (param_6 == 0) {
            param_4 = 0;
          }
          else {
            param_4 = __udivsi3(param_6 * param_4 + DAT_002d9c00,DAT_002d9c04);
          }
        }
        *(short *)(uVar4 * 2 + iVar7) = (short)param_4;
        return;
      }
      *(short *)(iVar7 + (-(uint)(uVar4 == 0) & 6)) = (short)param_6;
    }
    if (param_6 <= uVar5) {
      if (param_6 == 0) {
        param_5 = 0;
        param_4 = 0;
        param_3 = 0;
      }
      else {
        param_5 = __udivsi3(param_6 * param_5 + DAT_002d9c00,DAT_002d9c04);
        param_4 = __udivsi3(param_6 * param_4 + DAT_002d9c00,DAT_002d9c04);
        param_3 = __udivsi3(param_6 * param_3 + DAT_002d9c00,DAT_002d9c04);
      }
    }
    *(short *)((uVar4 + (local_2c ^ 2)) * 2 + iVar7) = (short)param_5;
    *(short *)((uVar4 + 1) * 2 + iVar7) = (short)param_4;
    *(short *)((uVar4 + local_2c) * 2 + iVar7) = (short)param_3;
  }
  else {
    iVar7 = param_1[3] + param_2 * iVar1;
    if (iVar1 != 3) {
      if (iVar1 != 4) {
        if (iVar1 == 2) {
          *(char *)(iVar7 + (uVar4 ^ 1)) = (char)param_6;
        }
        *(char *)(iVar7 + uVar4) = (char)param_4;
        return;
      }
      *(char *)(iVar7 + (-(uint)(uVar4 == 0) & 3)) = (char)param_6;
    }
    *(char *)(iVar7 + uVar4 + (local_2c ^ 2)) = (char)param_5;
    *(char *)(iVar7 + uVar4 + 1) = (char)param_4;
    *(char *)(iVar7 + local_2c + uVar4) = (char)param_3;
  }
  return;
}


