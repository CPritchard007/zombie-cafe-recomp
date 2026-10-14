/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023fac4 ZombieCafe::isEventRaid_Advent */

/* ZombieCafe::isEventRaid_Advent() */

uint __thiscall ZombieCafe::isEventRaid_Advent(ZombieCafe *this)

{
  uint uVar1;
  
  uVar1 = (uint)**(byte **)(DAT_0023fae8 + 0x23facc);
  if ((uVar1 != 0) && (uVar1 = 0, 7 < *(int *)(this + 0x680))) {
    uVar1 = checkEventRaidTime();
  }
  return uVar1;
}


