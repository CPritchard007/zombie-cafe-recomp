/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00240de8 ZombieCafe::serializeZombie_AmpouleRaidInfo */

/* ZombieCafe::serializeZombie_AmpouleRaidInfo(DataOutputStream*) */

undefined8 __thiscall
ZombieCafe::serializeZombie_AmpouleRaidInfo(ZombieCafe *this,DataOutputStream *param_1)

{
  short sVar1;
  int iVar2;
  ZombieCafe *pZVar3;
  DataOutputStream *pDVar4;
  
  pZVar3 = this;
  pDVar4 = param_1;
  DataOutputStream::writeInt((int)param_1);
  DataOutputStream::writeInt((int)param_1);
  DataOutputStream::writeInt((int)param_1);
  DataOutputStream::writeLong(CONCAT44(pDVar4,pZVar3));
  sVar1 = (short)param_1;
  DataOutputStream::writeShort(sVar1);
  DataOutputStream::writeShort(sVar1);
  iVar2 = 0;
  do {
    DataOutputStream::writeShort(sVar1);
    DataOutputStream::writeBoolean(SUB41(param_1,0));
    DataOutputStream::writeInt((int)param_1);
    iVar2 = iVar2 + 1;
    this = this + 4;
  } while (iVar2 != 8);
  DataOutputStream::writeDouble((double)CONCAT44(this,pZVar3));
  return CONCAT44(this,pZVar3);
}


