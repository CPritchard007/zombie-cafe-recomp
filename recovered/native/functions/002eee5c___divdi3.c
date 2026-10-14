/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002eee5c __divdi3 */

undefined8 __divdi3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  int extraout_r1_05;
  int extraout_r1_06;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  uint local_2c;
  
  if ((int)param_2 < 0) {
    bVar12 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(param_2 + bVar12);
    local_2c = 0xffffffff;
  }
  else {
    local_2c = 0;
  }
  if ((int)param_4 < 0) {
    local_2c = ~local_2c;
    bVar12 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(param_4 + bVar12);
  }
  if (param_4 == 0) {
    if (param_3 <= param_2) {
      if (param_3 == 0) {
        param_3 = __udivsi3(1,0);
      }
      iVar4 = LZCOUNT(param_3);
      if (iVar4 == 0) {
        iVar4 = param_2 - param_3;
        uVar5 = 1;
      }
      else {
        param_3 = param_3 << iVar4;
        uVar5 = param_2 >> (0x20U - iVar4 & 0xff);
        uVar6 = param_3 >> 0x10;
        uVar8 = param_1 >> (0x20U - iVar4 & 0xff) | param_2 << iVar4;
        param_1 = param_1 << iVar4;
        __aeabi_uidivmod(uVar5,uVar6);
        iVar4 = __udivsi3(uVar5,uVar6);
        uVar9 = uVar8 >> 0x10 | extraout_r1_01 << 0x10;
        uVar5 = (param_3 & 0xffff) * iVar4;
        iVar1 = iVar4;
        if (uVar9 < uVar5) {
          bVar12 = CARRY4(uVar9,param_3);
          uVar9 = uVar9 + param_3;
          iVar1 = iVar4 + -1;
          if ((!bVar12) && (uVar9 < uVar5)) {
            uVar9 = uVar9 + param_3;
            iVar1 = iVar4 + -2;
          }
        }
        __aeabi_uidivmod(uVar9 - uVar5,uVar6);
        uVar6 = __udivsi3(uVar9 - uVar5,uVar6);
        uVar9 = uVar8 & 0xffff | extraout_r1_02 << 0x10;
        uVar8 = (param_3 & 0xffff) * uVar6;
        uVar5 = uVar6;
        if (uVar9 < uVar8) {
          bVar12 = CARRY4(uVar9,param_3);
          uVar9 = uVar9 + param_3;
          uVar5 = uVar6 - 1;
          if ((!bVar12) && (uVar9 < uVar8)) {
            uVar9 = uVar9 + param_3;
            uVar5 = uVar6 - 2;
          }
        }
        iVar4 = uVar9 - uVar8;
        uVar5 = uVar5 | iVar1 << 0x10;
      }
      uVar6 = param_3 >> 0x10;
      __aeabi_uidivmod(iVar4,uVar6);
      iVar1 = __udivsi3(iVar4,uVar6);
      uVar9 = param_1 >> 0x10 | extraout_r1_03 << 0x10;
      uVar8 = (param_3 & 0xffff) * iVar1;
      iVar4 = iVar1;
      if (uVar9 < uVar8) {
        bVar12 = CARRY4(uVar9,param_3);
        uVar9 = uVar9 + param_3;
        iVar4 = iVar1 + -1;
        if ((!bVar12) && (uVar9 < uVar8)) {
          uVar9 = uVar9 + param_3;
          iVar4 = iVar1 + -2;
        }
      }
      __aeabi_uidivmod(uVar9 - uVar8,uVar6);
      uVar8 = __udivsi3(uVar9 - uVar8,uVar6);
      uVar10 = param_1 & 0xffff | extraout_r1_04 << 0x10;
      uVar9 = uVar8 * (param_3 & 0xffff);
      uVar6 = uVar8;
      if (uVar10 < uVar9) {
        uVar6 = uVar8 - 1;
        if ((!CARRY4(uVar10,param_3)) && (uVar10 + param_3 < uVar9)) {
          uVar6 = uVar8 - 2;
        }
      }
      uVar6 = uVar6 | iVar4 << 0x10;
      goto LAB_002ef2bc;
    }
    iVar4 = LZCOUNT(param_3);
    if (iVar4 != 0) {
      param_3 = param_3 << iVar4;
      param_2 = param_1 >> (0x20U - iVar4 & 0xff) | param_2 << iVar4;
      param_1 = param_1 << iVar4;
    }
    uVar6 = param_3 >> 0x10;
    __aeabi_uidivmod(param_2,uVar6);
    iVar1 = __udivsi3(param_2,uVar6);
    uVar8 = param_1 >> 0x10 | extraout_r1 << 0x10;
    uVar5 = (param_3 & 0xffff) * iVar1;
    iVar4 = iVar1;
    if (uVar8 < uVar5) {
      bVar12 = CARRY4(uVar8,param_3);
      uVar8 = uVar8 + param_3;
      iVar4 = iVar1 + -1;
      if ((!bVar12) && (uVar8 < uVar5)) {
        uVar8 = uVar8 + param_3;
        iVar4 = iVar1 + -2;
      }
    }
    __aeabi_uidivmod(uVar8 - uVar5,uVar6);
    uVar5 = __udivsi3(uVar8 - uVar5,uVar6);
    uVar8 = param_1 & 0xffff | extraout_r1_00 << 0x10;
    uVar9 = uVar5 * (param_3 & 0xffff);
    uVar6 = uVar5;
    if (uVar8 < uVar9) {
      uVar6 = uVar5 - 1;
      if ((!CARRY4(uVar8,param_3)) && (uVar8 + param_3 < uVar9)) {
        uVar6 = uVar5 - 2;
      }
    }
    uVar6 = uVar6 | iVar4 << 0x10;
LAB_002ef2ac:
    uVar5 = 0;
  }
  else {
    if (param_4 <= param_2) {
      iVar4 = LZCOUNT(param_4);
      if (iVar4 != 0) {
        uVar8 = 0x20 - iVar4;
        uVar9 = param_3 >> (uVar8 & 0xff) | param_4 << iVar4;
        uVar5 = param_2 >> (uVar8 & 0xff);
        uVar6 = uVar9 >> 0x10;
        uVar8 = param_1 >> (uVar8 & 0xff) | param_2 << iVar4;
        __aeabi_uidivmod(uVar5,uVar6);
        iVar2 = __udivsi3(uVar5,uVar6);
        uVar10 = uVar8 >> 0x10 | extraout_r1_05 << 0x10;
        uVar5 = (uVar9 & 0xffff) * iVar2;
        iVar1 = iVar2;
        if (uVar10 < uVar5) {
          bVar12 = CARRY4(uVar10,uVar9);
          uVar10 = uVar10 + uVar9;
          iVar1 = iVar2 + -1;
          if ((!bVar12) && (uVar10 < uVar5)) {
            uVar10 = uVar10 + uVar9;
            iVar1 = iVar2 + -2;
          }
        }
        __aeabi_uidivmod(uVar10 - uVar5,uVar6);
        uVar5 = __udivsi3(uVar10 - uVar5,uVar6);
        uVar8 = uVar8 & 0xffff | extraout_r1_06 << 0x10;
        uVar10 = uVar5 * (uVar9 & 0xffff);
        uVar6 = uVar5;
        if (uVar8 < uVar10) {
          bVar12 = CARRY4(uVar8,uVar9);
          uVar8 = uVar8 + uVar9;
          uVar6 = uVar5 - 1;
          if ((!bVar12) && (uVar8 < uVar10)) {
            uVar8 = uVar8 + uVar9;
            uVar6 = uVar5 - 2;
          }
        }
        uVar6 = uVar6 | iVar1 << 0x10;
        uVar5 = uVar6 >> 0x10;
        uVar9 = (param_3 << iVar4) >> 0x10;
        uVar11 = uVar6 & ~(uVar5 << 0x10);
        uVar7 = param_3 << iVar4 & ~(uVar9 << 0x10);
        uVar3 = uVar11 * uVar7;
        uVar7 = uVar5 * uVar7;
        uVar11 = uVar9 * uVar11;
        iVar1 = uVar5 * uVar9;
        uVar5 = uVar7 + uVar11;
        if (CARRY4(uVar7,uVar11)) {
          iVar1 = iVar1 + 0x10000;
        }
        uVar9 = uVar5 * 0x10000;
        uVar5 = iVar1 + (uVar5 >> 0x10) + (uint)CARRY4(uVar3,uVar9);
        if (uVar5 <= uVar8 - uVar10) {
          uVar5 = (uint)(uVar5 == uVar8 - uVar10);
          if (uVar3 + uVar9 <= param_1 << iVar4) {
            uVar5 = 0;
          }
          if (uVar5 == 0) goto LAB_002ef2bc;
        }
        uVar6 = uVar6 - 1;
        goto LAB_002ef2ac;
      }
      bVar12 = param_4 <= param_2;
      if (param_2 <= param_4) {
        bVar12 = param_3 <= param_1;
      }
      if (bVar12) {
        uVar6 = 1;
        uVar5 = 0;
        goto LAB_002ef2bc;
      }
    }
    uVar6 = 0;
    uVar5 = uVar6;
  }
LAB_002ef2bc:
  if (local_2c != 0) {
    bVar12 = uVar6 != 0;
    uVar6 = -uVar6;
    uVar5 = -(uVar5 + bVar12);
  }
  return CONCAT44(uVar5,uVar6);
}


