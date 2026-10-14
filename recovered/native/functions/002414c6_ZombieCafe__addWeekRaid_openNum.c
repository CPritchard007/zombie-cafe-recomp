/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002414c6 ZombieCafe::addWeekRaid_openNum */

/* ZombieCafe::addWeekRaid_openNum(int) */

void __thiscall ZombieCafe::addWeekRaid_openNum(ZombieCafe *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x338);
  if ((iVar1 < 4) && (iVar1 < param_1)) {
    *(int *)(this + 0x338) = iVar1 + 1;
  }
  return;
}


