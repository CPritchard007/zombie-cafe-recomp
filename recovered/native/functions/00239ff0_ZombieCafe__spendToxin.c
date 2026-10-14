/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00239ff0 ZombieCafe::spendToxin */

/* ZombieCafe::spendToxin(int) */

void __thiscall ZombieCafe::spendToxin(ZombieCafe *this,int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x498);
  if (iVar1 < 1) {
    *(int *)(this + DAT_0023a020) = *(int *)(this + DAT_0023a020) - param_1;
  }
  else if (iVar1 < param_1) {
    *(undefined4 *)(this + 0x498) = 0;
    *(int *)(this + DAT_0023a020) = *(int *)(this + DAT_0023a020) - (param_1 - iVar1);
  }
  else {
    *(int *)(this + 0x498) = iVar1 - param_1;
  }
  return;
}


