/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00241178 ZombieCafe::isGaistColaboZombie */

/* ZombieCafe::isGaistColaboZombie(int) */

bool __thiscall ZombieCafe::isGaistColaboZombie(ZombieCafe *this,int param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if ((param_1 != DAT_00241190) && (param_1 != DAT_00241194)) {
    bVar1 = param_1 + DAT_00241198 == 0;
  }
  return bVar1;
}


