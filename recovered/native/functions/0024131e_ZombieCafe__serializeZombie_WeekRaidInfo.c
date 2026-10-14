/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024131e ZombieCafe::serializeZombie_WeekRaidInfo */

/* ZombieCafe::serializeZombie_WeekRaidInfo(DataOutputStream*) */

void __thiscall ZombieCafe::serializeZombie_WeekRaidInfo(ZombieCafe *this,DataOutputStream *param_1)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar1;
  
  DataOutputStream::writeInt((int)param_1);
  DataOutputStream::writeInt((int)param_1);
  DataOutputStream::writeInt((int)param_1);
  DataOutputStream::writeDouble((double)CONCAT44(unaff_r5,unaff_r4));
  __floatsidf(*(undefined4 *)(this + 0x328));
  DataOutputStream::writeDouble((double)CONCAT44(unaff_r5,unaff_r4));
  DataOutputStream::writeShort((short)param_1);
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    DataOutputStream::writeByte((uchar)param_1);
  } while (iVar1 != 4);
  return;
}


