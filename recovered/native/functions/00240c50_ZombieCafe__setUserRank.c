/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00240c50 ZombieCafe::setUserRank */

/* ZombieCafe::setUserRank(int, int) */

void __thiscall ZombieCafe::setUserRank(ZombieCafe *this,int param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar2 = *(undefined1 **)(DAT_00240c80 + 0x240c5c);
  puVar1 = *(undefined1 **)(DAT_00240c84 + 0x240c5e);
  *puVar2 = 0;
  *puVar1 = 0;
  if ((uint)(byte)this[DAT_00240c88] != param_2) {
    if (param_1 == 0) {
      this[DAT_00240c88] = (ZombieCafe)0x0;
    }
    else {
      this[DAT_00240c88] = SUB41(param_2,0);
    }
    *puVar2 = 1;
    *puVar1 = 1;
  }
  return;
}


