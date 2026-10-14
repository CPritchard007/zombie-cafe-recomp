/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023fba8 ZombieCafe::getEventRaid_dropProPitch */

/* ZombieCafe::getEventRaid_dropProPitch(int) */

undefined4 __thiscall ZombieCafe::getEventRaid_dropProPitch(ZombieCafe *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < 6) {
    uVar1 = *(undefined4 *)((param_1 + 0x14) * 4 + *(int *)(DAT_0023fbbc + 0x23fbb8));
  }
  return uVar1;
}


