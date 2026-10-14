/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00126d28 GameStateCafe::onFoodGiftReceived */

/* GameStateCafe::onFoodGiftReceived(GameStateCafe*, String, int, int, int) */

void GameStateCafe::onFoodGiftReceived
               (int param_1,String *param_2,uchar param_3,uchar param_4,undefined4 param_5)

{
  FoodStack *this;
  MessageWithToxin *pMVar1;
  CapcomOrderableList<Furniture*> *this_00;
  int iVar2;
  String aSStack_20 [12];
  
  iVar2 = *(int *)(param_1 + 0xc);
  this = (FoodStack *)operator_new(0x24);
  FoodStack::FoodStack(this,param_3,param_4);
  Vector<FoodStack*>::addElement((Vector<FoodStack*> *)(iVar2 + DAT_00126dd0),this);
  *(undefined4 *)(this + 4) = param_5;
  String::String(aSStack_20,param_2);
  pMVar1 = (MessageWithToxin *)operator_new(0x14);
  MessageWithToxin::MessageWithToxin(pMVar1,aSStack_20,0);
  Vector<MessageWithToxin*>::addElement((Vector<MessageWithToxin*> *)(param_1 + 0x178),pMVar1);
  String::~String(aSStack_20);
  this_00 = (CapcomOrderableList<Furniture*> *)
            Cafe::createDistanceSortedFurnitureList(*(Cafe **)(param_1 + 0x14),'\b',0);
  *(undefined4 *)(this_00 + 0x10) = *(undefined4 *)(this_00 + 8);
  do {
    iVar2 = CapcomOrderableList<Furniture*>::nextItem(this_00);
  } while (iVar2 == 0);
  *(undefined1 *)(iVar2 + 0x46) = 1;
  CapcomOrderableList<Furniture*>::removeAll(this_00);
  operator_delete(this_00);
  return;
}


