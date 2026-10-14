/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b5c40 CCServer::IsFriendBanned */

/* CCServer::IsFriendBanned(void*, unsigned int) */

void CCServer::IsFriendBanned(void *param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  char acStack_94 [128];
  int local_14;
  
  piVar2 = *(int **)(DAT_002b5c8c + 0x2b5c4c);
  local_14 = *piVar2;
  uVar1 = *(int *)((int)param_1 + 0x22c) + param_2 * 0x284 + 0x204;
  snprintf(acStack_94,0x80,(char *)(DAT_002b5c90 + 0x2b5c52));
  CCOptions::GetBool(*(CCOptions **)((int)param_1 + 8),acStack_94,(char *)0x0,uVar1);
  if (local_14 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


