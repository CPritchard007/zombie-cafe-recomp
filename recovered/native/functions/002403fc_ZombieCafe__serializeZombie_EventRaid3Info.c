/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002403fc ZombieCafe::serializeZombie_EventRaid3Info */

/* ZombieCafe::serializeZombie_EventRaid3Info(DataOutputStream*) */

void ZombieCafe::serializeZombie_EventRaid3Info(DataOutputStream *param_1)

{
  int in_r1;
  undefined4 in_r3;
  undefined4 unaff_r4;
  
  DataOutputStream::writeInt(in_r1);
  DataOutputStream::writeInt(in_r1);
  DataOutputStream::writeDouble((double)CONCAT44(unaff_r4,in_r3));
  __floatsidf(*(undefined4 *)(param_1 + 0x22c));
  DataOutputStream::writeDouble((double)CONCAT44(unaff_r4,in_r3));
  DataOutputStream::writeShort((short)in_r1);
  DataOutputStream::writeShort((short)in_r1);
  DataOutputStream::writeInt(in_r1);
  return;
}


