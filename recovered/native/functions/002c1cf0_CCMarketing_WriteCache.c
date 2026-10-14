/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c1cf0 CCMarketing_WriteCache */

void CCMarketing_WriteCache(undefined4 param_1,void *param_2,uint param_3)

{
  int *piVar1;
  char acStack_118 [260];
  int local_14;
  
  piVar1 = *(int **)(DAT_002c1d2c + 0x2c1cfc);
  local_14 = *piVar1;
  CCGetWritableFilePath(acStack_118,0x104,(char *)(DAT_002c1d30 + 0x2c1d08));
  CCAssetManager::writeFile(acStack_118,param_2,param_3);
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


