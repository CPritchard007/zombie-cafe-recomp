/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00112dec GameStateAmpouleRaidMenu::playerHaveZombieCountCheck */

/* GameStateAmpouleRaidMenu::playerHaveZombieCountCheck() */

bool __thiscall GameStateAmpouleRaidMenu::playerHaveZombieCountCheck(GameStateAmpouleRaidMenu *this)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0xc);
  bVar1 = true;
  if ((int)*(short *)((*(int *)(iVar2 + 0x680) + -1) * 2 + **(int **)(DAT_00112e34 + 0x112e06)) <=
      *(int *)(iVar2 + DAT_00112e30 + 4) + 1) {
    bVar1 = *(int *)(iVar2 + 0x5a4) + 1 < *(int *)(iVar2 + 0x5b8);
  }
  return bVar1;
}


