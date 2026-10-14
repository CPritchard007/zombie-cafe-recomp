/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023f2ec ZombieCafe::checkZombieFlowerEventTime */

/* ZombieCafe::checkZombieFlowerEventTime() */

bool ZombieCafe::checkZombieFlowerEventTime(void)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  Platform::getAppTime();
  uVar1 = __fixunsdfsi();
  iVar2 = DAT_0023f324 + 0x23f2fe;
  if (((uVar1 <= **(uint **)(iVar2 + DAT_0023f328)) ||
      (bVar3 = true, **(uint **)(iVar2 + DAT_0023f32c) <= uVar1)) &&
     (bVar3 = false, **(uint **)(iVar2 + DAT_0023f328) == 0)) {
    bVar3 = **(int **)(iVar2 + DAT_0023f32c) == 0;
  }
  return bVar3;
}


