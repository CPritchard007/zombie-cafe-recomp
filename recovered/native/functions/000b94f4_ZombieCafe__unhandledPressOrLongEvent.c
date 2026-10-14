/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b94f4 ZombieCafe::unhandledPressOrLongEvent */

/* ZombieCafe::unhandledPressOrLongEvent() const */

uint __thiscall ZombieCafe::unhandledPressOrLongEvent(ZombieCafe *this)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if ((((this[DAT_000b9550] == (ZombieCafe)0x0) &&
       (uVar1 = *(uint *)(this + DAT_000b9554), uVar1 != 0)) &&
      (uVar1 = 0, *(int *)(this + 0x4b8) == 0)) &&
     (*(int *)(this + DAT_000b955c) <= (int)**(short **)(DAT_000b9558 + 0xb951c))) {
    iVar2 = __aeabi_fcmpgt(*(undefined4 *)(this + DAT_000b9560),0);
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      iVar2 = __aeabi_fcmpgt(*(undefined4 *)(this + 0x4c0),0);
      uVar1 = iVar2 != 0 ^ 1;
    }
  }
  return uVar1;
}


