/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c1184 CCAnalytics_PurgeEventLog */

void CCAnalytics_PurgeEventLog(void)

{
  int *piVar1;
  char acStack_110 [260];
  int local_c;
  
  piVar1 = *(int **)(DAT_002c11b8 + 0x2c1190);
  local_c = *piVar1;
  CCGetCacheFilePath(acStack_110,0x104,(char *)(DAT_002c11bc + 0x2c1196));
  CCAssetManager::deleteFile(acStack_110);
  if (local_c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


