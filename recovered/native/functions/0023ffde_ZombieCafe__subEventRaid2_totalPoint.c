/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023ffde ZombieCafe::subEventRaid2_totalPoint */

/* ZombieCafe::subEventRaid2_totalPoint(long) */

void __thiscall ZombieCafe::subEventRaid2_totalPoint(ZombieCafe *this,long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x1d4);
  *(int *)(this + 0x1d4) = iVar1 - param_1;
  if (iVar1 - param_1 < 0) {
    *(undefined4 *)(this + 0x1d4) = 0;
  }
  return;
}


