/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b7030 CCServer::AddToBanList */

/* CCServer::AddToBanList(void*, char const*, char const*) */

void CCServer::AddToBanList(void *param_1,char *param_2,char *param_3)

{
  int *piVar1;
  char acStack_10c [256];
  int local_c;
  
  piVar1 = *(int **)(DAT_002b7074 + 0x2b703c);
  local_c = *piVar1;
  snprintf(acStack_10c,0x100,(char *)(DAT_002b7078 + 0x2b7050),param_2,param_3);
  L_PrintLog((char *)(DAT_002b707c + 0x2b705a),acStack_10c);
  CCAssetManager::deleteFile((char *)(DAT_002b7080 + 0x2b7062));
  if (local_c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


