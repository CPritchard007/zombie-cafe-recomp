/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00240700 ZombieCafe::setEventRaid3_clearLevel */

/* ZombieCafe::setEventRaid3_clearLevel(int) */

void __thiscall ZombieCafe::setEventRaid3_clearLevel(ZombieCafe *this,int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0024071c;
  if (*(short *)(this + DAT_0024071c) <= param_1) {
    *(short *)(this + DAT_0024071c) = (short)param_1 + 1;
  }
  if (3 < *(short *)(this + iVar1)) {
    *(undefined2 *)(this + DAT_0024071c) = 4;
  }
  return;
}


