/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ec56c __divsf3 */

uint __divsf3(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  
  uVar2 = param_1 >> 0x17 & 0xff;
  bVar7 = uVar2 == 0;
  if (!bVar7) {
    param_4 = param_2 >> 0x17 & 0xff;
    bVar7 = param_4 == 0;
  }
  if (!bVar7) {
    bVar7 = uVar2 == 0xff;
  }
  if (!bVar7) {
    bVar7 = param_4 == 0xff;
  }
  if (bVar7) {
    param_4 = param_2 >> 0x17 & 0xff;
    uVar6 = param_1;
    if (uVar2 == 0xff) {
      if (((param_1 & 0x7fffff) != 0) || (uVar6 = param_2, param_4 == 0xff)) {
LAB_002ec560:
        return uVar6 | 0x7fc00000;
      }
    }
    else {
      if (param_4 == 0xff) {
        uVar6 = param_2;
        if ((param_2 & 0x7fffff) == 0) {
LAB_002ec504:
          return (param_1 ^ param_2) & 0x80000000;
        }
        goto LAB_002ec560;
      }
      if ((param_1 & 0x7fffffff) != 0 && (param_2 & 0x7fffffff) != 0) {
        bVar7 = uVar2 == 0;
        uVar6 = param_1 & 0x80000000;
        while( true ) {
          if (bVar7) {
            param_1 = param_1 << 1;
            bVar7 = (param_1 & 0x800000) == 0;
          }
          if (!bVar7) break;
          uVar2 = uVar2 - 1;
        }
        param_1 = param_1 | uVar6;
        bVar7 = param_4 == 0;
        uVar6 = param_2 & 0x80000000;
        while( true ) {
          if (bVar7) {
            param_2 = param_2 << 1;
            bVar7 = (param_2 & 0x800000) == 0;
          }
          if (!bVar7) break;
          param_4 = param_4 - 1;
        }
        param_2 = param_2 | uVar6;
        goto LAB_002ec584;
      }
      if ((param_1 & 0x7fffffff) == 0) {
        if ((param_2 & 0x7fffffff) != 0) goto LAB_002ec504;
        goto LAB_002ec560;
      }
    }
    param_1 = param_1 ^ param_2;
  }
  else {
LAB_002ec584:
    iVar3 = uVar2 - param_4;
    if (param_2 << 9 == 0) {
      param_1 = (param_1 ^ param_2) & 0x80000000 | param_1 & 0x7fffff;
      bVar9 = SCARRY4(iVar3,0x7f);
      iVar5 = iVar3 + 0x7f;
      bVar7 = iVar5 < 0;
      bVar8 = iVar5 == 0;
      if (!bVar8 && bVar7 == bVar9) {
        bVar9 = SBORROW4(0xff,iVar5);
        bVar7 = -iVar5 + 0xff < 0;
        bVar8 = -iVar5 == -0xff;
      }
      if (!bVar8 && bVar7 == bVar9) {
        return param_1 | iVar5 * 0x800000;
      }
      param_1 = param_1 | 0x800000;
      uVar2 = 0;
      bVar8 = SBORROW4(iVar5,1);
      uVar4 = iVar3 + 0x7e;
      bVar7 = uVar4 == 0;
      uVar6 = uVar4;
    }
    else {
      uVar1 = (param_2 << 9) >> 4 | 0x10000000;
      uVar2 = (param_1 << 9) >> 4 | 0x10000000;
      param_1 = (param_1 ^ param_2) & 0x80000000;
      bVar7 = uVar1 <= uVar2;
      if (!bVar7) {
        uVar2 = uVar2 << 1;
      }
      uVar4 = iVar3 + 0x7d + (uint)bVar7;
      uVar6 = 0x800000;
      do {
        if (uVar1 <= uVar2) {
          uVar2 = uVar2 - uVar1;
          param_1 = param_1 | uVar6;
        }
        if (uVar1 >> 1 <= uVar2) {
          uVar2 = uVar2 - (uVar1 >> 1);
          param_1 = param_1 | uVar6 >> 1;
        }
        if (uVar1 >> 2 <= uVar2) {
          uVar2 = uVar2 - (uVar1 >> 2);
          param_1 = param_1 | uVar6 >> 2;
        }
        if (uVar1 >> 3 <= uVar2) {
          uVar2 = uVar2 - (uVar1 >> 3);
          param_1 = param_1 | uVar6 >> 3;
        }
        uVar2 = uVar2 * 0x10;
        bVar7 = uVar2 == 0;
        if (!bVar7) {
          uVar6 = uVar6 >> 4;
          bVar7 = uVar6 == 0;
        }
      } while (!bVar7);
      bVar8 = SBORROW4(uVar4,0xfd);
      bVar7 = uVar4 == 0xfd;
      uVar6 = uVar4 - 0xfd;
      if (uVar4 < 0xfe) {
        uVar6 = param_1 + uVar4 * 0x800000 + (uint)(uVar1 <= uVar2);
        if (uVar2 == uVar1) {
          uVar6 = uVar6 & 0xfffffffe;
        }
        return uVar6;
      }
    }
    if (bVar7 || (int)uVar6 < 0 != bVar8) {
      if (uVar4 != 0xffffffe7 && (int)(uVar4 + 0x19) < 0 == SCARRY4(uVar4,0x19)) {
        uVar1 = (param_1 << 1) >> (-uVar4 & 0xff);
        uVar6 = param_1 << (uVar4 + 0x20 & 0xff);
        uVar4 = (param_1 & 0x80000000 | uVar1 >> 1) + (uint)((byte)uVar1 & 1);
        if (uVar2 == 0 && (uVar6 & 0x7fffffff) == 0) {
          uVar4 = uVar4 & ~(uVar6 >> 0x1f);
        }
        return uVar4;
      }
      return param_1 & 0x80000000;
    }
  }
  return param_1 & 0x80000000 | 0x7f800000;
}


