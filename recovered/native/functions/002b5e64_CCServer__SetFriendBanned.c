/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b5e64 CCServer::SetFriendBanned */

/* CCServer::SetFriendBanned(void*, char const*, unsigned int) */

void CCServer::SetFriendBanned(void *param_1,char *param_2,uint param_3)

{
  uint uVar1;
  char *pcVar2;
  int *piVar3;
  char acStack_9c [128];
  int local_1c;
  
  piVar3 = *(int **)(DAT_002b5eb0 + 0x2b5e70);
  local_1c = *piVar3;
  pcVar2 = param_2;
  snprintf(acStack_9c,0x80,(char *)(DAT_002b5eb4 + 0x2b5e7c));
  CCOptions::SetBool(*(CCOptions **)((int)param_1 + 8),acStack_9c,(char *)param_3,(uint)pcVar2);
  uVar1 = GetFriendIndexOfUniqueId(param_1,param_2);
  GetFriendName(param_1,uVar1);
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


