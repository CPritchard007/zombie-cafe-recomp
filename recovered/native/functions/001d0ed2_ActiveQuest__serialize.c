/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d0ed2 ActiveQuest::serialize */

/* ActiveQuest::serialize(DataOutputStream*) */

void ActiveQuest::serialize(DataOutputStream *param_1)

{
  int in_r1;
  undefined4 in_r3;
  undefined4 unaff_r4;
  
  DataOutputStream::writeInt(in_r1);
  DataOutputStream::writeBoolean(SUB41(in_r1,0));
  DataOutputStream::writeInt(in_r1);
  DataOutputStream::writeDouble((double)CONCAT44(unaff_r4,in_r3));
  DataOutputStream::writeBoolean(SUB41(in_r1,0));
  return;
}


