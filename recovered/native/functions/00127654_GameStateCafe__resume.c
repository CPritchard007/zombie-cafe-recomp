/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00127654 GameStateCafe::resume */

/* GameStateCafe::resume() */

void __thiscall GameStateCafe::resume(GameStateCafe *this)

{
  int iVar1;
  
  ZombieCafe::loadlottery
            ((void *)**(undefined4 **)(DAT_00127694 + 0x127660),*(void **)(this + 0xc),-1);
  iVar1 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_00127698),'\x16');
  if (iVar1 != 0) {
    checkBeginerBonus(this);
  }
  ZombieCafe::checkTombstoneDayRecovery();
  L_PrintLog((char *)(DAT_0012769c + 0x12768e),(char *)(DAT_001276a0 + 0x127690));
  return;
}


