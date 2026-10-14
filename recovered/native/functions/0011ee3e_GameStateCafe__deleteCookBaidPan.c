/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011ee3e GameStateCafe::deleteCookBaidPan */

/* GameStateCafe::deleteCookBaidPan() */

void __thiscall GameStateCafe::deleteCookBaidPan(GameStateCafe *this)

{
  CapcomOrderableList<Furniture*> *this_00;
  Stove *this_01;
  
  this_00 = (CapcomOrderableList<Furniture*> *)
            Cafe::createDistanceSortedFurnitureList(*(Cafe **)(this + 0x14),'\x01',0);
  *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(this_00 + 8);
  while (this_01 = (Stove *)CapcomOrderableList<Furniture*>::nextItem(this_00),
        this_01 != (Stove *)0x0) {
    if ((((*(int *)(this_01 + 0x3c) != 0) && (*(int *)(this_01 + 100) != 0)) &&
        (this_01[0x2e] != (Stove)0x0)) && (*(short *)(this_01 + 0x84) == 1)) {
      Stove::stopCooking(this_01);
    }
  }
  return;
}


