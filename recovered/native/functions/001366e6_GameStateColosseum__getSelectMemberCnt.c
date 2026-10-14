/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001366e6 GameStateColosseum::getSelectMemberCnt */

/* GameStateColosseum::getSelectMemberCnt() */

int __thiscall GameStateColosseum::getSelectMemberCnt(GameStateColosseum *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    iVar1 = iVar3 + 0x140;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + (uint)(this[iVar1] != (GameStateColosseum)0xff);
  } while (iVar3 != 6);
  return iVar2;
}


