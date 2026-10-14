/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c12ac CCMarketing_PopAppMessage */

void CCMarketing_PopAppMessage(int param_1)

{
  int iVar1;
  size_t __size;
  void *__ptr;
  int *piVar2;
  char acStack_118 [260];
  int local_14;
  
  piVar2 = *(int **)(DAT_002c1308 + 0x2c12b8);
  local_14 = *piVar2;
  if (param_1 - 1U < 0xfffffffe) {
    CCGetWritableFilePath(acStack_118,0x104,(char *)(DAT_002c130c + 0x2c12ca));
    iVar1 = CCAssetManager::doesFileExist(acStack_118);
    if (iVar1 != 0) {
      __size = CCAssetManager::fileSize(acStack_118);
      __ptr = malloc(__size);
      CCAssetManager::writeFile(acStack_118,__ptr,__size);
      free(__ptr);
    }
  }
  if (local_14 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}


