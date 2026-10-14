/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023fbe4 ZombieCafe::getEventRaid_bossFlag */

/* ZombieCafe::getEventRaid_bossFlag(int) */

ZombieCafe __thiscall ZombieCafe::getEventRaid_bossFlag(ZombieCafe *this,int param_1)

{
  ZombieCafe ZVar1;
  
  ZVar1 = (ZombieCafe)0x0;
  if (param_1 < 8) {
    ZVar1 = this[param_1 + 0x10e];
  }
  return ZVar1;
}


