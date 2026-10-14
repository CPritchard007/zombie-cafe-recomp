/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c0df8 GameStateWeekRaidMenu::playerHaveZombieCountCheck */

/* GameStateWeekRaidMenu::playerHaveZombieCountCheck() */

bool __thiscall GameStateWeekRaidMenu::playerHaveZombieCountCheck(GameStateWeekRaidMenu *this)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0xc);
  bVar1 = true;
  if ((int)*(short *)((*(int *)(iVar2 + 0x680) + -1) * 2 + **(int **)(DAT_001c0e40 + 0x1c0e12)) <=
      *(int *)(iVar2 + DAT_001c0e3c + 4) + 1) {
    bVar1 = *(int *)(iVar2 + 0x5a4) + 1 < *(int *)(iVar2 + 0x5b8);
  }
  return bVar1;
}


