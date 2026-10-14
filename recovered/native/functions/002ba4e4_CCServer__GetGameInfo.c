/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ba4e4 CCServer::GetGameInfo */

/* CCServer::GetGameInfo(void*, char const*, void (*)(void*, unsigned char const*, unsigned int),
   void (*)(void*), void*) */

void CCServer::GetGameInfo
               (void *param_1,char *param_2,_func_void_void_ptr_uchar_ptr_uint *param_3,
               _func_void_void_ptr *param_4,void *param_5)

{
  undefined4 uVar1;
  
  if (*(int *)((int)param_1 + 0x4e8) == 0) {
    *(void **)((int)param_1 + 0x4f8) = param_5;
    *(_func_void_void_ptr_uchar_ptr_uint **)((int)param_1 + 0x4f0) = param_3;
    *(_func_void_void_ptr **)((int)param_1 + DAT_002ba518) = param_4;
    uVar1 = CCUrlConnection::NewRequest((char *)((int)param_1 + 0x18),param_2,0x48,param_1);
    *(undefined4 *)((int)param_1 + 0x4e8) = uVar1;
  }
  return;
}


