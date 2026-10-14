/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023fb78 ZombieCafe::getEventRaid_dropLevel */

/* ZombieCafe::getEventRaid_dropLevel(int) */

undefined4 __thiscall ZombieCafe::getEventRaid_dropLevel(ZombieCafe *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < 6) {
    uVar1 = *(undefined4 *)((param_1 + 8) * 4 + *(int *)(DAT_0023fb8c + 0x23fb88));
  }
  return uVar1;
}


