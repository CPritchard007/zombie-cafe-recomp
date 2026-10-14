/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b8404 CCServer::ER3SendResult */

/* CCServer::ER3SendResult(void*, char const*, void (*)(void*, unsigned char const*, unsigned int),
   void (*)(void*), void*) */

undefined8
CCServer::ER3SendResult
          (void *param_1,char *param_2,_func_void_void_ptr_uchar_ptr_uint *param_3,
          _func_void_void_ptr *param_4,void *param_5)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(DAT_002b845c + 0x2b8410);
  L_PrintLog(pcVar3,(char *)(DAT_002b8460 + 0x2b8414));
  *(void **)((int)param_1 + 0x4a8) = param_5;
  *(_func_void_void_ptr_uchar_ptr_uint **)((int)param_1 + 0x4a0) = param_3;
  iVar1 = DAT_002b8468;
  *(_func_void_void_ptr **)((int)param_1 + DAT_002b8464) = param_4;
  L_PrintLog((char *)(iVar1 + 0x2b8438),param_2);
  uVar2 = CCUrlConnection::NewRequest((char *)((int)param_1 + 0x18),param_2,0x4c,param_1);
  iVar1 = DAT_002b846c;
  *(undefined4 *)((int)param_1 + 0x498) = uVar2;
  L_PrintLog(pcVar3,(char *)(iVar1 + 0x2b8454));
  return CONCAT44(param_1,*(undefined4 *)((int)param_1 + 0x498));
}


