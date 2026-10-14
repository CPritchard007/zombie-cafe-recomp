/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001bb128 GameStateEventRaid3Menu::playerHaveZombieCountCheck */

/* GameStateEventRaid3Menu::playerHaveZombieCountCheck() */

bool __thiscall GameStateEventRaid3Menu::playerHaveZombieCountCheck(GameStateEventRaid3Menu *this)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0xc);
  bVar1 = true;
  if ((int)*(short *)((*(int *)(iVar2 + 0x680) + -1) * 2 + **(int **)(DAT_001bb170 + 0x1bb142)) <=
      *(int *)(iVar2 + DAT_001bb16c + 4) + 1) {
    bVar1 = *(int *)(iVar2 + 0x5a4) + 1 < *(int *)(iVar2 + 0x5b8);
  }
  return bVar1;
}


