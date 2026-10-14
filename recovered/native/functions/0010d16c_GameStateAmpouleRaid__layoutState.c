/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010d16c GameStateAmpouleRaid::layoutState */

/* GameStateAmpouleRaid::layoutState() */

void __thiscall GameStateAmpouleRaid::layoutState(GameStateAmpouleRaid *this)

{
  if (this[0x20] == (GameStateAmpouleRaid)0x2) {
    if (this[0xbc] == (GameStateAmpouleRaid)0x0) {
      if (this[0xc0] == (GameStateAmpouleRaid)0x0) {
        this[0x20] = (GameStateAmpouleRaid)0x8;
        *(undefined4 *)(this + 0x44) = 0;
      }
    }
    else {
      this[0x20] = (GameStateAmpouleRaid)0x4;
      *(undefined4 *)(this + 0x44) = 0;
    }
  }
  return;
}


