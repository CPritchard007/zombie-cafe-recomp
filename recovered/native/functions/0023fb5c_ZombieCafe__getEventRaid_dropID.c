/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023fb5c ZombieCafe::getEventRaid_dropID */

/* ZombieCafe::getEventRaid_dropID(int) */

undefined4 __thiscall ZombieCafe::getEventRaid_dropID(ZombieCafe *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 6) {
    uVar1 = *(undefined4 *)((param_1 + 2) * 4 + *(int *)(DAT_0023fb74 + 0x23fb6a));
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


