/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b5d74 CCServer::SetFriendBanned */

/* CCServer::SetFriendBanned(void*, unsigned int, unsigned int) */

void CCServer::SetFriendBanned(void *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int *piVar2;
  char acStack_9c [128];
  int local_1c;
  
  piVar2 = *(int **)(DAT_002b5dcc + 0x2b5d80);
  local_1c = *piVar2;
  uVar1 = *(int *)((int)param_1 + 0x22c) + param_2 * 0x284 + 0x204;
  snprintf(acStack_9c,0x80,(char *)(DAT_002b5dd0 + 0x2b5d8c));
  GetFriendName(param_1,param_2);
  CCOptions::SetBool(*(CCOptions **)((int)param_1 + 8),acStack_9c,(char *)param_3,uVar1);
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


