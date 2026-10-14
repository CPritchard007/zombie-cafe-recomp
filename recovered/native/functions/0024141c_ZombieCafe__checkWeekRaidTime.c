/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024141c ZombieCafe::checkWeekRaidTime */

/* ZombieCafe::checkWeekRaidTime() */

bool ZombieCafe::checkWeekRaidTime(void)

{
  uint uVar1;
  bool bVar2;
  
  Platform::getAppTime();
  uVar1 = __fixunsdfsi();
  bVar2 = false;
  if (*(uint *)(*(int *)(DAT_00241440 + 0x24142e) + 4) < uVar1) {
    bVar2 = uVar1 < *(uint *)(*(int *)(DAT_00241440 + 0x24142e) + 8);
  }
  return bVar2;
}


