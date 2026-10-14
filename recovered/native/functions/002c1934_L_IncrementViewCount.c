/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c1934 L_IncrementViewCount */

void L_IncrementViewCount(void)

{
  int iVar1;
  int *piVar2;
  int local_114;
  char acStack_110 [260];
  int local_c;
  
  piVar2 = *(int **)(DAT_002c1988 + 0x2c1940);
  local_c = *piVar2;
  local_114 = 0;
  CCGetWritableFilePath(acStack_110,0x104,(char *)(DAT_002c198c + 0x2c1946));
  iVar1 = CCAssetManager::doesFileExist(acStack_110);
  if (iVar1 != 0) {
    CCAssetManager::readFile(acStack_110,&local_114,4);
  }
  local_114 = local_114 + 1;
  CCAssetManager::writeFile(acStack_110,&local_114,4);
  if (local_c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


