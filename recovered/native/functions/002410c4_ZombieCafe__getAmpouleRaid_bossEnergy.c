/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002410c4 ZombieCafe::getAmpouleRaid_bossEnergy */

/* ZombieCafe::getAmpouleRaid_bossEnergy() */

undefined4 __thiscall ZombieCafe::getAmpouleRaid_bossEnergy(ZombieCafe *this)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (this[DAT_002410e4 + iVar1] != (ZombieCafe)0x0) {
      return *(undefined4 *)(this + (iVar1 + 0xbe) * 4);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  return 0;
}


