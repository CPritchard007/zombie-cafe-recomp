/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001668ae GameStateMap::setWeekRaidShopPosition */

/* GameStateMap::setWeekRaidShopPosition() */

void __thiscall GameStateMap::setWeekRaidShopPosition(GameStateMap *this)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(this + 0xd4);
  iVar3 = *(int *)(this + 0x90);
  if (*(int *)(this + 0x37c) != 0) {
    iVar1 = __divsi3(iVar2 + 2,3);
    __aeabi_idivmod(iVar2 + 2,3);
    positionCafe(this,(MapCafe *)(this + 0x37c),iVar1 * iVar3,2 - extraout_r1,0,0,0,0x2a);
  }
  return;
}


