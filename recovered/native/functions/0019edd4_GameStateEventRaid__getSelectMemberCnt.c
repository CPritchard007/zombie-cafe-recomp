/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019edd4 GameStateEventRaid::getSelectMemberCnt */

/* GameStateEventRaid::getSelectMemberCnt() */

int __thiscall GameStateEventRaid::getSelectMemberCnt(GameStateEventRaid *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    iVar1 = iVar3 + 0x128;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + (uint)(this[iVar1] != (GameStateEventRaid)0xff);
  } while (iVar3 != 6);
  return iVar2;
}


