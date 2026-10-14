/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023f900 ZombieCafe::addLockerSize */

/* ZombieCafe::addLockerSize(int) */

void __thiscall ZombieCafe::addLockerSize(ZombieCafe *this,int param_1)

{
  if (0 < param_1) {
    *(int *)(this + 0x5b8) = *(int *)(this + 0x5b8) + param_1;
  }
  if (200 < *(int *)(this + 0x5b8)) {
    *(undefined4 *)(this + 0x5b8) = 200;
  }
  return;
}


