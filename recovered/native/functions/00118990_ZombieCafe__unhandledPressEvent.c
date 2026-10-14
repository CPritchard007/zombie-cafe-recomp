/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00118990 ZombieCafe::unhandledPressEvent */

/* ZombieCafe::unhandledPressEvent() const */

uint __thiscall ZombieCafe::unhandledPressEvent(ZombieCafe *this)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((((this[DAT_001189e4] == (ZombieCafe)0x0) &&
       (uVar1 = *(uint *)(this + DAT_001189e8), uVar1 != 0)) &&
      (uVar1 = 0, *(int *)(this + 0x4b8) == 0)) &&
     ((*(int *)(this + DAT_001189f0) <= (int)**(short **)(DAT_001189ec + 0x1189b6) &&
      (*(int *)(this + 0x4d0) <= **(int **)(DAT_001189f4 + 0x1189cc))))) {
    uVar1 = touchWasPinch(this);
    uVar1 = (uVar1 ^ 1) & 0xff;
  }
  return uVar1;
}


