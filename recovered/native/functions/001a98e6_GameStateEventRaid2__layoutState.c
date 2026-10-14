/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a98e6 GameStateEventRaid2::layoutState */

/* GameStateEventRaid2::layoutState() */

void __thiscall GameStateEventRaid2::layoutState(GameStateEventRaid2 *this)

{
  GameStateEventRaid2 *pGVar1;
  
  pGVar1 = this + 0x2c;
  if (*pGVar1 == (GameStateEventRaid2)0x2) {
    if (this[0xd8] == (GameStateEventRaid2)0x0) {
      if (this[0xdc] == (GameStateEventRaid2)0x0) {
        *pGVar1 = (GameStateEventRaid2)0x6;
        *(undefined4 *)(this + 0x54) = 0;
      }
    }
    else {
      *pGVar1 = (GameStateEventRaid2)0x4;
      *(undefined4 *)(this + 0x54) = 0;
    }
  }
  return;
}


