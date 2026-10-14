/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023faf2 ZombieCafe::setEventRaid_status */

/* ZombieCafe::setEventRaid_status(int) */

void __thiscall ZombieCafe::setEventRaid_status(ZombieCafe *this,int param_1)

{
  if ((uint)param_1 < 3) {
    *(int *)(this + 0xe8) = param_1;
  }
  return;
}


