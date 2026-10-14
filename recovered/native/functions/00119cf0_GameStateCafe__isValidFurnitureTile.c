/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00119cf0 GameStateCafe::isValidFurnitureTile */

/* GameStateCafe::isValidFurnitureTile(int, FurnitureData*) */

bool __thiscall
GameStateCafe::isValidFurnitureTile(GameStateCafe *this,int param_1,FurnitureData *param_2)

{
  short sVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Cafe *this_00;
  
  if ((byte)param_2[0x44] - 0xe < 2) {
    lVar2 = Cafe::indexToStaggeredCoords(param_1);
    iVar3 = Cafe::staggeredToDiamondCoords(lVar2);
    iVar3 = iVar3 >> 0x10;
    lVar2 = Cafe::indexToStaggeredCoords(param_1);
    sVar1 = Cafe::staggeredToDiamondCoords(lVar2);
    this_00 = *(Cafe **)(this + 0x14);
    iVar5 = (int)sVar1;
    iVar4 = (int)*(short *)(this_00 + 0x9e) + (uint)(byte)this_00[0xa1];
    if (((iVar5 != iVar4 + 1) || (*(short *)(this_00 + 0x9c) <= iVar3)) ||
       (iVar3 < (int)((int)*(short *)(this_00 + 0x9c) - (uint)(byte)this_00[0xa0]))) {
      if (iVar3 != ((int)*(short *)(this_00 + 0x9c) - (uint)(byte)this_00[0xa0]) + -1) {
        return false;
      }
      if (iVar5 <= *(short *)(this_00 + 0x9e)) {
        return false;
      }
      if (iVar4 < iVar5) {
        return false;
      }
    }
  }
  else {
    iVar3 = Cafe::isInside(*(Cafe **)(this + 0x14),param_1);
    if (iVar3 == 0) {
      return false;
    }
    this_00 = *(Cafe **)(this + 0x14);
  }
  iVar3 = Cafe::getFurniture(this_00,param_1);
  return iVar3 == 0;
}


