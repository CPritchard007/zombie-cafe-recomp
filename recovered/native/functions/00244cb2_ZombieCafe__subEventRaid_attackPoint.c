/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00244cb2 ZombieCafe::subEventRaid_attackPoint */

/* ZombieCafe::subEventRaid_attackPoint() */

void __thiscall ZombieCafe::subEventRaid_attackPoint(ZombieCafe *this)

{
  undefined4 uVar1;
  
  if (0 < *(short *)(this + 0xfc)) {
    if (*(int *)(this + 0xf8) == 0) {
      uVar1 = getStaminaEventRecoverTime(this,true);
      *(undefined4 *)(this + 0xf8) = uVar1;
    }
    *(short *)(this + 0xfc) = *(short *)(this + 0xfc) + -1;
  }
  return;
}


