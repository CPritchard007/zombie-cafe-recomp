/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b57a0 CCServer::SendGift */

/* CCServer::SendGift(void*, unsigned int, char const*, void (*)(void*), void (*)(void*,
   ccServerFailureCode), void*) */

void CCServer::SendGift(void *param_1,uint param_2,char *param_3,_func_void_void_ptr *param_4,
                       _func_void_void_ptr_ccServerFailureCode *param_5,void *param_6)

{
  SendGiftByUniqueId(param_1,(char *)(*(int *)((int)param_1 + 0x22c) + param_2 * 0x284 + 0x204),
                     param_3,param_4,param_5,param_6);
  return;
}


