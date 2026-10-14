/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b7238 MALTAHoover::initDailyActiveUsers */

/* MALTAHoover::initDailyActiveUsers(char*, int) */

void __thiscall MALTAHoover::initDailyActiveUsers(MALTAHoover *this,char *param_1,int param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(DAT_000b7274 + 0xb7244);
  L_PrintLog(pcVar1,(char *)(DAT_000b7278 + 0xb7248));
  strcpy((char *)(this + 0x80),param_1);
  sprintf((char *)(this + 0x100),(char *)(DAT_000b727c + 0xb7262),param_2);
  L_PrintLog(pcVar1,(char *)(DAT_000b7280 + 0xb726e));
  return;
}


