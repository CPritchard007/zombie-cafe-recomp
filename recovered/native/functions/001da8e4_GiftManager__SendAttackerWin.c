/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001da8e4 GiftManager::SendAttackerWin */

/* GiftManager::SendAttackerWin(void*, char const*, char const*, char const*, char const*) */

void GiftManager::SendAttackerWin
               (void *param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  int *piVar1;
  char acStack_94 [128];
  int local_14;
  
  piVar1 = *(int **)(DAT_001da944 + 0x1da8f0);
  local_14 = *piVar1;
  snprintf(acStack_94,0x80,(char *)(DAT_001da948 + 0x1da906),9,param_5,param_4,param_3);
  L_PrintLog((char *)(DAT_001da94c + 0x1da916),param_2);
  L_PrintLog((char *)(DAT_001da950 + 0x1da920),acStack_94);
  CCServer::SendGiftByUniqueId
            (*(void **)((int)param_1 + 4),param_2,acStack_94,(_func_void_void_ptr *)0x0,
             (_func_void_void_ptr_ccServerFailureCode *)0x0,param_1);
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


