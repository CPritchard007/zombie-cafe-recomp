/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00202594 PendingOrderDialog::onSendFoodWait */

/* PendingOrderDialog::onSendFoodWait(long) */

void PendingOrderDialog::onSendFoodWait(long param_1)

{
  int iVar1;
  Recipe *pRVar2;
  int iVar3;
  FoodStack *pFVar4;
  NoticeDialog *pNVar5;
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  if (*(int *)(param_1 + 0xe0) == 1) {
    pNVar5 = *(NoticeDialog **)(*(int *)(param_1 + 100) + 0xd0);
    Vector<String>::elementAt((int)aSStack_40);
    Vector<String>::elementAt((int)aSStack_38);
    NoticeDialog::show(pNVar5,aSStack_40,aSStack_38,0,0);
    String::~String(aSStack_38);
    String::~String(aSStack_40);
    *(undefined4 *)(param_1 + 0xe0) = 0;
    if (*(int *)(param_1 + 0xe8) != 0) {
      String::String(aSStack_30,(String *)(*(int *)(param_1 + 0xe8) + 0xc));
      iVar1 = operator!=(aSStack_30,0);
      String::~String(aSStack_30);
      if (iVar1 != 0) {
        pFVar4 = *(FoodStack **)(param_1 + 0xe8);
        pRVar2 = (Recipe *)FoodStack::getRecipe(pFVar4);
        iVar1 = Recipe::getServings(pRVar2,(uchar)pFVar4[8]);
        pFVar4 = *(FoodStack **)(param_1 + 0xe8);
        pRVar2 = (Recipe *)FoodStack::getRecipe(pFVar4);
        iVar3 = Recipe::getSellPrice(pRVar2,(uchar)pFVar4[8]);
        ZombieCafe::addCash(*(ZombieCafe **)(param_1 + 0x60),iVar1 * iVar3);
      }
      pFVar4 = *(FoodStack **)(param_1 + 0xe8);
      if (pFVar4 != (FoodStack *)0x0) {
        FoodStack::~FoodStack(pFVar4);
        operator_delete(pFVar4);
      }
      *(undefined4 *)(param_1 + 0xe8) = 0;
    }
    ZombieCafe::save();
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  else if (*(int *)(param_1 + 0xe0) == 2) {
    pNVar5 = *(NoticeDialog **)(*(int *)(param_1 + 100) + 0xd0);
    Vector<String>::elementAt((int)aSStack_28);
    Vector<String>::elementAt((int)aSStack_20);
    NoticeDialog::show(pNVar5,aSStack_28,aSStack_20,0,0);
    String::~String(aSStack_20);
    String::~String(aSStack_28);
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    pFVar4 = *(FoodStack **)(param_1 + 0xe8);
    if (pFVar4 != (FoodStack *)0x0) {
      Vector<FoodStack*>::insertElementAt
                ((Vector<FoodStack*> *)(*(int *)(param_1 + 0x60) + DAT_00202724),pFVar4,
                 *(int *)(param_1 + 0xe4));
      show((PendingOrderDialog *)param_1);
      *(undefined4 *)(param_1 + 0xe8) = 0;
    }
  }
  return;
}


