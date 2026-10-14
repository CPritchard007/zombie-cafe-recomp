/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b6a0c CCServer::RetrieveMyLinkedGameState */

/* CCServer::RetrieveMyLinkedGameState(void*, void (*)(void*, char const*, unsigned char const*,
   unsigned int), void (*)(void*, ccServerFailureCode), void*) */

void CCServer::RetrieveMyLinkedGameState
               (void *param_1,_func_void_void_ptr_char_ptr_uchar_ptr_uint *param_2,
               _func_void_void_ptr_ccServerFailureCode *param_3,void *param_4)

{
  int iVar1;
  
  iVar1 = L_ServerConnected((SServer *)param_1);
  if ((((iVar1 != 0) && (*(char *)((int)param_1 + 0x198) != '\0')) &&
      (*(int *)((int)param_1 + 0x31c) == 0)) &&
     (((int)*(void **)((int)param_1 + 4) - 1U < 0xfffffffe &&
      (iVar1 = CCGameCenter::IsConnected(*(void **)((int)param_1 + 4)), iVar1 != 0)))) {
    RetrieveGameStateForUniqueId(param_1,(char *)((int)param_1 + 0x198),param_2,param_3,param_4,0);
  }
  return;
}


