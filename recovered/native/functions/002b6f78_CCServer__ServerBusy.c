/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b6f78 CCServer::ServerBusy */

/* CCServer::ServerBusy(void*) */

undefined4 CCServer::ServerBusy(void *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  if (*(int *)((int)param_1 + 0x31c) == 0) {
    if (*(int *)((int)param_1 + 0x284) == 0) {
      if (*(int *)((int)param_1 + 0x334) == 0) {
        return 0;
      }
      pcVar1 = (char *)(DAT_002b6fcc + 0x2b6fb4);
      pcVar2 = (char *)(DAT_002b6fd0 + 0x2b6fb6);
    }
    else {
      pcVar1 = (char *)(DAT_002b6fc4 + 0x2b6fa0);
      pcVar2 = (char *)(DAT_002b6fc8 + 0x2b6fa2);
    }
  }
  else {
    pcVar1 = (char *)(DAT_002b6fbc + 0x2b6f8c);
    pcVar2 = (char *)(DAT_002b6fc0 + 0x2b6f8e);
  }
  L_PrintLog(pcVar1,pcVar2);
  return 1;
}


