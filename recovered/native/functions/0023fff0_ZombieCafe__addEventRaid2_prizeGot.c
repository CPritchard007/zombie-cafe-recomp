/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023fff0 ZombieCafe::addEventRaid2_prizeGot */

/* ZombieCafe::addEventRaid2_prizeGot(int) */

void __thiscall ZombieCafe::addEventRaid2_prizeGot(ZombieCafe *this,int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0024000c;
  iVar3 = (param_1 + 0xf4) * 2;
  sVar1 = *(short *)(this + iVar3);
  *(short *)(this + iVar3) = sVar1 + 1;
  if (iVar2 < (short)(sVar1 + 1)) {
    *(short *)(this + iVar3) = (short)iVar2;
  }
  return;
}


