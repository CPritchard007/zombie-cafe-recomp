/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023fb90 ZombieCafe::getEventRaid_dropProInit */

/* ZombieCafe::getEventRaid_dropProInit(int) */

undefined4 __thiscall ZombieCafe::getEventRaid_dropProInit(ZombieCafe *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < 6) {
    uVar1 = *(undefined4 *)((param_1 + 0xe) * 4 + *(int *)(DAT_0023fba4 + 0x23fba0));
  }
  return uVar1;
}


