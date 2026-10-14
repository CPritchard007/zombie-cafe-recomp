/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023ea64 ZombieCafe::isBeginnerCampaign */

/* ZombieCafe::isBeginnerCampaign() */

bool ZombieCafe::isBeginnerCampaign(void)

{
  uint uVar1;
  bool bVar2;
  
  Platform::getAppTime();
  uVar1 = __fixunsdfsi();
  bVar2 = false;
  if (**(uint **)(DAT_0023ea90 + 0x23ea74) < uVar1) {
    bVar2 = uVar1 < **(uint **)(DAT_0023ea94 + 0x23ea82);
  }
  return bVar2;
}


