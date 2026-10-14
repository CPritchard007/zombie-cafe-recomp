/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a99e4 GameStateEventRaid2::stopColorShift */

/* GameStateEventRaid2::stopColorShift() */

void __thiscall GameStateEventRaid2::stopColorShift(GameStateEventRaid2 *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0xb8);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(this + 0xb8) = 0;
  }
  return;
}


