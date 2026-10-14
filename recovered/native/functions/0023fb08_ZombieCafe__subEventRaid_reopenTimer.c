/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023fb08 ZombieCafe::subEventRaid_reopenTimer */

/* ZombieCafe::subEventRaid_reopenTimer(long) */

void __thiscall ZombieCafe::subEventRaid_reopenTimer(ZombieCafe *this,long param_1)

{
  ZombieCafe *pZVar1;
  int iVar2;
  
  pZVar1 = this + 0xec;
  iVar2 = *(int *)pZVar1;
  *(int *)pZVar1 = iVar2 - param_1;
  if (iVar2 - param_1 < 0) {
    *(undefined4 *)pZVar1 = 0;
  }
  return;
}


