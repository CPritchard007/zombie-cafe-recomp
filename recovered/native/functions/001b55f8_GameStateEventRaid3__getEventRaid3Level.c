/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b55f8 GameStateEventRaid3::getEventRaid3Level */

/* GameStateEventRaid3::getEventRaid3Level() */

int __thiscall GameStateEventRaid3::getEventRaid3Level(GameStateEventRaid3 *this)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(this + 100) <=
        *(int *)(DAT_001b561c + 0x1b562e + *(int *)(this + 0x30) * 0x20 + iVar1 * 4)) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 8);
  return 7;
}


