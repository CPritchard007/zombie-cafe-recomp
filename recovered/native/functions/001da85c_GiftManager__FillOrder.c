/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001da85c GiftManager::FillOrder */

/* GiftManager::FillOrder(void*, char const*, char const*, char const*, char const*, void
   (*)(void*), void (*)(void*), void*) */

void GiftManager::FillOrder
               (void *param_1,char *param_2,char *param_3,char *param_4,char *param_5,
               _func_void_void_ptr *param_6,_func_void_void_ptr *param_7,void *param_8)

{
  int iVar1;
  int *piVar2;
  char acStack_9c [128];
  int local_1c;
  
  piVar2 = *(int **)(DAT_001da8d4 + 0x1da870);
  local_1c = *piVar2;
  iVar1 = CCServer::IsConnected(*(void **)((int)param_1 + 4));
  if (iVar1 != 0) {
    snprintf(acStack_9c,0x80,(char *)(DAT_001da8d8 + 0x1da896),3,param_5,param_4,param_3);
    iVar1 = DAT_001da8dc;
    *(void **)((int)param_1 + 0x20) = param_8;
    *(_func_void_void_ptr **)((int)param_1 + 0x18) = param_6;
    *(_func_void_void_ptr **)((int)param_1 + 0x1c) = param_7;
    CCServer::SendGiftByUniqueId2
              (*(void **)((int)param_1 + 4),param_2,acStack_9c,
               (_func_void_void_ptr *)(DAT_001da8e0 + 0x1da8c0),
               (_func_void_void_ptr_ccServerFailureCode *)(iVar1 + 0x1da8ae),param_1);
  }
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


