/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b551e GameStateEventRaid3::getSelectMemberCnt */

/* GameStateEventRaid3::getSelectMemberCnt() */

int __thiscall GameStateEventRaid3::getSelectMemberCnt(GameStateEventRaid3 *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    iVar1 = iVar3 + 0x154;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + (uint)(this[iVar1] != (GameStateEventRaid3)0xff);
  } while (iVar3 != 6);
  return iVar2;
}


