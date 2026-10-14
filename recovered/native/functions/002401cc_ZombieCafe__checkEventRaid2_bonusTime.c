/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002401cc ZombieCafe::checkEventRaid2_bonusTime */

/* ZombieCafe::checkEventRaid2_bonusTime() */

bool ZombieCafe::checkEventRaid2_bonusTime(void)

{
  uint uVar1;
  bool bVar2;
  
  Platform::getAppTime();
  uVar1 = __fixunsdfsi();
  bVar2 = false;
  if (*(uint *)(*(int *)(DAT_002401f0 + 0x2401de) + 0x10) < uVar1) {
    bVar2 = uVar1 < *(uint *)(*(int *)(DAT_002401f0 + 0x2401de) + 0x14);
  }
  return bVar2;
}


