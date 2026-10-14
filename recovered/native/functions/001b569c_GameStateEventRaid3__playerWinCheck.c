/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b569c GameStateEventRaid3::playerWinCheck */

/* GameStateEventRaid3::playerWinCheck() */

uint __thiscall GameStateEventRaid3::playerWinCheck(GameStateEventRaid3 *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(DAT_001b56b8 + *(int *)(this + 0x30) * 4 + 0x1b56d2);
  return (((int)*(uint *)(this + 0x5c) >> 0x1f) - ((int)uVar1 >> 0x1f)) +
         (uint)(uVar1 <= *(uint *)(this + 0x5c)) & 0xff;
}


