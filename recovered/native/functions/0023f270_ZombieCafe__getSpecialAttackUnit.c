/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023f270 ZombieCafe::getSpecialAttackUnit */

/* ZombieCafe::getSpecialAttackUnit(int) */

uint __thiscall ZombieCafe::getSpecialAttackUnit(ZombieCafe *this,int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*(int *)(iVar2 * 8 + *(int *)(DAT_0023f2a0 + 0x23f27a) + 4) == param_1) {
      uVar1 = *(uint *)(iVar2 * 8 + *(int *)(DAT_0023f2a0 + 0x23f27a));
      return uVar1 & -(uint)(uVar1 < 4);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x1e);
  return 0;
}


