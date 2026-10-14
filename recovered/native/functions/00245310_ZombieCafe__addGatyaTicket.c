/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00245310 ZombieCafe::addGatyaTicket */

/* ZombieCafe::addGatyaTicket(int) */

void __thiscall ZombieCafe::addGatyaTicket(ZombieCafe *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0xa60);
  *(int *)(this + 0xa60) = param_1 + iVar1;
  if (99 < param_1 + iVar1) {
    *(undefined4 *)(this + 0xa60) = 99;
  }
  if (*(int *)(this + 0xa60) < 0) {
    *(undefined4 *)(this + 0xa60) = 0;
  }
  return;
}


