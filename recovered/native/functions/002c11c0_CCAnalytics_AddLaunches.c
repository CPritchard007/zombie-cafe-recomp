/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c11c0 CCAnalytics_AddLaunches */

void CCAnalytics_AddLaunches(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_128;
  int local_124;
  undefined4 local_120;
  int local_11c;
  char acStack_118 [260];
  int local_14;
  
  piVar2 = *(int **)(DAT_002c122c + 0x2c11cc);
  local_14 = *piVar2;
  CCGetCacheFilePath(acStack_118,0x104,(char *)(DAT_002c1230 + 0x2c11d6));
  local_128 = 0;
  local_124 = 0;
  iVar1 = CCAssetManager::doesFileExist(acStack_118);
  if (iVar1 != 0) {
    CCAssetManager::readFile(acStack_118,&local_128,4);
    CCAssetManager::readFile(acStack_118,&local_124,4);
  }
  local_124 = param_1 + local_124;
  local_120 = local_128;
  local_11c = local_124;
  CCAssetManager::writeFile(acStack_118,&local_120,8);
  if (local_14 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_124);
  }
  return;
}


