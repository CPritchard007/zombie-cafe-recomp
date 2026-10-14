/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00166690 GameStateMap::setEventRaid2ShopPosition */

/* GameStateMap::setEventRaid2ShopPosition() */

void __thiscall GameStateMap::setEventRaid2ShopPosition(GameStateMap *this)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = *(int *)(this + 0xd4) + 2;
  if (*(int *)(this + 0x37c) == 0) {
    iVar2 = *(int *)(this + 0xd4) + 1;
  }
  iVar4 = *(int *)(this + 0x90);
  if (*(int *)(this + 0x280) != 0) {
    iVar3 = ((iVar2 - (uint)(*(int *)(this + 0x22c) == 0)) - (uint)(*(int *)(this + 0x184) == 0)) +
            3;
    iVar2 = __divsi3(iVar3,3);
    __aeabi_idivmod(iVar3,3);
    iVar5 = 0x5a;
    iVar6 = 0x28;
    __mulsf3(*(undefined4 *)(this + 0xbc),DAT_0016672c);
    iVar3 = __fixsfsi();
    __mulsf3(*(undefined4 *)(this + 0xc0),DAT_00166730);
    iVar1 = __fixsfsi();
    positionCafe(this,(MapCafe *)(this + 0x280),iVar2 * iVar4,2 - extraout_r1,iVar5,iVar6,iVar3,
                 iVar1);
  }
  return;
}


