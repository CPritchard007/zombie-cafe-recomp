/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011ae44 GameStateCafe::deselect */

/* GameStateCafe::deselect() */

void __thiscall GameStateCafe::deselect(GameStateCafe *this)

{
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  Cafe::select(*(Cafe **)(this + 0x14),(CafeObject *)0x0);
  return;
}


