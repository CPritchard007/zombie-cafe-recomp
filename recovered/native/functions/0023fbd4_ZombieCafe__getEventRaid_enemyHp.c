/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023fbd4 ZombieCafe::getEventRaid_enemyHp */

/* ZombieCafe::getEventRaid_enemyHp(int) */

undefined4 __thiscall ZombieCafe::getEventRaid_enemyHp(ZombieCafe *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < 8) {
    uVar1 = *(undefined4 *)(this + (param_1 + 0x46) * 4);
  }
  return uVar1;
}


