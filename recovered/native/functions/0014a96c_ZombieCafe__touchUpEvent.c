/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0014a96c ZombieCafe::touchUpEvent */

/* ZombieCafe::touchUpEvent() const */

uint __thiscall ZombieCafe::touchUpEvent(ZombieCafe *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + DAT_0014a984);
  if (uVar1 != 0) {
    uVar1 = (uint)(*(int *)(this + 0x4b8) == 0);
  }
  return uVar1;
}


