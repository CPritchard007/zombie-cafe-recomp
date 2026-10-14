/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023fa9c ZombieCafe::checkEventRaidTime */

/* ZombieCafe::checkEventRaidTime() */

bool ZombieCafe::checkEventRaidTime(void)

{
  uint uVar1;
  bool bVar2;
  
  Platform::getAppTime();
  uVar1 = __fixunsdfsi();
  bVar2 = false;
  if (**(uint **)(DAT_0023fac0 + 0x23faae) < uVar1) {
    bVar2 = uVar1 < (*(uint **)(DAT_0023fac0 + 0x23faae))[1];
  }
  return bVar2;
}


