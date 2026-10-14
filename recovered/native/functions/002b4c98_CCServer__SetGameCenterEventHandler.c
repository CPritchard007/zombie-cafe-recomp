/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b4c98 CCServer::SetGameCenterEventHandler */

/* CCServer::SetGameCenterEventHandler(void*, void*, void (*)(void*, ccGCEventCode)) */

void CCServer::SetGameCenterEventHandler
               (void *param_1,void *param_2,_func_void_void_ptr_ccGCEventCode *param_3)

{
  *(_func_void_void_ptr_ccGCEventCode **)((int)param_1 + 0x3a4) = param_3;
  *(void **)((int)param_1 + 0x3a0) = param_2;
  return;
}


