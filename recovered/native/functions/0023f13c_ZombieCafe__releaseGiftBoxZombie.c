/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023f13c ZombieCafe::releaseGiftBoxZombie */

/* ZombieCafe::releaseGiftBoxZombie(int) */

void __thiscall ZombieCafe::releaseGiftBoxZombie(ZombieCafe *this,int param_1)

{
  ZombieCafe *pZVar1;
  ZombieCafe *pZVar2;
  ZombieCafe *pZVar3;
  
  pZVar3 = this + (param_1 + 1) * 0xc + 0x5c8;
  for (; param_1 < 0xd; param_1 = param_1 + 1) {
    *(undefined4 *)(pZVar3 + -0xc) = *(undefined4 *)pZVar3;
    *(undefined4 *)(pZVar3 + -8) = *(undefined4 *)(pZVar3 + 4);
    pZVar1 = pZVar3 + 8;
    pZVar2 = pZVar3 + -4;
    pZVar3 = pZVar3 + 0xc;
    *(undefined4 *)pZVar2 = *(undefined4 *)pZVar1;
  }
  *(undefined4 *)(this + DAT_0023f17c) = 0;
  *(undefined4 *)(this + 0x668) = 0;
  *(undefined4 *)(this + DAT_0023f180) = 0;
  return;
}


