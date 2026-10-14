/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023e8c8 ZombieCafe::isEventFryerFlag */

/* ZombieCafe::isEventFryerFlag() */

bool ZombieCafe::isEventFryerFlag(void)

{
  uint uVar1;
  bool bVar2;
  
  Platform::getAppTime();
  uVar1 = __fixunsdfsi();
  bVar2 = false;
  if (**(uint **)(DAT_0023e8f4 + 0x23e8d8) < uVar1) {
    bVar2 = uVar1 < **(uint **)(DAT_0023e8f8 + 0x23e8e6);
  }
  return bVar2;
}


