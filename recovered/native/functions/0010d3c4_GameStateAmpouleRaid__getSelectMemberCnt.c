/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010d3c4 GameStateAmpouleRaid::getSelectMemberCnt */

/* GameStateAmpouleRaid::getSelectMemberCnt() */

int __thiscall GameStateAmpouleRaid::getSelectMemberCnt(GameStateAmpouleRaid *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    iVar1 = iVar3 + 300;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + (uint)(this[iVar1] != (GameStateAmpouleRaid)0xff);
  } while (iVar3 != 6);
  return iVar2;
}


