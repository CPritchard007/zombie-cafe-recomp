/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c1728 L_GetCachedHash */

void L_GetCachedHash(char *param_1,uint param_2)

{
  int iVar1;
  size_t __size;
  uchar *__ptr;
  int *piVar2;
  char acStack_120 [260];
  int local_1c;
  
  piVar2 = *(int **)(DAT_002c17ac + 0x2c1734);
  local_1c = *piVar2;
  CCGetWritableFilePath(acStack_120,0x104,(char *)(DAT_002c17b0 + 0x2c173e));
  L_PrintLog((char *)(DAT_002c17b4 + 0x2c1752),acStack_120);
  iVar1 = CCAssetManager::doesFileExist(acStack_120);
  if (iVar1 != 0) {
    __size = CCAssetManager::fileSize(acStack_120);
    __ptr = (uchar *)malloc(__size);
    CCAssetManager::readFile(acStack_120,__ptr,__size);
    CCFileMd5(param_1,param_2,__ptr,__size);
    free(__ptr);
  }
  else {
    L_PrintLog((char *)(DAT_002c17b8 + 0x2c1768),(char *)(DAT_002c17bc + 0x2c176a));
  }
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != 0);
  }
  return;
}


