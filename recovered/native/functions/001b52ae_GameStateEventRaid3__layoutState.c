/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b52ae GameStateEventRaid3::layoutState */

/* GameStateEventRaid3::layoutState() */

void __thiscall GameStateEventRaid3::layoutState(GameStateEventRaid3 *this)

{
  GameStateEventRaid3 *pGVar1;
  
  pGVar1 = this + 0x2c;
  if (*pGVar1 == (GameStateEventRaid3)0x2) {
    if (this[0xe4] == (GameStateEventRaid3)0x0) {
      if (this[0xe8] == (GameStateEventRaid3)0x0) {
        *pGVar1 = (GameStateEventRaid3)0x6;
        *(undefined4 *)(this + 0x54) = 0;
      }
    }
    else {
      *pGVar1 = (GameStateEventRaid3)0x4;
      *(undefined4 *)(this + 0x54) = 0;
    }
  }
  return;
}


