/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002449f8 ZombieCafe::serializeZombie_basicEventInfo */

/* ZombieCafe::serializeZombie_basicEventInfo(DataOutputStream*) */

void ZombieCafe::serializeZombie_basicEventInfo(DataOutputStream *param_1)

{
  int in_r1;
  undefined4 in_r3;
  undefined4 unaff_r4;
  
  DataOutputStream::writeInt(in_r1);
  DataOutputStream::writeLong(CONCAT44(unaff_r4,in_r3));
  DataOutputStream::writeLong(CONCAT44(unaff_r4,in_r3));
  DataOutputStream::writeInt(in_r1);
  DataOutputStream::writeInt(in_r1);
  DataOutputStream::writeInt(in_r1);
  return;
}


