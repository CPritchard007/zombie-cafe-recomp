/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b72ac MALTAHoover::sendDailyActiveUsersGET */

/* MALTAHoover::sendDailyActiveUsersGET(char*) */

void __thiscall MALTAHoover::sendDailyActiveUsersGET(MALTAHoover *this,char *param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(DAT_000b72e0 + 0xb72b8);
  L_PrintLog(pcVar2,(char *)(DAT_000b72e4 + 0xb72bc));
  iVar1 = javaConnected();
  if (iVar1 != 0) {
    javaNewRequest(DAT_000b72e8 + 0xb72d0,param_1,0xffffffff);
    L_PrintLog(pcVar2,(char *)(DAT_000b72ec + 0xb72dc));
  }
  return;
}


