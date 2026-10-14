/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a9ce4 GameStateEventRaid2::playerWinCheck */

/* GameStateEventRaid2::playerWinCheck() */

uint __thiscall GameStateEventRaid2::playerWinCheck(GameStateEventRaid2 *this)

{
  return (((int)*(uint *)(this + 0x5c) >> 0x1f) - ((int)*(uint *)(this + 0x6c) >> 0x1f)) +
         (uint)(*(uint *)(this + 0x6c) <= *(uint *)(this + 0x5c)) & 0xff;
}


