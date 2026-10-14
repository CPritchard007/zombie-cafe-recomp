/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023ef64 ZombieCafe::isExperienceBoost */

/* ZombieCafe::isExperienceBoost() */

int __thiscall ZombieCafe::isExperienceBoost(ZombieCafe *this)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = TutorialSystem::isTutorialCompleted(*(TutorialSystem **)(this + DAT_0023efb4),'\x16');
  if ((iVar1 != 0) && (iVar1 = **(int **)(DAT_0023efb8 + 0x23ef7a), iVar1 != 0)) {
    Platform::getAppTime();
    uVar2 = __fixunsdfsi();
    iVar1 = 0;
    if ((**(uint **)(DAT_0023efbc + 0x23ef92) < uVar2) &&
       (uVar2 < **(uint **)(DAT_0023efc0 + 0x23ef9e))) {
      L_PrintLog((char *)(DAT_0023efc4 + 0x23efac),(char *)(DAT_0023efc8 + 0x23efae));
      iVar1 = 1;
    }
  }
  return iVar1;
}


