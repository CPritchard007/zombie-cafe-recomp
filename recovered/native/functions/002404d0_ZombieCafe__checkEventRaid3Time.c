/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002404d0 ZombieCafe::checkEventRaid3Time */

/* ZombieCafe::checkEventRaid3Time() */

bool ZombieCafe::checkEventRaid3Time(void)

{
  uint uVar1;
  bool bVar2;
  
  Platform::getAppTime();
  uVar1 = __fixunsdfsi();
  bVar2 = false;
  if (*(uint *)(*(int *)(DAT_002404fc + 0x2404e0) + 0x84) < uVar1) {
    bVar2 = uVar1 < *(uint *)(*(int *)(DAT_002404fc + 0x2404e0) + 0x88);
  }
  return bVar2;
}


