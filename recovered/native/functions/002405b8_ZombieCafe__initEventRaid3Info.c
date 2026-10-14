/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002405b8 ZombieCafe::initEventRaid3Info */

/* ZombieCafe::initEventRaid3Info() */

void __thiscall ZombieCafe::initEventRaid3Info(ZombieCafe *this)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(DAT_00240630 + 0x2405c4);
  puVar2[0x26] = 0;
  puVar2[0x21] = 0;
  puVar2[0x22] = 0;
  puVar2[0x23] = 0x3f800000;
  puVar2[0x24] = 0;
  *puVar2 = 0;
  puVar2[0x25] = 0;
  puVar2[0x28] = 0;
  *(undefined4 *)(this + 0x228) = 0;
  puVar2[0x27] = 0;
  uVar1 = DAT_0024062c;
  *(undefined4 *)(this + 0x240) = DAT_00240628;
  *(undefined4 *)(this + 0x244) = uVar1;
  *(undefined4 *)(this + 0x234) = 0;
  initEventRaid3_attackPoint(this);
  *(undefined2 *)(this + DAT_00240634) = 0;
  *(undefined4 *)(this + 0x238) = 1;
  return;
}


