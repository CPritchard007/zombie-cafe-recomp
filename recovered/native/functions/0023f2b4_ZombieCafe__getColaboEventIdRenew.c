/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023f2b4 ZombieCafe::getColaboEventIdRenew */

/* ZombieCafe::getColaboEventIdRenew() */

void __thiscall ZombieCafe::getColaboEventIdRenew(ZombieCafe *this)

{
  *(uint *)(this + 0x3f0) = *(int *)(this + 0x3f0) + 1U & 0xf;
  getColaboEventId(this);
  return;
}


