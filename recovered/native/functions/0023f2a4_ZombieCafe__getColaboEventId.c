/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023f2a4 ZombieCafe::getColaboEventId */

/* ZombieCafe::getColaboEventId() */

undefined4 __thiscall ZombieCafe::getColaboEventId(ZombieCafe *this)

{
  undefined4 uVar1;
  
  uVar1 = 100;
  if ((*(uint *)(this + 0x3f0) & 3) != 0) {
    uVar1 = 1;
  }
  return uVar1;
}


