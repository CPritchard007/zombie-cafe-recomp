/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00178254 GameStatePowerup::releaseCharacter */

/* GameStatePowerup::releaseCharacter(int) */

void __thiscall GameStatePowerup::releaseCharacter(GameStatePowerup *this,int param_1)

{
  if (*(int **)(this + (param_1 + 0x44) * 4 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(this + (param_1 + 0x44) * 4 + 4) + 4))();
    *(undefined4 *)(this + (param_1 + 0x44) * 4 + 4) = 0;
  }
  return;
}


