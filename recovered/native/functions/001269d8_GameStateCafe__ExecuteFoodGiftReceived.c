/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001269d8 GameStateCafe::ExecuteFoodGiftReceived */

/* GameStateCafe::ExecuteFoodGiftReceived(int, int, int) */

undefined8 __thiscall
GameStateCafe::ExecuteFoodGiftReceived(GameStateCafe *this,int param_1,int param_2,int param_3)

{
  FoodStack *this_00;
  CapcomOrderableList<Furniture*> *this_01;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0xc);
  if ((param_1 < (int)(uint)*(byte *)(iVar2 + DAT_00126a50)) && (param_2 < 10)) {
    this_00 = (FoodStack *)operator_new(0x24);
    FoodStack::FoodStack(this_00,(uchar)param_1,(uchar)param_2);
    Vector<FoodStack*>::addElement((Vector<FoodStack*> *)(iVar2 + DAT_00126a54),this_00);
    *(int *)(this_00 + 4) = param_3;
    this_01 = (CapcomOrderableList<Furniture*> *)
              Cafe::createDistanceSortedFurnitureList(*(Cafe **)(this + 0x14),'\b',0);
    *(undefined4 *)(this_01 + 0x10) = *(undefined4 *)(this_01 + 8);
    do {
      iVar1 = CapcomOrderableList<Furniture*>::nextItem(this_01);
    } while (iVar1 == 0);
    *(undefined1 *)(iVar1 + 0x46) = 1;
    CapcomOrderableList<Furniture*>::removeAll(this_01);
    operator_delete(this_01);
  }
  return CONCAT44(param_3,iVar2);
}


