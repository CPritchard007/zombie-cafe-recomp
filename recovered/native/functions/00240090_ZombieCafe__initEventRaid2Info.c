/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00240090 ZombieCafe::initEventRaid2Info */

/* ZombieCafe::initEventRaid2Info() */

void __thiscall ZombieCafe::initEventRaid2Info(ZombieCafe *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  *(undefined4 *)(this + 0x1c0) = 0;
  puVar3 = *(undefined4 **)(DAT_00240100 + 0x2400a4);
  puVar3[3] = 0x3f800000;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(undefined1 *)(puVar3 + 6) = 0;
  *(undefined4 *)(this + 0x1c4) = 0;
  uVar2 = DAT_002400fc;
  *(undefined4 *)(this + 0x1e0) = DAT_002400f8;
  *(undefined4 *)(this + 0x1e4) = uVar2;
  *(undefined4 *)(this + 0x1d0) = 0;
  *(undefined4 *)(this + 0x1d4) = 0;
  *(undefined4 *)(this + 0x1d8) = 0;
  initEventRaid2_attackPoint(this);
  *(undefined2 *)(this + 0x1ce) = 0;
  do {
    iVar1 = iVar4 + 0x1e8;
    iVar4 = iVar4 + 2;
    *(undefined2 *)(this + iVar1) = 0;
  } while (iVar4 != 0x3e);
  return;
}


