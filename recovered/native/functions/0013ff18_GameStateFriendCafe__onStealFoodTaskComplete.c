/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013ff18 GameStateFriendCafe::onStealFoodTaskComplete */

/* GameStateFriendCafe::onStealFoodTaskComplete(GameStateFriendCafe*, StealFoodTask*) */

void GameStateFriendCafe::onStealFoodTaskComplete
               (GameStateFriendCafe *param_1,StealFoodTask *param_2)

{
  StatusNote *pSVar1;
  FoodStack *pFVar2;
  undefined4 uVar3;
  Cafe *this;
  String aSStack_20 [12];
  
  *(undefined4 *)(*(int *)(param_2 + 0x20) + 0x88) = 0;
  if (param_2[5] != (StealFoodTask)0x0) {
    this = *(Cafe **)(param_1 + 0x34);
    String::String(aSStack_20,(char *)(DAT_0013fff8 + 0x13ff38));
    pSVar1 = (StatusNote *)operator_new(0x30);
    StatusNote::StatusNote
              (pSVar1,*(undefined4 *)(param_2 + 0x20),3,aSStack_20,
               **(undefined4 **)(DAT_0013fffc + 0x13ff4a),0xffffffff,0);
    Cafe::addStatusNote(this,pSVar1);
    String::~String(aSStack_20);
    pFVar2 = (FoodStack *)operator_new(0x24);
    FoodStack::FoodStack(pFVar2,**(uchar **)(param_2 + 0x24),(*(uchar **)(param_2 + 0x24))[8]);
    __mulsf3(*(undefined4 *)(param_1 + 0x118),**(undefined4 **)(DAT_00140000 + 0x13ff8a));
    uVar3 = __fixsfsi();
    *(undefined4 *)(pFVar2 + 4) = uVar3;
    Vector<FoodStack*>::addElement((Vector<FoodStack*> *)(param_1 + 0xf8),pFVar2);
    pFVar2 = *(FoodStack **)(param_2 + 0x24);
    if (pFVar2 != (FoodStack *)0x0) {
      FoodStack::~FoodStack(pFVar2);
      operator_delete(pFVar2);
    }
    *(undefined4 *)(param_2 + 0x24) = 0;
    while (pFVar2 = (FoodStack *)Cafe::getNewRandomFoodStack(*(Cafe **)(param_1 + 0x34),true),
          pFVar2 != (FoodStack *)0x0) {
      FoodStack::~FoodStack(pFVar2);
      operator_delete(pFVar2);
    }
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  return;
}


