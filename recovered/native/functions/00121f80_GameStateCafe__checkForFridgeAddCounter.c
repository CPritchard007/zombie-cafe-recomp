/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00121f80 GameStateCafe::checkForFridgeAddCounter */

/* GameStateCafe::checkForFridgeAddCounter() */

void __thiscall GameStateCafe::checkForFridgeAddCounter(GameStateCafe *this)

{
  char cVar1;
  FoodStack *pFVar2;
  CapcomOrderableList<Furniture*> *this_00;
  ServingCounter *this_01;
  int iVar3;
  
  cVar1 = *(char *)(*(int *)(this + 0x9c) + 0xd0);
  iVar3 = (int)*(short *)(*(int *)(this + 0x9c) + 0xce);
  if (iVar3 != DAT_00121ff4) {
    pFVar2 = (FoodStack *)
             Vector<FoodStack*>::removeElementAt
                       ((Vector<FoodStack*> *)(*(int *)(this + 0xc) + DAT_00121ff8),iVar3);
    if (cVar1 == '\0') {
      this_00 = (CapcomOrderableList<Furniture*> *)
                Cafe::createDistanceSortedFurnitureList(*(Cafe **)(this + 0x14),'\b',0);
      *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(this_00 + 8);
      iVar3 = CapcomOrderableList<Furniture*>::nextItem(this_00);
      if (iVar3 != 0) {
        iVar3 = (int)*(short *)(iVar3 + 0x2c);
      }
      CapcomOrderableList<Furniture*>::removeAll(this_00);
      operator_delete(this_00);
      this_01 = (ServingCounter *)
                Cafe::getAppropriateCounterForDish
                          (*(Cafe **)(this + 0x14),(uint)*(ushort *)pFVar2,iVar3);
      if (this_01 != (ServingCounter *)0x0) {
        ServingCounter::addFood(this_01,pFVar2);
      }
    }
    FridgeDialog::show(*(FridgeDialog **)(this + 0x9c),false);
  }
  return;
}


