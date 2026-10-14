/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010cf48 ZombieCafe::unhandledTouchUpEvent */

/* ZombieCafe::unhandledTouchUpEvent() const */

uint __thiscall ZombieCafe::unhandledTouchUpEvent(ZombieCafe *this)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((this[DAT_0010cf68] == (ZombieCafe)0x0) &&
     (uVar1 = *(uint *)(this + DAT_0010cf6c), uVar1 != 0)) {
    uVar1 = (uint)(*(int *)(this + 0x4b8) == 0);
  }
  return uVar1;
}


