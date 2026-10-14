/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d7f78 png_build_gamma_table */

void png_build_gamma_table(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_r1;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  double __x;
  undefined2 local_24;
  
  if ((*(int *)(param_1 + 0x250) != 0) || (*(int *)(param_1 + 0x254) != 0)) {
    png_warning(param_1,DAT_002d8268 + 0x2d7f9c);
    png_destroy_gamma_table(param_1);
  }
  if (param_2 < 9) {
    uVar2 = DAT_002d826c;
    if (0 < *(int *)(param_1 + 0x24c)) {
      uVar2 = png_reciprocal2(*(undefined4 *)(param_1 + 0x39c));
    }
    FUN_002d7db8(param_1,param_1 + 0x250,uVar2);
    if ((*(uint *)(param_1 + 0x13c) & DAT_002d8270) != 0) {
      uVar2 = png_reciprocal(*(undefined4 *)(param_1 + 0x39c));
      FUN_002d7db8(param_1,param_1 + 0x25c,uVar2);
      if (*(int *)(param_1 + 0x24c) < 1) {
        uVar2 = *(undefined4 *)(param_1 + 0x39c);
      }
      else {
        uVar2 = png_reciprocal();
      }
      FUN_002d7db8(param_1,param_1 + 600,uVar2);
    }
  }
  else {
    if ((int)((uint)*(byte *)(param_1 + DAT_002d8274) << 0x1e) < 0) {
      bVar1 = *(byte *)(param_1 + DAT_002d8278);
      if (*(byte *)(param_1 + DAT_002d8278) < *(byte *)(param_1 + 0x268)) {
        bVar1 = *(byte *)(param_1 + 0x268);
      }
      if (bVar1 < *(byte *)(param_1 + DAT_002d827c)) {
        bVar1 = *(byte *)(param_1 + DAT_002d827c);
      }
    }
    else {
      bVar1 = *(byte *)(param_1 + DAT_002d8280);
    }
    uVar11 = 0;
    if (bVar1 - 1 < 0xf) {
      uVar11 = 0x10 - bVar1 & 0xff;
    }
    uVar6 = DAT_002d8284 & *(uint *)(param_1 + 0x13c);
    if ((uVar6 == 0) || (4 < uVar11)) {
      if (8 < uVar11) {
        uVar11 = 8;
      }
    }
    else {
      uVar11 = 5;
    }
    *(uint *)(param_1 + 0x248) = uVar11;
    if (uVar6 == 0) {
      uVar2 = DAT_002d826c;
      if (0 < *(int *)(param_1 + 0x24c)) {
        uVar2 = png_reciprocal2(*(undefined4 *)(param_1 + 0x39c));
      }
      FUN_002d7770(param_1,param_1 + 0x254,uVar11,uVar2);
    }
    else {
      iVar7 = *(int *)(param_1 + 0x24c);
      uVar2 = DAT_002d826c;
      if (0 < iVar7) {
        uVar12 = __floatsidf(*(undefined4 *)(param_1 + 0x39c));
        __x = (double)__muldf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),DAT_002d8248,
                               DAT_002d824c);
        uVar12 = __floatsidf(iVar7);
        uVar12 = __muldf3(SUB84(__x,0),(int)((ulonglong)__x >> 0x20),(int)uVar12,
                          (int)((ulonglong)uVar12 >> 0x20));
        uVar2 = __adddf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),DAT_002d8250,DAT_002d8254);
        floor(__x);
        iVar7 = __aeabi_dcmple();
        if (iVar7 == 0) {
          uVar2 = 0;
        }
        else {
          iVar7 = __aeabi_dcmpge(uVar2,extraout_r1,DAT_002d8260,DAT_002d8264);
          if (iVar7 == 0) {
            uVar2 = 0;
          }
          else {
            uVar2 = __fixdfsi(uVar2,extraout_r1);
          }
        }
      }
      uVar6 = 8 - uVar11;
      iVar7 = 1 << (uVar6 & 0xff);
      puVar3 = (undefined4 *)png_calloc(param_1,iVar7 << 2);
      *(undefined4 **)(param_1 + 0x254) = puVar3;
      puVar8 = puVar3;
      for (iVar10 = 0; iVar10 != iVar7; iVar10 = iVar10 + 1) {
        uVar4 = png_malloc(param_1,0x200);
        *puVar8 = uVar4;
        puVar8 = puVar8 + 1;
      }
      iVar10 = 0;
      uVar9 = 0;
      do {
        iVar5 = png_gamma_16bit_correct(iVar10 + 0x80,uVar2);
        iVar5 = __udivsi3(((1 << (0x10 - uVar11 & 0xff)) + -1) * iVar5 + 0x8000,DAT_002d8288);
        for (; uVar9 < iVar5 + 1U; uVar9 = uVar9 + 1) {
          local_24 = (undefined2)iVar10;
          *(undefined2 *)((uVar9 >> (uVar6 & 0xff)) * 2 + puVar3[0xffU >> uVar11 & uVar9]) =
               local_24;
        }
        iVar10 = iVar10 + 0x101;
      } while (iVar10 != DAT_002d8288);
      for (; uVar9 < (uint)(iVar7 << 8); uVar9 = uVar9 + 1) {
        *(undefined2 *)((uVar9 >> (uVar6 & 0xff)) * 2 + puVar3[0xff >> uVar11 & uVar9]) = 0xffff;
      }
    }
    if ((*(uint *)(param_1 + 0x13c) & DAT_002d8270) != 0) {
      uVar2 = png_reciprocal(*(undefined4 *)(param_1 + 0x39c));
      FUN_002d7770(param_1,param_1 + 0x264,uVar11,uVar2);
      if (*(int *)(param_1 + 0x24c) < 1) {
        uVar2 = *(undefined4 *)(param_1 + 0x39c);
      }
      else {
        uVar2 = png_reciprocal();
      }
      FUN_002d7770(param_1,param_1 + 0x260,uVar11,uVar2);
    }
  }
  return;
}


