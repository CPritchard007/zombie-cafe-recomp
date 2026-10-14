/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001aece0 GameStateEventRaid2Menu::playerHaveZombieCountCheck */

/* GameStateEventRaid2Menu::playerHaveZombieCountCheck() */

bool __thiscall GameStateEventRaid2Menu::playerHaveZombieCountCheck(GameStateEventRaid2Menu *this)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0xc);
  bVar1 = true;
  if ((int)*(short *)((*(int *)(iVar2 + 0x680) + -1) * 2 + **(int **)(DAT_001aed28 + 0x1aecfa)) <=
      *(int *)(iVar2 + DAT_001aed24 + 4) + 1) {
    bVar1 = *(int *)(iVar2 + 0x5a4) + 1 < *(int *)(iVar2 + 0x5b8);
  }
  return bVar1;
}


