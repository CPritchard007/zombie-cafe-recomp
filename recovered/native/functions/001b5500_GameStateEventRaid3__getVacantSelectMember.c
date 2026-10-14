/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b5500 GameStateEventRaid3::getVacantSelectMember */

/* GameStateEventRaid3::getVacantSelectMember() */

int __thiscall GameStateEventRaid3::getVacantSelectMember(GameStateEventRaid3 *this)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (this[iVar1 + 0x154] == (GameStateEventRaid3)0xff) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 6);
  return -1;
}


