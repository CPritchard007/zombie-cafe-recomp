/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011a632 GameStateCafe::testWallSection */

/* GameStateCafe::testWallSection(int, int) */

void GameStateCafe::testWallSection(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  Cafe *this;
  CafeTile *this_00;
  int local_20;
  int local_1c;
  
  iVar1 = Cafe::getNextTileNW(param_2);
  iVar2 = Cafe::getNextTileNE(param_2);
  this = *(Cafe **)(param_1 + 0x14);
  local_20 = 0;
  if (-1 < iVar1) {
    local_20 = CafeTile::isInside(*(CafeTile **)(iVar1 * 4 + *(int *)this));
  }
  local_1c = 0;
  if (-1 < iVar2) {
    local_1c = CafeTile::isInside(*(CafeTile **)(iVar2 * 4 + *(int *)this));
  }
  this_00 = *(CafeTile **)(param_2 * 4 + *(int *)this);
  iVar1 = CafeTile::isInside(this_00);
  if (((iVar1 == 0) || (local_20 != 0)) || (*(int *)(this_00 + 0xc) != 0)) {
    if (*(int *)(this_00 + 0xc) != 0) {
      if ((iVar1 != 0) && (local_20 == 0)) goto LAB_0011a6c0;
      Cafe::removeWallSection(this,param_2,0);
    }
    if (iVar1 == 0) goto LAB_0011a6d8;
  }
  else {
    Cafe::addWallSection(this,param_2,0);
  }
LAB_0011a6c0:
  if ((local_1c == 0) && (*(int *)(this_00 + 0x10) == 0)) {
    Cafe::addWallSection(*(Cafe **)(param_1 + 0x14),param_2,1);
    return;
  }
LAB_0011a6d8:
  if ((*(int *)(this_00 + 0x10) != 0) && ((iVar1 == 0 || (local_1c != 0)))) {
    Cafe::removeWallSection(*(Cafe **)(param_1 + 0x14),param_2,1);
  }
  return;
}


