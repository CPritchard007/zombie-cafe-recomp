/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018f56c GameStateSurvivalMenu::playerHaveZombieCountCheck */

/* GameStateSurvivalMenu::playerHaveZombieCountCheck() */

bool __thiscall GameStateSurvivalMenu::playerHaveZombieCountCheck(GameStateSurvivalMenu *this)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0xc);
  bVar1 = true;
  if ((int)*(short *)((*(int *)(iVar2 + 0x680) + -1) * 2 + **(int **)(DAT_0018f5b4 + 0x18f586)) <=
      *(int *)(iVar2 + DAT_0018f5b0 + 4) + 1) {
    bVar1 = *(int *)(iVar2 + 0x5a4) + 1 < *(int *)(iVar2 + 0x5b8);
  }
  return bVar1;
}


