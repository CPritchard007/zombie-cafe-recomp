/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019eafe GameStateEventRaid::layoutState */

/* GameStateEventRaid::layoutState() */

void __thiscall GameStateEventRaid::layoutState(GameStateEventRaid *this)

{
  if (this[0x18] == (GameStateEventRaid)0x2) {
    if (this[0xb8] == (GameStateEventRaid)0x0) {
      if (this[0xbc] != (GameStateEventRaid)0x0) {
        return;
      }
      this[0x18] = (GameStateEventRaid)0x7;
    }
    else {
      this[0x18] = (GameStateEventRaid)0x4;
    }
    *(undefined4 *)(this + 0x3c) = 0;
  }
  return;
}


