/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d0dfa QuestState::serialize */

/* QuestState::serialize(DataOutputStream*) */

void QuestState::serialize(DataOutputStream *param_1)

{
  int in_r1;
  undefined4 in_r3;
  undefined4 unaff_r4;
  
  DataOutputStream::writeInt(in_r1);
  DataOutputStream::writeByte((uchar)in_r1);
  DataOutputStream::writeInt(in_r1);
  DataOutputStream::writeDouble((double)CONCAT44(unaff_r4,in_r3));
  DataOutputStream::writeInt(in_r1);
  return;
}


