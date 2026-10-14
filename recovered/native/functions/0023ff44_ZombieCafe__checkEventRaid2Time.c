/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023ff44 ZombieCafe::checkEventRaid2Time */

/* ZombieCafe::checkEventRaid2Time() */

bool ZombieCafe::checkEventRaid2Time(void)

{
  uint uVar1;
  bool bVar2;
  
  Platform::getAppTime();
  uVar1 = __fixunsdfsi();
  bVar2 = false;
  if (*(uint *)(*(int *)(DAT_0023ff68 + 0x23ff56) + 4) < uVar1) {
    bVar2 = uVar1 < *(uint *)(*(int *)(DAT_0023ff68 + 0x23ff56) + 8);
  }
  return bVar2;
}


