/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ec3d4 __mulsf3 */

uint __mulsf3(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  
  uVar3 = param_1 >> 0x17 & 0xff;
  bVar10 = uVar3 == 0;
  if (!bVar10) {
    param_4 = param_2 >> 0x17 & 0xff;
    bVar10 = param_4 == 0;
  }
  if (!bVar10) {
    bVar10 = uVar3 == 0xff;
  }
  if (!bVar10) {
    bVar10 = param_4 == 0xff;
  }
  if (bVar10) {
    param_4 = param_2 >> 0x17 & 0xff;
    if (uVar3 == 0xff || param_4 == 0xff) {
      uVar9 = param_2;
      if (param_1 != 0 && param_1 != 0x80000000) {
        uVar9 = param_1;
      }
      uVar5 = uVar9;
      if (((((param_1 == 0 || param_1 == 0x80000000) || param_2 == 0) || param_2 == 0x80000000) ||
          ((uVar3 == 0xff && ((uVar9 & 0x7fffff) != 0)))) ||
         ((param_4 == 0xff && (uVar5 = param_2, (param_2 & 0x7fffff) != 0)))) {
        return uVar5 | 0x7fc00000;
      }
      uVar9 = uVar9 ^ param_2;
      goto LAB_002ec550;
    }
    if ((param_1 & 0x7fffffff) == 0 || (param_2 & 0x7fffffff) == 0) {
      return (param_1 ^ param_2) & 0x80000000;
    }
    bVar10 = uVar3 == 0;
    uVar9 = param_1 & 0x80000000;
    while( true ) {
      if (bVar10) {
        param_1 = param_1 << 1;
        bVar10 = (param_1 & 0x800000) == 0;
      }
      if (!bVar10) break;
      uVar3 = uVar3 - 1;
    }
    param_1 = param_1 | uVar9;
    bVar10 = param_4 == 0;
    uVar9 = param_2 & 0x80000000;
    while( true ) {
      if (bVar10) {
        param_2 = param_2 << 1;
        bVar10 = (param_2 & 0x800000) == 0;
      }
      if (!bVar10) break;
      param_4 = param_4 - 1;
    }
    param_2 = param_2 | uVar9;
  }
  iVar4 = uVar3 + param_4;
  uVar9 = param_1 ^ param_2;
  uVar3 = param_1 << 9;
  bVar10 = uVar3 == 0;
  if (!bVar10) {
    param_2 = param_2 << 9;
    bVar10 = param_2 == 0;
  }
  if (bVar10) {
    if (uVar3 == 0) {
      param_2 = param_2 << 9;
    }
    uVar9 = uVar9 & 0x80000000 | param_1 & 0x7fffff | param_2 >> 9;
    bVar11 = SBORROW4(iVar4,0x7f);
    iVar6 = iVar4 + -0x7f;
    bVar10 = iVar6 == 0;
    iVar7 = iVar6;
    if (!bVar10 && 0x7e < iVar4) {
      bVar11 = SBORROW4(0xff,iVar6);
      iVar7 = -iVar6 + 0xff;
      bVar10 = -iVar6 == -0xff;
    }
    if (!bVar10 && iVar7 < 0 == bVar11) {
      return uVar9 | iVar6 * 0x800000;
    }
    uVar9 = uVar9 | 0x800000;
    uVar8 = 0;
    bVar11 = SBORROW4(iVar6,1);
    uVar5 = iVar4 - 0x80;
    bVar10 = uVar5 == 0;
    uVar3 = uVar5;
  }
  else {
    lVar2 = (ulonglong)(param_2 >> 5 | 0x8000000) * (ulonglong)(uVar3 >> 5 | 0x8000000);
    bVar10 = (uint)((ulonglong)lVar2 >> 0x20) < 0x800000;
    if (bVar10) {
      lVar2 = lVar2 * 2;
    }
    uVar8 = (uint)lVar2;
    uVar9 = uVar9 & 0x80000000 | (uint)((ulonglong)lVar2 >> 0x20);
    uVar5 = iVar4 - (bVar10 + 0x7f);
    bVar11 = SBORROW4(uVar5,0xfd);
    bVar10 = uVar5 == 0xfd;
    uVar3 = uVar5 - 0xfd;
    if (uVar5 < 0xfe) {
      uVar3 = uVar9 + uVar5 * 0x800000 + (uint)(0x7fffffff < uVar8);
      if (uVar8 == 0x80000000) {
        uVar3 = uVar3 & 0xfffffffe;
      }
      return uVar3;
    }
  }
  if (bVar10 || (int)uVar3 < 0 != bVar11) {
    if (uVar5 != 0xffffffe7 && (int)(uVar5 + 0x19) < 0 == SCARRY4(uVar5,0x19)) {
      uVar1 = (uVar9 << 1) >> (-uVar5 & 0xff);
      uVar3 = uVar9 << (uVar5 + 0x20 & 0xff);
      uVar9 = (uVar9 & 0x80000000 | uVar1 >> 1) + (uint)((byte)uVar1 & 1);
      if (uVar8 == 0 && (uVar3 & 0x7fffffff) == 0) {
        uVar9 = uVar9 & ~(uVar3 >> 0x1f);
      }
      return uVar9;
    }
    return uVar9 & 0x80000000;
  }
LAB_002ec550:
  return uVar9 & 0x80000000 | 0x7f800000;
}


