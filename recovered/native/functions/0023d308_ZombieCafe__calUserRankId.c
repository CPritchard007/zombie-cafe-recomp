/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023d308 ZombieCafe::calUserRankId */

/* ZombieCafe::calUserRankId(int) */

int __thiscall ZombieCafe::calUserRankId(ZombieCafe *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 - 10U < 0x29) {
    iVar1 = (int)*(char *)(DAT_0023d31c + 0x23d32c + (param_1 - 10U));
  }
  return iVar1;
}


