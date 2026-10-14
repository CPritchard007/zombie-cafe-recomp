/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00241042 ZombieCafe::getAmpouleRaid_enemyHp */

/* ZombieCafe::getAmpouleRaid_enemyHp(int) */

undefined4 __thiscall ZombieCafe::getAmpouleRaid_enemyHp(ZombieCafe *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < 8) {
    uVar1 = *(undefined4 *)(this + (param_1 + 0xbe) * 4);
  }
  return uVar1;
}


