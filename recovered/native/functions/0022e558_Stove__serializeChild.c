/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022e558 Stove::serializeChild */

/* Stove::serializeChild(DataOutputStream*) */

void Stove::serializeChild(DataOutputStream *param_1)

{
  DataOutputStream *in_r1;
  undefined4 in_r3;
  undefined4 unaff_r4;
  
  Furniture::serializeChild((Furniture *)param_1,in_r1);
  DataOutputStream::writeBoolean(SUB41(in_r1,0));
  if (*(FoodStack **)(param_1 + 100) != (FoodStack *)0x0) {
    FoodStack::serialize(*(FoodStack **)(param_1 + 100),in_r1);
  }
  DataOutputStream::writeLong(CONCAT44(unaff_r4,in_r3));
  DataOutputStream::writeLong(CONCAT44(unaff_r4,in_r3));
  DataOutputStream::writeShort((short)in_r1);
  return;
}


