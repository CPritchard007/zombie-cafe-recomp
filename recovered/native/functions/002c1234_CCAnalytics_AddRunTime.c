/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c1234 CCAnalytics_AddRunTime */

void CCAnalytics_AddRunTime(int param_1)

{
  int iVar1;
  int *piVar2;
  int local_128;
  undefined4 local_124;
  int local_120;
  undefined4 local_11c;
  char acStack_118 [260];
  int local_14;
  
  piVar2 = *(int **)(DAT_002c12a0 + 0x2c1240);
  local_14 = *piVar2;
  CCGetCacheFilePath(acStack_118,0x104,(char *)(DAT_002c12a4 + 0x2c124a));
  local_128 = 0;
  local_124 = 0;
  iVar1 = CCAssetManager::doesFileExist(acStack_118);
  if (iVar1 != 0) {
    CCAssetManager::readFile(acStack_118,&local_128,4);
    CCAssetManager::readFile(acStack_118,&local_124,4);
  }
  local_128 = param_1 + local_128;
  local_11c = local_124;
  local_120 = local_128;
  CCAssetManager::writeFile(acStack_118,&local_120,8);
  if (local_14 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_128);
  }
  return;
}


