/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00118964 ZombieCafe::touchWasPinch */

/* ZombieCafe::touchWasPinch() const */

bool __thiscall ZombieCafe::touchWasPinch(ZombieCafe *this)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = __aeabi_fcmpgt(*(undefined4 *)(this + DAT_0011898c),0);
  if (iVar1 == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = __aeabi_fcmpgt(*(undefined4 *)(this + 0x4c0),0);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}


