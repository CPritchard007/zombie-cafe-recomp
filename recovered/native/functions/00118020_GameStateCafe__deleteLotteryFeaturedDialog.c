/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00118020 GameStateCafe::deleteLotteryFeaturedDialog */

/* GameStateCafe::deleteLotteryFeaturedDialog() */

void __thiscall GameStateCafe::deleteLotteryFeaturedDialog(GameStateCafe *this)

{
  (**(code **)(**(int **)(this + 0x78) + 0x34))(*(int **)(this + 0x78),*(undefined4 *)(this + 300));
  if (*(int **)(this + 300) != (int *)0x0) {
    (**(code **)(**(int **)(this + 300) + 4))();
    *(undefined4 *)(this + 300) = 0;
  }
  return;
}


