/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00241500 ZombieCafe::getWeekRaid_toxinflag */

/* ZombieCafe::getWeekRaid_toxinflag(int) */

bool __thiscall ZombieCafe::getWeekRaid_toxinflag(ZombieCafe *this,int param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((uint)param_1 < 4) {
    bVar1 = this[param_1 + 0x33c] != (ZombieCafe)0x0;
  }
  return bVar1;
}


