/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00241454 ZombieCafe::isWeekRaid_Advent */

/* ZombieCafe::isWeekRaid_Advent() */

int __thiscall ZombieCafe::isWeekRaid_Advent(ZombieCafe *this)

{
  int iVar1;
  
  iVar1 = isWeekRaidCafe();
  if (iVar1 != 0) {
    if (*(int *)(this + 0x680) < 8) {
      iVar1 = 0;
    }
    else {
      iVar1 = checkWeekRaidTime();
    }
  }
  return iVar1;
}


