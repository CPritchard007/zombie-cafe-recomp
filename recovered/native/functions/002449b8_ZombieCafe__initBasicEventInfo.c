/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002449b8 ZombieCafe::initBasicEventInfo */

/* ZombieCafe::initBasicEventInfo() */

void __thiscall ZombieCafe::initBasicEventInfo(ZombieCafe *this)

{
  undefined4 *puVar1;
  
  *(undefined4 *)(this + 0x344) = 0;
  *(undefined4 *)(this + 0x348) = 0;
  *(undefined4 *)(this + 0x340) = 0;
  *(undefined4 *)(this + 0x34c) = 0;
  *(undefined4 *)(this + 0x350) = 0;
  puVar1 = *(undefined4 **)(DAT_002449f4 + 0x2449e0);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[2] = 0;
  *(undefined1 *)((int)puVar1 + 0xd) = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)((int)puVar1 + 0xe) = 1;
  *(undefined4 *)(this + 0x354) = 0;
  return;
}


