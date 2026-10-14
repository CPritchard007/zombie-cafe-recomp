/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00241550 ZombieCafe::initWeekRaidInfo */

/* ZombieCafe::initWeekRaidInfo() */

void __thiscall ZombieCafe::initWeekRaidInfo(ZombieCafe *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  *(undefined4 *)(this + 800) = 0;
  *(undefined4 *)(this + 0x324) = 0;
  uVar2 = DAT_002415fc;
  *(undefined4 *)(this + 0x330) = DAT_002415f8;
  *(undefined4 *)(this + 0x334) = uVar2;
  *(undefined4 *)(this + 0x338) = 0;
  initWeekRaid_attackPoint(this);
  this[0x33c] = (ZombieCafe)0x0;
  iVar4 = DAT_00241604;
  this[DAT_00241600] = (ZombieCafe)0x0;
  puVar3 = *(undefined1 **)(iVar4 + 0x24158e);
  this[DAT_00241608] = (ZombieCafe)0x0;
  iVar4 = DAT_0024160c;
  *puVar3 = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  this[iVar4] = (ZombieCafe)0x0;
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *(undefined4 *)(puVar3 + 0x10) = 0;
  *(undefined4 *)(puVar3 + 0x14) = 0;
  do {
    *(undefined4 *)(puVar3 + iVar5 + 0x18) = 0xffffffff;
    *(undefined4 *)(puVar3 + iVar5 + 0x38) = 0;
    *(undefined4 *)(puVar3 + iVar5 + 0x58) = 0;
    *(undefined4 *)(puVar3 + iVar5 + 0x78) = 0;
    iVar4 = iVar5 + 0x98;
    iVar5 = iVar5 + 4;
    *(undefined4 *)(puVar3 + iVar4) = 0;
  } while (iVar5 != 0x20);
  iVar4 = 0;
  *(undefined4 *)(puVar3 + 0xb8) = 0;
  *(undefined4 *)(puVar3 + 0xdc) = 0;
  do {
    *(undefined4 *)(puVar3 + iVar4 + 0xe0) = 0xffffffff;
    *(undefined4 *)(puVar3 + iVar4 + 0x120) = 0;
    iVar5 = iVar4 + 0x100;
    iVar1 = iVar4 + 0x140;
    iVar4 = iVar4 + 4;
    *(undefined4 *)(puVar3 + iVar5) = 0xffffffff;
    *(undefined4 *)(puVar3 + iVar1) = 0;
  } while (iVar4 != 0x20);
  memset(puVar3 + 0xbc,0,0x20);
  return;
}


