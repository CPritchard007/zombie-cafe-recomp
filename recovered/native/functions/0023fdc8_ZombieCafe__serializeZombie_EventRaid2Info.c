/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023fdc8 ZombieCafe::serializeZombie_EventRaid2Info */

/* ZombieCafe::serializeZombie_EventRaid2Info(DataOutputStream*) */

void __thiscall
ZombieCafe::serializeZombie_EventRaid2Info(ZombieCafe *this,DataOutputStream *param_1)

{
  short sVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar2;
  
  DataOutputStream::writeInt((int)param_1);
  iVar2 = 0;
  DataOutputStream::writeLong(CONCAT44(unaff_r5,unaff_r4));
  DataOutputStream::writeDouble((double)CONCAT44(unaff_r5,unaff_r4));
  DataOutputStream::writeInt((int)param_1);
  DataOutputStream::writeLong(CONCAT44(unaff_r5,unaff_r4));
  __floatsidf(*(undefined4 *)(this + 0x1c8));
  DataOutputStream::writeDouble((double)CONCAT44(unaff_r5,unaff_r4));
  sVar1 = (short)param_1;
  DataOutputStream::writeShort(sVar1);
  DataOutputStream::writeShort(sVar1);
  do {
    iVar2 = iVar2 + 2;
    DataOutputStream::writeShort(sVar1);
  } while (iVar2 != 0x3e);
  DataOutputStream::writeLong(CONCAT44(unaff_r5,unaff_r4));
  return;
}


