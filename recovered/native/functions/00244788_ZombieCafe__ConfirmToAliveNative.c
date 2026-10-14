/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00244788 ZombieCafe::ConfirmToAliveNative */

/* ZombieCafe::ConfirmToAliveNative(int, int, bool) */

undefined4 __thiscall
ZombieCafe::ConfirmToAliveNative(ZombieCafe *this,int param_1,int param_2,bool param_3)

{
  if (param_1 != -1) {
    this[DAT_002447a8] = (ZombieCafe)0x1;
    *(int *)(this + DAT_002447ac) = param_1;
    *(int *)(this + DAT_002447b0) = param_2;
    *(uint *)(this + 0xc20) = (uint)param_3;
  }
  return 1;
}


