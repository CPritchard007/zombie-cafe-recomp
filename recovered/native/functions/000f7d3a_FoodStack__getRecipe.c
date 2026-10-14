/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f7d3a FoodStack::getRecipe */

/* FoodStack::getRecipe() const */

int __thiscall FoodStack::getRecipe(FoodStack *this)

{
  int iVar1;
  
  iVar1 = CapcomApp::getInstance();
  return *(int *)(*(int *)(iVar1 + 4) + 0x4e8) + (uint)*(ushort *)this * 0x1c;
}


