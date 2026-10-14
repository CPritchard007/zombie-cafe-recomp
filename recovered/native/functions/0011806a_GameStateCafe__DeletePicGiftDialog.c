/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011806a GameStateCafe::DeletePicGiftDialog */

/* GameStateCafe::DeletePicGiftDialog() */

void __thiscall GameStateCafe::DeletePicGiftDialog(GameStateCafe *this)

{
  if (*(int *)(this + 0x138) != 0) {
    (**(code **)(**(int **)(this + 0x78) + 0x34))();
    if (*(int **)(this + 0x138) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x138) + 4))();
    }
    *(undefined4 *)(this + 0x138) = 0;
  }
  return;
}


