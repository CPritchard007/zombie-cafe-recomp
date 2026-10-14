/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00240f60 ZombieCafe::isAmpouleRaid_Advent */

/* ZombieCafe::isAmpouleRaid_Advent() */

uint __thiscall ZombieCafe::isAmpouleRaid_Advent(ZombieCafe *this)

{
  uint uVar1;
  
  uVar1 = (uint)**(byte **)(DAT_00240f84 + 0x240f68);
  if ((uVar1 != 0) && (uVar1 = 0, 7 < *(int *)(this + 0x680))) {
    uVar1 = checkAmpouleRaidTime();
  }
  return uVar1;
}


