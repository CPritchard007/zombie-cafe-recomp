/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00240d60 ZombieCafe::initAmpouleRaidInfo */

/* ZombieCafe::initAmpouleRaidInfo() */

void __thiscall ZombieCafe::initAmpouleRaidInfo(ZombieCafe *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ZombieCafe *pZVar4;
  undefined4 *puVar5;
  ZombieCafe *pZVar6;
  
  iVar3 = 0;
  *(undefined4 *)(this + 0x2c8) = 0;
  *(undefined4 *)(this + 0x2d0) = 0;
  *(undefined4 *)(this + 0x2cc) = 0;
  puVar5 = *(undefined4 **)(DAT_00240dd8 + 0x240d7e);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *(undefined4 *)(this + 0x2d4) = 0;
  *(undefined2 *)(this + 0x2d8) = 0;
  *(undefined2 *)(this + DAT_00240ddc) = 0;
  *(undefined2 *)(this + 0x2dc) = 0;
  uVar1 = DAT_00240dd4;
  *(undefined4 *)(this + 0x318) = DAT_00240dd0;
  *(undefined4 *)(this + 0x31c) = uVar1;
  pZVar4 = this;
  pZVar6 = this;
  do {
    iVar2 = DAT_00240de4;
    *(undefined2 *)(pZVar4 + DAT_00240de0) = 0;
    this[iVar2 + iVar3] = (ZombieCafe)0x0;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(pZVar6 + 0x2f8) = 0;
    pZVar4 = pZVar4 + 2;
    pZVar6 = pZVar6 + 4;
  } while (iVar3 != 8);
  return;
}


