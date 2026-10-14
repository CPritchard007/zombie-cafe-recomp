/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00244c04 ZombieCafe::subEventRaid2_attackPoint */

/* ZombieCafe::subEventRaid2_attackPoint() */

void __thiscall ZombieCafe::subEventRaid2_attackPoint(ZombieCafe *this)

{
  undefined4 uVar1;
  
  if (0 < *(short *)(this + 0x1cc)) {
    if (*(int *)(this + 0x1c8) == 0) {
      uVar1 = getStaminaEventRecoverTime(this,true);
      *(undefined4 *)(this + 0x1c8) = uVar1;
    }
    *(short *)(this + 0x1cc) = *(short *)(this + 0x1cc) + -1;
  }
  return;
}


