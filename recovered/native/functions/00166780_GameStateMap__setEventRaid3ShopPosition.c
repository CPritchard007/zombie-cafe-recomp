/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00166780 GameStateMap::setEventRaid3ShopPosition */

/* GameStateMap::setEventRaid3ShopPosition() */

void __thiscall GameStateMap::setEventRaid3ShopPosition(GameStateMap *this)

{
  int extraout_r1;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)(this + 0xd4) + 2;
  if (*(int *)(this + 0x37c) == 0) {
    iVar1 = *(int *)(this + 0xd4) + 1;
  }
  iVar3 = *(int *)(this + 0x90);
  if (*(int *)(this + 0x2d4) != 0) {
    iVar2 = (((iVar1 - (uint)(*(int *)(this + 0x22c) == 0)) - (uint)(*(int *)(this + 0x280) == 0)) -
            (uint)(*(int *)(this + 0x184) == 0)) + 4;
    iVar1 = __divsi3(iVar2,3);
    __aeabi_idivmod(iVar2,3);
    iVar2 = SmDev();
    if ((iVar2 == 3) || (iVar2 = SmDev(), iVar2 == 4)) {
      iVar4 = 0;
      iVar5 = 0;
      iVar6 = 0;
      iVar2 = 0x14;
    }
    else {
      iVar4 = 0x5a;
      iVar5 = 0x28;
      iVar6 = 0x28;
      iVar2 = 0x96;
    }
    positionCafe(this,(MapCafe *)(this + 0x2d4),iVar3 * iVar1,2 - extraout_r1,iVar4,iVar5,iVar6,
                 iVar2);
  }
  return;
}


