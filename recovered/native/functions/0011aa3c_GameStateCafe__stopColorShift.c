/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011aa3c GameStateCafe::stopColorShift */

/* GameStateCafe::stopColorShift() */

void __thiscall GameStateCafe::stopColorShift(GameStateCafe *this)

{
  if (*(int *)(this + 0x58) != 0) {
    *(undefined4 *)(*(int *)(this + 0x58) + 0x28) = 0;
    *(undefined4 *)(this + 0x58) = 0;
  }
  return;
}


