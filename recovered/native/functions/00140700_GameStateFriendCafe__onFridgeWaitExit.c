/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00140700 GameStateFriendCafe::onFridgeWaitExit */

/* GameStateFriendCafe::onFridgeWaitExit(long) */

void GameStateFriendCafe::onFridgeWaitExit(long param_1)

{
  Recipe *pRVar1;
  int iVar2;
  int extraout_r1;
  FoodStack *pFVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  String aSStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  CapcomDate aCStack_20 [12];
  
  if ((*(char *)(*(int *)(param_1 + 0x1bc) + 0x14) == '\0') &&
     (iVar6 = (int)*(short *)(*(int *)(param_1 + 0x1bc) + 0xce), iVar6 != DAT_00140864)) {
    if (*(int *)(param_1 + 0x214) == 2) {
      if (*(int *)(param_1 + 0x218) != 0) {
        String::String(aSStack_30,(String *)(*(int *)(param_1 + 0x218) + 0xc));
        iVar6 = operator!=(aSStack_30,0);
        String::~String(aSStack_30);
        if (iVar6 != 0) {
          pFVar3 = *(FoodStack **)(param_1 + 0x218);
          pRVar1 = (Recipe *)FoodStack::getRecipe(pFVar3);
          iVar6 = Recipe::getServings(pRVar1,(uchar)pFVar3[8]);
          pFVar3 = *(FoodStack **)(param_1 + 0x218);
          pRVar1 = (Recipe *)FoodStack::getRecipe(pFVar3);
          iVar2 = Recipe::getSellPrice(pRVar1,(uchar)pFVar3[8]);
          ZombieCafe::addCash(*(ZombieCafe **)(param_1 + 0xc),iVar6 * iVar2);
        }
        pFVar3 = *(FoodStack **)(param_1 + 0x218);
        if (pFVar3 != (FoodStack *)0x0) {
          FoodStack::~FoodStack(pFVar3);
          operator_delete(pFVar3);
        }
        *(undefined4 *)(param_1 + 0x218) = 0;
      }
      iVar6 = *(int *)(param_1 + 0xc);
      CapcomDate::now((CapcomDate *)&local_28);
      iVar6 = CapcomDate::daysBetween
                        (*(undefined4 *)(iVar6 + 0x6c0),*(undefined4 *)(iVar6 + 0x6c4),local_28,
                         local_24);
      iVar2 = *(int *)(param_1 + 0xc);
      CapcomDate::now(aCStack_20);
      memcpy((void *)(iVar2 + 0x6c0),aCStack_20,7);
      iVar2 = CapcomDate::dayInWeek();
      for (iVar4 = 0; iVar5 = *(int *)(param_1 + 0xc), iVar4 < iVar6; iVar4 = iVar4 + 1) {
        __aeabi_idivmod(iVar4 + iVar2,7);
        *(undefined4 *)(extraout_r1 * 4 + *(int *)(iVar5 + DAT_00140868)) = 0;
      }
      if (*(char *)(iVar5 + 0x950) == '\0') {
        piVar7 = (int *)(*(int *)(iVar5 + DAT_00140868) + iVar2 * 4);
        *piVar7 = *piVar7 + 1;
      }
      ZombieCafe::save();
      FridgeDialog::refreshPage(*(FridgeDialog **)(param_1 + 0x1bc));
      *(undefined1 *)(param_1 + 0x38) = 0;
    }
    else if (*(int *)(param_1 + 0x214) == 3) {
      *(undefined1 *)(param_1 + 0x38) = 0;
      if (*(FoodStack **)(param_1 + 0x218) != (FoodStack *)0x0) {
        Vector<FoodStack*>::insertElementAt
                  ((Vector<FoodStack*> *)(*(int *)(param_1 + 0xc) + DAT_0014086c),
                   *(FoodStack **)(param_1 + 0x218),iVar6);
        Vector<FoodStack*>::insertElementAt
                  (*(Vector<FoodStack*> **)(param_1 + 0x1b8),*(FoodStack **)(param_1 + 0x218),iVar6)
        ;
        *(undefined4 *)(param_1 + 0x218) = 0;
      }
    }
  }
  return;
}


