/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b53ac GameStateEventRaid3::stopColorShift */

/* GameStateEventRaid3::stopColorShift() */

void __thiscall GameStateEventRaid3::stopColorShift(GameStateEventRaid3 *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0xbc);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(this + 0xbc) = 0;
  }
  return;
}


