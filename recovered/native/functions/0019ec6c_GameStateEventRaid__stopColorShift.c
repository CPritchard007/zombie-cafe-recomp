/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019ec6c GameStateEventRaid::stopColorShift */

/* GameStateEventRaid::stopColorShift() */

void __thiscall GameStateEventRaid::stopColorShift(GameStateEventRaid *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x9c);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(this + 0x9c) = 0;
  }
  return;
}


