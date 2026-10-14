/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002446cc ZombieCafe::subWeekRaid_attackPointTimer */

/* ZombieCafe::subWeekRaid_attackPointTimer(long) */

void __thiscall ZombieCafe::subWeekRaid_attackPointTimer(ZombieCafe *this,long param_1)

{
  short sVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + 0x328);
  if (param_1 < iVar2) {
    *(int *)(this + 0x328) = iVar2 - param_1;
  }
  else {
    iVar2 = param_1 - iVar2;
    sVar1 = *(short *)(this + 0x32c);
    while (sVar1 = sVar1 + 1, sVar1 < 3) {
      if (iVar2 <= DAT_00244718) {
        *(short *)(this + 0x32c) = sVar1;
        *(int *)(this + 0x328) = DAT_0024471c - iVar2;
        return;
      }
      iVar2 = iVar2 + DAT_00244720;
    }
    *(undefined2 *)(this + 0x32c) = 3;
    *(undefined4 *)(this + 0x328) = 0;
  }
  return;
}


