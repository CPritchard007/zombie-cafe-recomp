/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00240fc0 ZombieCafe::subAmpouleRaid_reopenTimer */

/* ZombieCafe::subAmpouleRaid_reopenTimer(long) */

void __thiscall ZombieCafe::subAmpouleRaid_reopenTimer(ZombieCafe *this,long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x2d4);
  *(int *)(this + 0x2d4) = iVar1 - param_1;
  if (iVar1 - param_1 < 0) {
    *(undefined4 *)(this + 0x2d4) = 0;
  }
  return;
}


