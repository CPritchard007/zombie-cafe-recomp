/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000be5da Stove::isBurned */

/* Stove::isBurned() */

FoodStack * __thiscall Stove::isBurned(Stove *this)

{
  Recipe *pRVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  FoodStack *pFVar5;
  undefined4 uVar6;
  int iVar7;
  
  pFVar5 = *(FoodStack **)(this + 100);
  if (pFVar5 != (FoodStack *)0x0) {
    pRVar1 = (Recipe *)FoodStack::getRecipe(pFVar5);
    iVar2 = Recipe::getBurnTimeSeconds(pRVar1,(uchar)pFVar5[8]);
    pFVar5 = *(FoodStack **)(this + 100);
    pRVar1 = (Recipe *)FoodStack::getRecipe(pFVar5);
    iVar3 = Recipe::getCookTimeSeconds(pRVar1,(uchar)pFVar5[8]);
    uVar6 = *(undefined4 *)(*(int *)(this + 0x68) + 0x7c);
    pFVar5 = (FoodStack *)(uint)(byte)this[0x2e];
    if (pFVar5 != (FoodStack *)0x0) {
      uVar4 = __floatsisf(iVar2 - iVar3);
      __mulsf3(uVar4,uVar6);
      iVar3 = *(int *)(this + 0x70);
      iVar7 = *(int *)(this + 0x6c);
      iVar2 = __fixsfsi();
      pFVar5 = (FoodStack *)(uint)(iVar2 * 1000 < iVar7 - iVar3);
    }
  }
  return pFVar5;
}


