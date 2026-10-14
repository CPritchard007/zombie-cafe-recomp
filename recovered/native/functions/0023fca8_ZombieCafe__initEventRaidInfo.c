/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023fca8 ZombieCafe::initEventRaidInfo */

/* ZombieCafe::initEventRaidInfo() */

void __thiscall ZombieCafe::initEventRaidInfo(ZombieCafe *this)

{
  undefined4 uVar1;
  ZombieCafe *pZVar2;
  ZombieCafe *pZVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  puVar5 = *(undefined4 **)(DAT_0023fd30 + 0x23fcb4);
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined2 *)(this + 0xf0) = 0;
  *(undefined2 *)(this + 0xf2) = 0;
  *(undefined2 *)(this + 0xf4) = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[0x1a] = 0;
  *(undefined1 *)(puVar5 + 0x1b) = 0;
  initEventRaid_attackPoint(this);
  iVar4 = 0;
  do {
    iVar6 = iVar4 + 4;
    *(undefined4 *)((int)puVar5 + iVar4 + 8) = 0xffffffff;
    *(undefined4 *)((int)puVar5 + iVar4 + 0x20) = 0;
    *(undefined4 *)((int)puVar5 + iVar4 + 0x38) = 0;
    *(undefined4 *)((int)puVar5 + iVar4 + 0x50) = 0;
    iVar4 = iVar6;
  } while (iVar6 != 0x18);
  iVar4 = 0;
  pZVar2 = this;
  pZVar3 = this;
  do {
    *(undefined2 *)(pZVar3 + 0xfe) = 0;
    this[iVar4 + 0x10e] = (ZombieCafe)0x0;
    iVar4 = iVar4 + 1;
    *(undefined4 *)(pZVar2 + 0x118) = 0;
    uVar1 = DAT_0023fd2c;
    pZVar3 = pZVar3 + 2;
    pZVar2 = pZVar2 + 4;
  } while (iVar4 != 8);
  *(undefined4 *)(this + 0x138) = DAT_0023fd28;
  *(undefined4 *)(this + 0x13c) = uVar1;
  return;
}


