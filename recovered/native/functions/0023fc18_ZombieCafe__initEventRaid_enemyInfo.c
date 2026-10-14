/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023fc18 ZombieCafe::initEventRaid_enemyInfo */

/* ZombieCafe::initEventRaid_enemyInfo() */

void __thiscall ZombieCafe::initEventRaid_enemyInfo(ZombieCafe *this)

{
  ZombieCafe *pZVar1;
  ZombieCafe *pZVar2;
  int iVar3;
  
  iVar3 = 0;
  pZVar1 = this;
  pZVar2 = this;
  do {
    *(undefined2 *)(pZVar1 + 0xfe) = 0;
    this[iVar3 + 0x10e] = (ZombieCafe)0x0;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(pZVar2 + 0x118) = 0;
    pZVar1 = pZVar1 + 2;
    pZVar2 = pZVar2 + 4;
  } while (iVar3 != 8);
  return;
}


