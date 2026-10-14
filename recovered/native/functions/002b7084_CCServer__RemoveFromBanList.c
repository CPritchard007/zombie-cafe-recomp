/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b7084 CCServer::RemoveFromBanList */

/* CCServer::RemoveFromBanList(void*, char const*, char const*) */

void CCServer::RemoveFromBanList(void *param_1,char *param_2,char *param_3)

{
  int *piVar1;
  char acStack_114 [256];
  int local_14;
  
  piVar1 = *(int **)(DAT_002b70c4 + 0x2b7090);
  local_14 = *piVar1;
  sprintf(acStack_114,(char *)(DAT_002b70c8 + 0x2b709a),param_2,param_3);
  L_PrintLog((char *)(DAT_002b70cc + 0x2b70ac),acStack_114);
  L_RemoveFromBanFile(param_3);
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


