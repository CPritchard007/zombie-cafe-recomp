/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b808c CCServer::EarlyBirdBuy */

/* CCServer::EarlyBirdBuy(void*, char const*, void (*)(void*, unsigned char const*, unsigned int),
   void (*)(void*), void*) */

void CCServer::EarlyBirdBuy
               (void *param_1,char *param_2,_func_void_void_ptr_uchar_ptr_uint *param_3,
               _func_void_void_ptr *param_4,void *param_5)

{
  undefined4 uVar1;
  char *pcVar2;
  
  if (*(int *)((int)param_1 + 0x420) == 0) {
    pcVar2 = (char *)(DAT_002b80e0 + 0x2b80aa);
    L_PrintLog(pcVar2,(char *)(DAT_002b80e4 + 0x2b80ac));
    *(void **)((int)param_1 + 0x430) = param_5;
    *(_func_void_void_ptr_uchar_ptr_uint **)((int)param_1 + 0x428) = param_3;
    *(_func_void_void_ptr **)((int)param_1 + DAT_002b80e8) = param_4;
    L_PrintLog(pcVar2,param_2);
    uVar1 = CCUrlConnection::NewRequest((char *)((int)param_1 + 0x18),param_2,0x3b,param_1);
    *(undefined4 *)((int)param_1 + 0x420) = uVar1;
  }
  return;
}


