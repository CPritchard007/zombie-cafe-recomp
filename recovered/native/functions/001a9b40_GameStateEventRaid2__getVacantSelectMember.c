/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a9b40 GameStateEventRaid2::getVacantSelectMember */

/* GameStateEventRaid2::getVacantSelectMember() */

int __thiscall GameStateEventRaid2::getVacantSelectMember(GameStateEventRaid2 *this)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (this[iVar1 + 0x148] == (GameStateEventRaid2)0xff) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 6);
  return -1;
}


