/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00166518 GameStateMap::setColosseumPosition */

/* GameStateMap::setColosseumPosition() */

void __thiscall GameStateMap::setColosseumPosition(GameStateMap *this)

{
  int extraout_r1;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(this + 0xd4) + 2;
  if (*(int *)(this + 0x37c) == 0) {
    iVar1 = *(int *)(this + 0xd4) + 1;
  }
  iVar3 = *(int *)(this + 0x90);
  if (*(int *)(this + 0x184) != 0) {
    iVar2 = (iVar1 - (uint)(*(int *)(this + 0x22c) == 0)) + 2;
    iVar1 = __divsi3(iVar2,3);
    __aeabi_idivmod(iVar2,3);
    iVar2 = SmDev();
    if ((iVar2 == 3) || (iVar2 = SmDev(), iVar2 == 4)) {
      iVar2 = 0;
      iVar4 = 0;
    }
    else {
      iVar2 = 0x5c;
      iVar4 = 0x28;
    }
    positionCafe(this,(MapCafe *)(this + 0x184),iVar3 * iVar1,2 - extraout_r1,iVar2,iVar4,0,0);
  }
  return;
}


