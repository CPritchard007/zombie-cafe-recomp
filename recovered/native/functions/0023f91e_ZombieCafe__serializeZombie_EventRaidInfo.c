/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023f91e ZombieCafe::serializeZombie_EventRaidInfo */

/* ZombieCafe::serializeZombie_EventRaidInfo(DataOutputStream*) */

undefined8 __thiscall
ZombieCafe::serializeZombie_EventRaidInfo(ZombieCafe *this,DataOutputStream *param_1)

{
  short sVar1;
  ZombieCafe *pZVar2;
  int iVar3;
  ZombieCafe *pZVar4;
  DataOutputStream *pDVar5;
  
  pZVar4 = this;
  pDVar5 = param_1;
  DataOutputStream::writeInt((int)param_1);
  DataOutputStream::writeInt((int)param_1);
  DataOutputStream::writeInt((int)param_1);
  DataOutputStream::writeLong(CONCAT44(pDVar5,pZVar4));
  sVar1 = (short)param_1;
  DataOutputStream::writeShort(sVar1);
  DataOutputStream::writeShort(sVar1);
  iVar3 = 0;
  pZVar2 = this;
  do {
    DataOutputStream::writeShort(sVar1);
    DataOutputStream::writeBoolean(SUB41(param_1,0));
    iVar3 = iVar3 + 1;
    DataOutputStream::writeInt((int)param_1);
    pZVar2 = pZVar2 + 4;
  } while (iVar3 != 8);
  DataOutputStream::writeDouble((double)CONCAT44(pZVar2,pZVar4));
  __floatsidf(*(undefined4 *)(this + 0xf8));
  DataOutputStream::writeDouble((double)CONCAT44(pZVar2,pZVar4));
  DataOutputStream::writeShort(sVar1);
  return CONCAT44(pZVar2,pZVar4);
}


