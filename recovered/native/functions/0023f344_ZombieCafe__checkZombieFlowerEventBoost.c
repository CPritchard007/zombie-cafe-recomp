/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023f344 ZombieCafe::checkZombieFlowerEventBoost */

/* ZombieCafe::checkZombieFlowerEventBoost() */

char ZombieCafe::checkZombieFlowerEventBoost(void)

{
  uint uVar1;
  char cVar2;
  
  cVar2 = **(char **)(DAT_0023f37c + 0x23f34c);
  if (cVar2 != '\0') {
    Platform::getAppTime();
    uVar1 = __fixunsdfsi();
    cVar2 = '\0';
    if (**(uint **)(DAT_0023f380 + 0x23f360) < uVar1) {
      cVar2 = uVar1 < **(uint **)(DAT_0023f384 + 0x23f36e);
    }
  }
  return cVar2;
}


