/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023fbf6 ZombieCafe::setEventRaid_enemyInfo */

/* ZombieCafe::setEventRaid_enemyInfo(int, short, bool, int) */

void __thiscall
ZombieCafe::setEventRaid_enemyInfo
          (ZombieCafe *this,int param_1,short param_2,bool param_3,int param_4)

{
  if (param_1 < 8) {
    *(short *)(this + (param_1 + 0x7c) * 2 + 6) = param_2;
    this[param_1 + 0x10e] = (ZombieCafe)param_3;
    *(int *)(this + (param_1 + 0x46) * 4) = param_4;
  }
  return;
}


