/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001189f8 ZombieCafe::unhandledTouching */

/* ZombieCafe::unhandledTouching() const */

bool __thiscall ZombieCafe::unhandledTouching(ZombieCafe *this)

{
  bool bVar1;
  
  bVar1 = false;
  if (this[DAT_00118a10] == (ZombieCafe)0x0) {
    bVar1 = *(int *)(this + 0x4b8) != 0;
  }
  return bVar1;
}


