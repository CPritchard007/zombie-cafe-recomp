/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fdd1c ObjectiveSystem::serialize */

/* ObjectiveSystem::serialize(DataOutputStream*) */

void ObjectiveSystem::serialize(DataOutputStream *param_1)

{
  int in_r1;
  undefined4 in_r3;
  undefined4 unaff_r4;
  int iVar1;
  
  DataOutputStream::writeInt(in_r1);
  DataOutputStream::writeLong(CONCAT44(unaff_r4,in_r3));
  DataOutputStream::writeLong(CONCAT44(unaff_r4,in_r3));
  DataOutputStream::writeInt(in_r1);
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 8) + 1; iVar1 = iVar1 + 1) {
    DataOutputStream::writeShort((short)in_r1);
    DataOutputStream::writeInt(in_r1);
    DataOutputStream::writeInt(in_r1);
    DataOutputStream::writeShort((short)in_r1);
    DataOutputStream::writeBoolean(SUB41(in_r1,0));
  }
  DataOutputStream::writeLong(CONCAT44(unaff_r4,in_r3));
  return;
}


