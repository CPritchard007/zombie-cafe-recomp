/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ecf3e FoodStack::getXp */

/* FoodStack::getXp() const */

void __thiscall FoodStack::getXp(FoodStack *this)

{
  Recipe *this_00;
  
  this_00 = (Recipe *)getRecipe(this);
  Recipe::getXp(this_00,(uchar)this[8]);
  return;
}


