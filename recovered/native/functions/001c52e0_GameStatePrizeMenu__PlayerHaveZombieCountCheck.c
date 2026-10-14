/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c52e0 GameStatePrizeMenu::PlayerHaveZombieCountCheck */

/* GameStatePrizeMenu::PlayerHaveZombieCountCheck() */

bool __thiscall GameStatePrizeMenu::PlayerHaveZombieCountCheck(GameStatePrizeMenu *this)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0xc);
  bVar1 = true;
  if ((int)*(short *)((*(int *)(iVar2 + 0x680) + -1) * 2 + **(int **)(DAT_001c5328 + 0x1c52fa)) <=
      *(int *)(iVar2 + DAT_001c5324 + 4) + 1) {
    bVar1 = *(int *)(iVar2 + 0x5a4) + 1 < *(int *)(iVar2 + 0x5b8);
  }
  return bVar1;
}


