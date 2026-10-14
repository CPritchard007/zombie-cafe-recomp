/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010d3a6 GameStateAmpouleRaid::getVacantSelectMember */

/* GameStateAmpouleRaid::getVacantSelectMember() */

int __thiscall GameStateAmpouleRaid::getVacantSelectMember(GameStateAmpouleRaid *this)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (this[iVar1 + 300] == (GameStateAmpouleRaid)0xff) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 6);
  return -1;
}


