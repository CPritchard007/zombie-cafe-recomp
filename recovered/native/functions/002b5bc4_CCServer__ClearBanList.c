/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b5bc4 CCServer::ClearBanList */

/* CCServer::ClearBanList() */

undefined8 CCServer::ClearBanList(void)

{
  undefined4 in_r0;
  undefined4 in_r1;
  int *piVar1;
  char acStack_210 [256];
  char acStack_110 [252];
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  
  piVar1 = *(int **)(DAT_002b5c0c + 0x2b5bd0);
  local_c = *piVar1;
  uStack_14 = in_r0;
  uStack_10 = in_r1;
  CCGetWritableFilePath(acStack_110,0x104,(char *)(DAT_002b5c10 + 0x2b5bd6));
  sprintf(acStack_210,(char *)(DAT_002b5c14 + 0x2b5bea),acStack_110);
  L_PrintLog((char *)(DAT_002b5c18 + 0x2b5bf4),acStack_210);
  CCAssetManager::deleteFile(acStack_110);
  if (local_c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return CONCAT44(uStack_10,uStack_14);
}


