/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011ff00 GameStateCafe::getMokubaCount */

/* GameStateCafe::getMokubaCount() */

int __thiscall GameStateCafe::getMokubaCount(GameStateCafe *this)

{
  CapcomOrderableList<Furniture*> *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  
  this_00 = (CapcomOrderableList<Furniture*> *)
            Cafe::createDistanceSortedFurnitureList(*(Cafe **)(this + 0x14),'\r',0);
  iVar3 = 0;
  *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(this_00 + 8);
  while (iVar1 = CapcomOrderableList<Furniture*>::nextItem(this_00), iVar1 != 0) {
    iVar3 = iVar3 + (uint)(*(int *)(*(int *)(iVar1 + 0x38) + 0x24) + DAT_0011ff7c == 0);
  }
  CapcomOrderableList<Furniture*>::removeAll(this_00);
  operator_delete(this_00);
  for (iVar1 = 0; iVar1 < *(int *)(*(int *)(*(int *)(this + 0xc) + 0x7e8) + 0x100) + 1;
      iVar1 = iVar1 + 1) {
    iVar2 = *(int *)(*(int *)(iVar1 * 4 + *(int *)(*(int *)(*(int *)(this + 0xc) + 0x7e8) + 0x104))
                     * 4 + *(int *)(*(int *)(this + 0x14) + 0x94));
    if (*(char *)(iVar2 + 0x44) == '\r') {
      iVar3 = iVar3 + (uint)(*(int *)(iVar2 + 0x24) + DAT_0011ff7c == 0);
    }
  }
  return iVar3;
}


