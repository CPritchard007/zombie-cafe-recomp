/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00241066 ZombieCafe::setAmpouleRaid_enemyInfo */

/* ZombieCafe::setAmpouleRaid_enemyInfo(int, short, bool, int) */

void __thiscall
ZombieCafe::setAmpouleRaid_enemyInfo
          (ZombieCafe *this,int param_1,short param_2,bool param_3,int param_4)

{
  if (param_1 < 8) {
    *(short *)(this + (param_1 + 0x16c) * 2 + 6) = param_2;
    this[param_1 + 0x2ee] = (ZombieCafe)param_3;
    *(int *)(this + (param_1 + 0xbe) * 4) = param_4;
  }
  return;
}


