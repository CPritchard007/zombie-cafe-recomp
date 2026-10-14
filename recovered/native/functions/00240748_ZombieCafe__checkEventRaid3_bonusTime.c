/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00240748 ZombieCafe::checkEventRaid3_bonusTime */

/* ZombieCafe::checkEventRaid3_bonusTime() */

bool ZombieCafe::checkEventRaid3_bonusTime(void)

{
  uint uVar1;
  bool bVar2;
  
  Platform::getAppTime();
  uVar1 = __fixunsdfsi();
  bVar2 = false;
  if (*(uint *)(*(int *)(DAT_00240774 + 0x240758) + 0x90) < uVar1) {
    bVar2 = uVar1 < *(uint *)(*(int *)(DAT_00240774 + 0x240758) + 0x94);
  }
  return bVar2;
}


