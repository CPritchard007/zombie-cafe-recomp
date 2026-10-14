/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023a494 ZombieCafe::recordHooverInAppPurchase */

/* ZombieCafe::recordHooverInAppPurchase(int, int) */

void __thiscall ZombieCafe::recordHooverInAppPurchase(ZombieCafe *this,int param_1,int param_2)

{
  if (this[DAT_0023a4b0] == (ZombieCafe)0x0) {
    this[DAT_0023a4b0] = (ZombieCafe)0x1;
    *(int *)(this + 0x410) = param_1;
    *(int *)(this + DAT_0023a4b4) = param_2;
  }
  return;
}


