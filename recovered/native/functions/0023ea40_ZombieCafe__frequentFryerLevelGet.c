/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023ea40 ZombieCafe::frequentFryerLevelGet */

/* ZombieCafe::frequentFryerLevelGet() */

int __thiscall ZombieCafe::frequentFryerLevelGet(ZombieCafe *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = isEventFryerFlag();
  iVar2 = DAT_0023ea60;
  if (iVar1 != 0) {
    iVar2 = DAT_0023ea5c;
  }
  return (int)*(short *)(this + iVar2);
}


