/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f7d54 FoodStack::FoodStack */

/* FoodStack::FoodStack(unsigned char, unsigned char) */

undefined8 __thiscall FoodStack::FoodStack(FoodStack *this,uchar param_1,uchar param_2)

{
  Recipe *this_00;
  undefined4 uVar1;
  
  String::String((String *)(this + 0xc));
  String::String((String *)(this + 0x14));
  *(ushort *)this = (ushort)param_1;
  this[8] = (FoodStack)param_2;
  this_00 = (Recipe *)getRecipe(this);
  uVar1 = Recipe::getServings(this_00,(uchar)this[8]);
  *(undefined4 *)(this + 4) = uVar1;
  String::operator=((String *)(this + 0xc),0);
  String::operator=((String *)(this + 0x14),0);
  return CONCAT44(this,this);
}


