/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022753c ServingCounter::serializeChild */

/* ServingCounter::serializeChild(DataOutputStream*) */

void __thiscall ServingCounter::serializeChild(ServingCounter *this,DataOutputStream *param_1)

{
  int iVar1;
  
  Furniture::serializeChild((Furniture *)this,param_1);
  DataOutputStream::writeInt((int)param_1);
  DataOutputStream::writeShort((short)param_1);
  for (iVar1 = 0; iVar1 < *(int *)(this + 0x70) + 1; iVar1 = iVar1 + 1) {
    FoodStack::serialize(*(FoodStack **)(iVar1 * 4 + *(int *)(this + 0x74)),param_1);
  }
  return;
}


