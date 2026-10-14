/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00244b00 ZombieCafe::checkStaminaEventTime */

/* ZombieCafe::checkStaminaEventTime(unsigned long) */

bool __thiscall ZombieCafe::checkStaminaEventTime(ZombieCafe *this,ulong param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(uint *)(this + 0x344) < param_1) {
    bVar1 = param_1 < *(uint *)(this + 0x348);
  }
  return bVar1;
}


