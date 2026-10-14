/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00118c30 FoodStack::getBurnTimeSeconds */

/* FoodStack::getBurnTimeSeconds() const */

void __thiscall FoodStack::getBurnTimeSeconds(FoodStack *this)

{
  Recipe *this_00;
  
  this_00 = (Recipe *)getRecipe(this);
  Recipe::getBurnTimeSeconds(this_00,(uchar)this[8]);
  return;
}


