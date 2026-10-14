/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f7e26 Food::serializeChild */

/* Food::serializeChild(DataOutputStream*) */

void __thiscall Food::serializeChild(Food *this,DataOutputStream *param_1)

{
  Furniture::serializeChild((Furniture *)this,param_1);
  FoodStack::serialize(*(FoodStack **)(this + 100),param_1);
  return;
}


