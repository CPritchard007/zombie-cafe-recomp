/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b5c94 CCServer::IsFriendBanned */

/* CCServer::IsFriendBanned(void*, char const*) */

void CCServer::IsFriendBanned(void *param_1,char *param_2)

{
  int *piVar1;
  char acStack_94 [128];
  int local_14;
  
  piVar1 = *(int **)(DAT_002b5ccc + 0x2b5ca0);
  local_14 = *piVar1;
  snprintf(acStack_94,0x80,(char *)(DAT_002b5cd0 + 0x2b5cb0));
  CCOptions::GetBool(*(CCOptions **)((int)param_1 + 8),acStack_94,(char *)0x0,(uint)param_2);
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


