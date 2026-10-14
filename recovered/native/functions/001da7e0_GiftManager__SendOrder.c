/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001da7e0 GiftManager::SendOrder */

/* GiftManager::SendOrder(void*, char const*, char const*, char const*, char const*) */

void GiftManager::SendOrder(void *param_1,char *param_2,char *param_3,char *param_4,char *param_5)

{
  int *piVar1;
  char acStack_94 [128];
  int local_14;
  
  piVar1 = *(int **)(DAT_001da844 + 0x1da7ec);
  local_14 = *piVar1;
  snprintf(acStack_94,0x80,(char *)(DAT_001da848 + 0x1da802),2,param_5,param_4,param_3);
  L_PrintLog((char *)(DAT_001da84c + 0x1da812),param_2);
  L_PrintLog((char *)(DAT_001da850 + 0x1da81c),acStack_94);
  CCServer::SendGiftByUniqueId2
            (*(void **)((int)param_1 + 4),param_2,acStack_94,
             (_func_void_void_ptr *)(DAT_001da858 + 0x1da82a),
             (_func_void_void_ptr_ccServerFailureCode *)(DAT_001da854 + 0x1da828),param_1);
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


