/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001366c8 GameStateColosseum::getVacantSelectMember */

/* GameStateColosseum::getVacantSelectMember() */

int __thiscall GameStateColosseum::getVacantSelectMember(GameStateColosseum *this)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (this[iVar1 + 0x140] == (GameStateColosseum)0xff) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 6);
  return -1;
}


