/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b6fd4 CCServer::ServerTest */

/* CCServer::ServerTest(void*) */

void CCServer::ServerTest(void *param_1)

{
  char *pcVar1;
  int *piVar2;
  char acStack_114 [256];
  int local_14;
  
  piVar2 = *(int **)(DAT_002b7020 + 0x2b6fe0);
  local_14 = *piVar2;
  sprintf(acStack_114,(char *)(DAT_002b7024 + 0x2b6fe6),(int)param_1 + 0x230);
  if (*(int *)((int)param_1 + 0x31c) == 0) {
    pcVar1 = (char *)(DAT_002b702c + 0x2b700a);
  }
  else {
    pcVar1 = (char *)(DAT_002b7028 + 0x2b7004);
  }
  L_PrintLog(acStack_114,pcVar1);
  if (local_14 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


