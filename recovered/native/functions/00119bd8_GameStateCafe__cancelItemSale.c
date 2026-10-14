/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00119bd8 GameStateCafe::cancelItemSale */

/* GameStateCafe::cancelItemSale() */

void __thiscall GameStateCafe::cancelItemSale(GameStateCafe *this)

{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  
  if (*(int *)(this + 0x40) != 0) {
    if (this[DAT_00119c2c] == (GameStateCafe)0x1) {
      *(undefined2 *)(*(int *)(this + 0x40) + 0x2c) = *(undefined2 *)(this + 0x162);
      piVar2 = *(int **)(this + 0x40);
      pcVar3 = *(code **)(*piVar2 + 0xc);
      uVar1 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x14),(int)(short)piVar2[0xb]);
      (*pcVar3)(piVar2,uVar1);
      Cafe::addFurniture(*(Cafe **)(this + 0x14),*(Furniture **)(this + 0x40));
    }
    else if (this[DAT_00119c2c] == (GameStateCafe)0x2) {
      Cafe::addWallDecor(*(CafeWall **)(this + 0x14),*(Furniture **)(this + 0x48));
    }
    *(undefined4 *)(this + 0x40) = 0;
  }
  this[DAT_00119c30] = (GameStateCafe)0x2;
  return;
}


