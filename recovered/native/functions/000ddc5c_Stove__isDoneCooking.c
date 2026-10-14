/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ddc5c Stove::isDoneCooking */

/* Stove::isDoneCooking() */

FoodStack * __thiscall Stove::isDoneCooking(Stove *this)

{
  FoodStack *this_00;
  FoodStack *pFVar1;
  Recipe *this_01;
  int iVar2;
  uint uVar3;
  
  this_00 = *(FoodStack **)(this + 100);
  pFVar1 = this_00;
  if ((this_00 != (FoodStack *)0x0) &&
     (pFVar1 = (FoodStack *)(uint)(byte)this[0x2e], pFVar1 != (FoodStack *)0x0)) {
    uVar3 = *(uint *)(this + 0x70);
    this_01 = (Recipe *)FoodStack::getRecipe(this_00);
    iVar2 = Recipe::getCookTimeSeconds(this_01,(uchar)this_00[8]);
    pFVar1 = (FoodStack *)
             ((((int)uVar3 >> 0x1f) - (iVar2 * 1000 >> 0x1f)) +
              (uint)((uint)(iVar2 * 1000) <= uVar3) & 0xff);
  }
  return pFVar1;
}


