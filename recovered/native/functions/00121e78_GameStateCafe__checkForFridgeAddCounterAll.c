/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00121e78 GameStateCafe::checkForFridgeAddCounterAll */

/* GameStateCafe::checkForFridgeAddCounterAll() */

void __thiscall GameStateCafe::checkForFridgeAddCounterAll(GameStateCafe *this)

{
  CapcomOrderableList<Furniture*> *this_00;
  int iVar1;
  ServingCounter *this_01;
  int iVar2;
  FoodStack *pFVar3;
  int iVar4;
  int local_30;
  int local_2c;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  this_00 = (CapcomOrderableList<Furniture*> *)
            Cafe::createDistanceSortedFurnitureList(*(Cafe **)(this + 0x14),'\b',0);
  *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(this_00 + 8);
  local_30 = CapcomOrderableList<Furniture*>::nextItem(this_00);
  if (local_30 != 0) {
    local_30 = (int)*(short *)(local_30 + 0x2c);
  }
  CapcomOrderableList<Furniture*>::removeAll(this_00);
  operator_delete(this_00);
  iVar4 = *(int *)(*(int *)(this + 0xc) + DAT_00121f7c + 4);
  local_2c = iVar4 << 2;
  for (; 0 < iVar4 + 1; iVar4 = iVar4 + -1) {
    pFVar3 = *(FoodStack **)(*(int *)(*(int *)(this + 0xc) + DAT_00121f7c + 8) + local_2c);
    if (pFVar3 != (FoodStack *)0x0) {
      FoodStack::getRecipe(pFVar3);
      iVar1 = ZombieCafe::isRecipeUnlocked
                        (*(ZombieCafe **)(this + 0xc),(uint)*(ushort *)pFVar3,(uchar)pFVar3[8]);
      if (iVar1 != 0) {
        String::String(aSStack_28,(String *)(pFVar3 + 0xc));
        iVar1 = operator==(aSStack_28,0);
        iVar2 = 1;
        if (iVar1 == 0) {
          String::String(aSStack_20,(String *)(pFVar3 + 0x14));
          iVar2 = operator==(aSStack_20,0);
          String::~String(aSStack_20);
        }
        String::~String(aSStack_28);
        if (iVar2 != 0) {
          pFVar3 = (FoodStack *)
                   Vector<FoodStack*>::removeElementAt
                             ((Vector<FoodStack*> *)(*(int *)(this + 0xc) + DAT_00121f7c),iVar4);
          this_01 = (ServingCounter *)
                    Cafe::getAppropriateCounterForDish
                              (*(Cafe **)(this + 0x14),(uint)*(ushort *)pFVar3,local_30);
          if (this_01 != (ServingCounter *)0x0) {
            ServingCounter::addFood(this_01,pFVar3);
          }
        }
      }
    }
    local_2c = local_2c + -4;
  }
  FridgeDialog::refreshPage(*(FridgeDialog **)(this + 0x9c));
  FridgeDialog::show(*(FridgeDialog **)(this + 0x9c),false);
  return;
}


