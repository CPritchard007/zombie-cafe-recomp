/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023f460 ZombieCafe::serializeZombieFlowerInfo */

/* ZombieCafe::serializeZombieFlowerInfo(DataOutputStream*) */

void __thiscall ZombieCafe::serializeZombieFlowerInfo(ZombieCafe *this,DataOutputStream *param_1)

{
  short sVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar2;
  float fVar3;
  
  sVar1 = (short)param_1;
  DataOutputStream::writeShort(sVar1);
  DataOutputStream::writeShort(sVar1);
  iVar2 = 0;
  DataOutputStream::writeShort(sVar1);
  DataOutputStream::writeShort(sVar1);
  DataOutputStream::writeShort(sVar1);
  fVar3 = (float)DataOutputStream::writeShort(sVar1);
  DataOutputStream::writeFloat(fVar3);
  DataOutputStream::writeShort(sVar1);
  DataOutputStream::writeDouble((double)CONCAT44(unaff_r5,unaff_r4));
  DataOutputStream::writeDouble((double)CONCAT44(unaff_r5,unaff_r4));
  DataOutputStream::writeBoolean(SUB41(param_1,0));
  DataOutputStream::writeInt((int)param_1);
  do {
    iVar2 = iVar2 + 4;
    DataOutputStream::writeInt((int)param_1);
  } while (iVar2 != 0x20);
  return;
}


