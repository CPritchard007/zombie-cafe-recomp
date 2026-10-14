/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024108c ZombieCafe::initAmpouleRaid_enemyInfo */

/* ZombieCafe::initAmpouleRaid_enemyInfo() */

void __thiscall ZombieCafe::initAmpouleRaid_enemyInfo(ZombieCafe *this)

{
  int iVar1;
  ZombieCafe *pZVar2;
  ZombieCafe *pZVar3;
  int iVar4;
  
  iVar4 = 0;
  pZVar2 = this;
  pZVar3 = this;
  do {
    iVar1 = DAT_002410c0;
    *(undefined2 *)(pZVar2 + DAT_002410bc) = 0;
    this[iVar1 + iVar4] = (ZombieCafe)0x0;
    iVar4 = iVar4 + 1;
    *(undefined4 *)(pZVar3 + 0x2f8) = 0;
    pZVar2 = pZVar2 + 2;
    pZVar3 = pZVar3 + 4;
  } while (iVar4 != 8);
  return;
}


