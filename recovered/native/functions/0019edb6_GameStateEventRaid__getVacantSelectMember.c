/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019edb6 GameStateEventRaid::getVacantSelectMember */

/* GameStateEventRaid::getVacantSelectMember() */

int __thiscall GameStateEventRaid::getVacantSelectMember(GameStateEventRaid *this)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (this[iVar1 + 0x128] == (GameStateEventRaid)0xff) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 6);
  return -1;
}


