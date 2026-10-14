/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017f51c GameStateRaid::stopColorShift */

/* GameStateRaid::stopColorShift() */

void __thiscall GameStateRaid::stopColorShift(GameStateRaid *this)

{
  if (*(int *)(this + 0x84) != 0) {
    *(undefined4 *)(*(int *)(this + 0x84) + 0x28) = 0;
    *(undefined4 *)(this + 0x84) = 0;
  }
  return;
}


