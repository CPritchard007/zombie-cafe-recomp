/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023fc46 ZombieCafe::getEventRaid_bossEnergy */

/* ZombieCafe::getEventRaid_bossEnergy() */

undefined4 __thiscall ZombieCafe::getEventRaid_bossEnergy(ZombieCafe *this)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (this[iVar1 + 0x10e] != (ZombieCafe)0x0) {
      return *(undefined4 *)(this + (iVar1 + 0x46) * 4);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  return 0;
}


