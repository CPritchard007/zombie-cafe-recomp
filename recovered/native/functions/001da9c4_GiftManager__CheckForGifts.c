/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001da9c4 GiftManager::CheckForGifts */

/* GiftManager::CheckForGifts(void*, void (*)(void*), void (*)(void*), void*, bool) */

void GiftManager::CheckForGifts
               (void *param_1,_func_void_void_ptr *param_2,_func_void_void_ptr *param_3,
               void *param_4,bool param_5)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)((int)param_1 + 8) == 0) {
    *(_func_void_void_ptr **)((int)param_1 + 0xc) = param_2;
    iVar2 = DAT_001daa08;
    iVar1 = DAT_001daa04;
    *(void **)((int)param_1 + 0x14) = param_4;
    *(_func_void_void_ptr **)((int)param_1 + 0x10) = param_3;
    *(undefined4 *)((int)param_1 + 8) = 1;
    L_PrintLog((char *)(iVar1 + 0x1da9e4),(char *)(iVar2 + 0x1da9e6));
    CCServer::RetrieveMyGifts
              (*(void **)((int)param_1 + 4),
               (_func_void_void_ptr_char_ptr *)(DAT_001daa0c + 0x1da9f4),
               (_func_void_void_ptr_ccServerFailureCode *)(DAT_001daa10 + 0x1da9f6),param_1,
               (uint)param_5,0,1);
  }
  return;
}


