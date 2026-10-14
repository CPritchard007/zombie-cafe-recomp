/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b71f4 MALTAHoover::initDailyActiveUsers */

/* MALTAHoover::initDailyActiveUsers(char*, char*) */

void __thiscall MALTAHoover::initDailyActiveUsers(MALTAHoover *this,char *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(DAT_000b722c + 0xb7200);
  L_PrintLog(pcVar1,(char *)(DAT_000b7230 + 0xb7204));
  strcpy((char *)(this + 0x80),param_1);
  strcpy((char *)(this + 0x100),param_2);
  L_PrintLog(pcVar1,(char *)(DAT_000b7234 + 0xb7226));
  return;
}


