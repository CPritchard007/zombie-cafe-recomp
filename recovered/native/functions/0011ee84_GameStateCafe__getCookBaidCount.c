/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011ee84 GameStateCafe::getCookBaidCount */

/* GameStateCafe::getCookBaidCount() */

int __thiscall GameStateCafe::getCookBaidCount(GameStateCafe *this)

{
  CapcomOrderableList<Furniture*> *this_00;
  int iVar1;
  int iVar2;
  
  this_00 = (CapcomOrderableList<Furniture*> *)
            Cafe::createDistanceSortedFurnitureList(*(Cafe **)(this + 0x14),'\x01',0);
  iVar2 = 0;
  *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(this_00 + 8);
  while (iVar1 = CapcomOrderableList<Furniture*>::nextItem(this_00), iVar1 != 0) {
    if (((*(int *)(iVar1 + 0x3c) != 0) && (*(int *)(iVar1 + 100) != 0)) &&
       (*(char *)(iVar1 + 0x2e) != '\0')) {
      iVar2 = iVar2 + (uint)(*(short *)(iVar1 + 0x84) == 1);
    }
  }
  return iVar2;
}


