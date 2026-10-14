/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00240ce8 ZombieCafe::serializeZombie_InstallGiftInfo */

/* ZombieCafe::serializeZombie_InstallGiftInfo(DataOutputStream*) */

void __thiscall
ZombieCafe::serializeZombie_InstallGiftInfo(ZombieCafe *this,DataOutputStream *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    DataOutputStream::writeBoolean(SUB41(param_1,0));
  } while (iVar1 != 5);
  return;
}


