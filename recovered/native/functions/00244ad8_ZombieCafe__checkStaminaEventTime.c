/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00244ad8 ZombieCafe::checkStaminaEventTime */

/* ZombieCafe::checkStaminaEventTime() */

bool __thiscall ZombieCafe::checkStaminaEventTime(ZombieCafe *this)

{
  uint uVar1;
  bool bVar2;
  
  Platform::getAppTime();
  uVar1 = __fixunsdfsi();
  bVar2 = false;
  if (*(uint *)(this + 0x344) < uVar1) {
    bVar2 = uVar1 < *(uint *)(this + 0x348);
  }
  return bVar2;
}


