/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00166828 GameStateMap::setAmpouleRaidShopPosition */

/* GameStateMap::setAmpouleRaidShopPosition() */

void __thiscall GameStateMap::setAmpouleRaidShopPosition(GameStateMap *this)

{
  int extraout_r1;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 0xd4) + 2;
  if (*(int *)(this + 0x280) == 0) {
    iVar1 = *(int *)(this + 0xd4) + 1;
  }
  iVar3 = *(int *)(this + 0x90);
  if (*(int *)(this + 0x328) != 0) {
    iVar2 = (((iVar1 - (uint)(*(int *)(this + 0x22c) == 0)) - (uint)(*(int *)(this + 0x37c) == 0)) -
            (uint)(*(int *)(this + 0x184) == 0)) + 4;
    iVar1 = __divsi3(iVar2,3);
    __aeabi_idivmod(iVar2,3);
    positionCafe(this,(MapCafe *)(this + 0x328),iVar1 * iVar3,2 - extraout_r1,0,0,0,0x2a);
  }
  return;
}


