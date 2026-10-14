/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001da750 GiftManager::GiveGift */

/* GiftManager::GiveGift(void*, char const*, int, int, char const*, char const*, char const*, void
   (*)(void*), void (*)(void*), void*) */

void GiftManager::GiveGift
               (void *param_1,char *param_2,int param_3,int param_4,char *param_5,char *param_6,
               char *param_7,_func_void_void_ptr *param_8,_func_void_void_ptr *param_9,
               void *param_10)

{
  int iVar1;
  int *piVar2;
  char acStack_9c [128];
  int local_1c;
  
  piVar2 = *(int **)(DAT_001da7cc + 0x1da764);
  local_1c = *piVar2;
  iVar1 = CCServer::IsConnected(*(void **)((int)param_1 + 4));
  if (iVar1 != 0) {
    snprintf(acStack_9c,0x80,(char *)(DAT_001da7d0 + 0x1da78a),1,param_2,param_3,param_4,param_7,
             param_6);
    L_PrintLog((char *)(DAT_001da7d4 + 0x1da7a2),acStack_9c);
    CCServer::SendGiftByUniqueId2
              (*(void **)((int)param_1 + 4),param_5,acStack_9c,
               (_func_void_void_ptr *)(DAT_001da7dc + 0x1da7b2),
               (_func_void_void_ptr_ccServerFailureCode *)(DAT_001da7d8 + 0x1da7ae),param_1);
  }
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


