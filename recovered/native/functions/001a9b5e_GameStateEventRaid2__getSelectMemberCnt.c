/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a9b5e GameStateEventRaid2::getSelectMemberCnt */

/* GameStateEventRaid2::getSelectMemberCnt() */

int __thiscall GameStateEventRaid2::getSelectMemberCnt(GameStateEventRaid2 *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    iVar1 = iVar3 + 0x148;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + (uint)(this[iVar1] != (GameStateEventRaid2)0xff);
  } while (iVar3 != 6);
  return iVar2;
}


