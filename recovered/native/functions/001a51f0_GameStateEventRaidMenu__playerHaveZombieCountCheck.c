/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a51f0 GameStateEventRaidMenu::playerHaveZombieCountCheck */

/* GameStateEventRaidMenu::playerHaveZombieCountCheck() */

bool __thiscall GameStateEventRaidMenu::playerHaveZombieCountCheck(GameStateEventRaidMenu *this)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0xc);
  bVar1 = true;
  if ((int)*(short *)((*(int *)(iVar2 + 0x680) + -1) * 2 + **(int **)(DAT_001a5238 + 0x1a520a)) <=
      *(int *)(iVar2 + DAT_001a5234 + 4) + 1) {
    bVar1 = *(int *)(iVar2 + 0x5a4) + 1 < *(int *)(iVar2 + 0x5b8);
  }
  return bVar1;
}


