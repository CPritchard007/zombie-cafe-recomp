/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00240f38 ZombieCafe::checkAmpouleRaidTime */

/* ZombieCafe::checkAmpouleRaidTime() */

bool ZombieCafe::checkAmpouleRaidTime(void)

{
  uint uVar1;
  bool bVar2;
  
  Platform::getAppTime();
  uVar1 = __fixunsdfsi();
  bVar2 = false;
  if (**(uint **)(DAT_00240f5c + 0x240f4a) < uVar1) {
    bVar2 = uVar1 < (*(uint **)(DAT_00240f5c + 0x240f4a))[1];
  }
  return bVar2;
}


