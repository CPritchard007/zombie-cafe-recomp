/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00241480 ZombieCafe::getWeekRaid_getHatoID */

/* ZombieCafe::getWeekRaid_getHatoID(int, int) */

undefined4 __thiscall ZombieCafe::getWeekRaid_getHatoID(ZombieCafe *this,int param_1,int param_2)

{
  return *(undefined4 *)
          (((param_2 & -((uint)((uint)param_2 < 2) - (param_2 >> 0x1f))) * 8 +
            (param_1 & -((uint)((uint)param_1 < 8) - (param_1 >> 0x1f))) + 0x38) * 4 +
          *(int *)(DAT_002414b0 + 0x2414a6));
}


