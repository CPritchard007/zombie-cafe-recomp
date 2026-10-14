/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ba310 CCServer::SendToxinCheat */

/* CCServer::SendToxinCheat(void*, char const*, void (*)(void*, unsigned char const*, unsigned int),
   void (*)(void*), void*) */

undefined4
CCServer::SendToxinCheat
          (void *param_1,char *param_2,_func_void_void_ptr_uchar_ptr_uint *param_3,
          _func_void_void_ptr *param_4,void *param_5)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = (char *)(DAT_002ba390 + 0x2ba31e);
  L_PrintLog(pcVar3,(char *)(DAT_002ba394 + 0x2ba324));
  if (*(int *)((int)param_1 + 0x4c0) == 0) {
    pcVar4 = (char *)(DAT_002ba39c + 0x2ba34a);
    L_PrintLog(pcVar4,(char *)(DAT_002ba3a0 + 0x2ba34c));
    *(void **)((int)param_1 + 0x4d0) = param_5;
    *(_func_void_void_ptr_uchar_ptr_uint **)((int)param_1 + 0x4c8) = param_3;
    *(_func_void_void_ptr **)((int)param_1 + DAT_002ba3a4) = param_4;
    L_PrintLog(pcVar4,param_2);
    uVar2 = CCUrlConnection::NewRequest((char *)((int)param_1 + 0x18),param_2,0x44,param_1);
    iVar1 = DAT_002ba3a8;
    *(undefined4 *)((int)param_1 + 0x4c0) = uVar2;
    L_PrintLog(pcVar3,(char *)(iVar1 + 0x2ba386));
    uVar2 = *(undefined4 *)((int)param_1 + 0x4c0);
  }
  else {
    L_PrintLog(pcVar3,(char *)(DAT_002ba398 + 0x2ba33c));
    uVar2 = 0;
  }
  return uVar2;
}


