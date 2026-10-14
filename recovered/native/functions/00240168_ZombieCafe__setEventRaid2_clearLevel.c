/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00240168 ZombieCafe::setEventRaid2_clearLevel */

/* ZombieCafe::setEventRaid2_clearLevel(int) */

void __thiscall ZombieCafe::setEventRaid2_clearLevel(ZombieCafe *this,int param_1)

{
  undefined2 uVar1;
  
  if (*(short *)(this + 0x1ce) <= param_1) {
    *(short *)(this + 0x1ce) = (short)param_1 + 1;
  }
  if (**(int **)(DAT_002401a0 + 0x24017e) < 9) {
    if (*(short *)(this + 0x1ce) < 4) {
      return;
    }
    uVar1 = 4;
  }
  else {
    uVar1 = 5;
    if (*(short *)(this + 0x1ce) < 5) {
      return;
    }
  }
  *(undefined2 *)(this + 0x1ce) = uVar1;
  return;
}


