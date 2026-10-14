/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001364c4 GameStateColosseum::layoutState */

/* GameStateColosseum::layoutState() */

void __thiscall GameStateColosseum::layoutState(GameStateColosseum *this)

{
  GameStateColosseum *pGVar1;
  
  pGVar1 = this + 0x2c;
  if (*pGVar1 == (GameStateColosseum)0x2) {
    if (this[0xd0] == (GameStateColosseum)0x0) {
      if (this[0xd4] == (GameStateColosseum)0x0) {
        *pGVar1 = (GameStateColosseum)0x6;
        *(undefined4 *)(this + 0x50) = 0;
      }
    }
    else {
      *pGVar1 = (GameStateColosseum)0x4;
      *(undefined4 *)(this + 0x50) = 0;
    }
  }
  return;
}


