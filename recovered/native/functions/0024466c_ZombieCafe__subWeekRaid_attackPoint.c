/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024466c ZombieCafe::subWeekRaid_attackPoint */

/* ZombieCafe::subWeekRaid_attackPoint(int) */

void __thiscall ZombieCafe::subWeekRaid_attackPoint(ZombieCafe *this,int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(this + 0x32c) - (short)param_1;
  *(short *)(this + 0x32c) = sVar1;
  if (sVar1 < 0) {
    *(undefined2 *)(this + 0x32c) = 0;
  }
  if ((-1 < *(short *)(this + 0x32c)) && (*(int *)(this + 0x328) == 0)) {
    *(undefined4 *)(this + 0x328) = DAT_0024469c;
  }
  return;
}


