/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024013c ZombieCafe::getEventRaid2_clearLevel */

/* ZombieCafe::getEventRaid2_clearLevel() */

int __thiscall ZombieCafe::getEventRaid2_clearLevel(ZombieCafe *this)

{
  undefined2 uVar1;
  
  if (**(int **)(DAT_00240164 + 0x240142) < 9) {
    if (*(short *)(this + 0x1ce) < 4) goto LAB_00240160;
    uVar1 = 4;
  }
  else {
    if (*(short *)(this + 0x1ce) < 5) goto LAB_00240160;
    uVar1 = 5;
  }
  *(undefined2 *)(this + 0x1ce) = uVar1;
LAB_00240160:
  return (int)*(short *)(this + 0x1ce);
}


