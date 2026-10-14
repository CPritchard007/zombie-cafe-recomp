/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00241052 ZombieCafe::getAmpouleRaid_bossFlag */

/* ZombieCafe::getAmpouleRaid_bossFlag(int) */

ZombieCafe __thiscall ZombieCafe::getAmpouleRaid_bossFlag(ZombieCafe *this,int param_1)

{
  ZombieCafe ZVar1;
  
  ZVar1 = (ZombieCafe)0x0;
  if (param_1 < 8) {
    ZVar1 = this[param_1 + 0x2ee];
  }
  return ZVar1;
}


