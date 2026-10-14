/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024102c ZombieCafe::getAmpouleRaid_enemyID */

/* ZombieCafe::getAmpouleRaid_enemyID(int) */

int __thiscall ZombieCafe::getAmpouleRaid_enemyID(ZombieCafe *this,int param_1)

{
  short sVar1;
  
  sVar1 = 0;
  if (param_1 < 8) {
    sVar1 = *(short *)(this + (param_1 + 0x16c) * 2 + 6);
  }
  return (int)sVar1;
}


