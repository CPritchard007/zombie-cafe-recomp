/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00118046 GameStateCafe::deleteUserRankDialog */

/* GameStateCafe::deleteUserRankDialog() */

void __thiscall GameStateCafe::deleteUserRankDialog(GameStateCafe *this)

{
  (**(code **)(**(int **)(this + 0x78) + 0x34))
            (*(int **)(this + 0x78),*(undefined4 *)(this + 0x130));
  if (*(int **)(this + 0x130) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x130) + 4))();
    *(undefined4 *)(this + 0x130) = 0;
  }
  return;
}


