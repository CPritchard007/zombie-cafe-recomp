/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c5028 CapcomDate::from1970Offset */

/* CapcomDate::from1970Offset(unsigned long) */

CapcomDate * __thiscall CapcomDate::from1970Offset(CapcomDate *this,ulong param_1)

{
  CapcomDate CVar1;
  uint uVar2;
  CapcomDate extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  uint uVar3;
  int extraout_r1_04;
  int extraout_r1_05;
  int extraout_r1_06;
  int extraout_r1_07;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint local_78 [25];
  
  memcpy(local_78,(void *)(DAT_002c5150 + 0x2c5038),0x60);
  __aeabi_uidivmod(param_1,DAT_002c5154);
  uVar2 = __udivsi3(param_1,DAT_002c5154);
  __aeabi_uidivmod(extraout_r1_00,0x3c);
  this[6] = extraout_r1;
  __aeabi_uidivmod(extraout_r1_00,0xe10);
  CVar1 = (CapcomDate)__udivsi3(extraout_r1_01,0x3c);
  this[5] = CVar1;
  CVar1 = (CapcomDate)__udivsi3(extraout_r1_00,0xe10);
  uVar6 = DAT_002c5158;
  this[4] = CVar1;
  while( true ) {
    uVar7 = uVar6 & 3;
    uVar3 = DAT_002c515c;
    if (uVar7 == 0) {
      __aeabi_idivmod(uVar6,100);
      if (extraout_r1_04 == 0) {
        __aeabi_idivmod(uVar6,400);
        uVar3 = (extraout_r1_05 == 0) + 0x16d;
      }
      else {
        uVar3 = 0x16e;
      }
    }
    if (uVar2 < uVar3) break;
    uVar3 = DAT_002c515c;
    if (uVar7 == 0) {
      __aeabi_idivmod(uVar6,100);
      if (extraout_r1_02 == 0) {
        __aeabi_idivmod(uVar6,400);
        uVar3 = (extraout_r1_03 == 0) + 0x16d;
      }
      else {
        uVar3 = 0x16e;
      }
    }
    uVar2 = uVar2 - uVar3;
    uVar6 = uVar6 + 1;
  }
  __aeabi_idivmod(uVar6,100);
  __aeabi_idivmod(uVar6,400);
  iVar5 = 0;
  while( true ) {
    uVar3 = 0;
    if ((uVar7 == 0) && (uVar3 = 1, extraout_r1_06 == 0)) {
      uVar3 = (uint)(extraout_r1_07 == 0);
    }
    if (uVar2 < local_78[uVar3 * 0xc + iVar5]) break;
    uVar3 = 0;
    if ((uVar7 == 0) && (uVar3 = 1, extraout_r1_06 == 0)) {
      uVar3 = (uint)(extraout_r1_07 == 0);
    }
    iVar4 = uVar3 * 0xc + iVar5;
    iVar5 = iVar5 + 1;
    uVar2 = uVar2 - local_78[iVar4];
  }
  this[3] = (CapcomDate)((char)uVar2 + '\x01');
  *(short *)this = (short)uVar6;
  this[2] = (CapcomDate)((char)iVar5 + '\x01');
  return this;
}


