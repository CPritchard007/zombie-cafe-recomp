/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c19c8 L_LogLastSession */

void L_LogLastSession(void)

{
  int iVar1;
  int *piVar2;
  undefined4 local_140;
  undefined4 local_13c;
  char acStack_138 [31];
  undefined1 local_119;
  char acStack_118 [260];
  int local_14;
  
  piVar2 = *(int **)(DAT_002c1a40 + 0x2c19d4);
  local_14 = *piVar2;
  CCGetWritableFilePath(acStack_118,0x104,(char *)(DAT_002c1a44 + 0x2c19da));
  iVar1 = CCAssetManager::doesFileExist(acStack_118);
  if (iVar1 != 0) {
    CCAssetManager::readFile(acStack_118,&local_140,4);
    CCAssetManager::readFile(acStack_118,&local_13c,4);
    snprintf(acStack_138,0x20,(char *)(DAT_002c1a48 + 0x2c1a0e),local_13c);
    local_119 = 0;
    CCAnalytics_RecordAnalyticsEventWithTextAndCustomTimestamp
              (DAT_002c1a4c + 0x2c1a22,acStack_138,local_140);
    CCAssetManager::deleteFile(acStack_118);
    CCAnalytics_AddRunTime(local_13c);
  }
  if (local_14 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


