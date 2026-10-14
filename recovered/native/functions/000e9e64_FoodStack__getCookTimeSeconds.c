/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e9e64 FoodStack::getCookTimeSeconds */

/* FoodStack::getCookTimeSeconds() const */

void __thiscall FoodStack::getCookTimeSeconds(FoodStack *this)

{
  Recipe *this_00;
  
  this_00 = (Recipe *)getRecipe(this);
  Recipe::getCookTimeSeconds(this_00,(uchar)this[8]);
  return;
}


