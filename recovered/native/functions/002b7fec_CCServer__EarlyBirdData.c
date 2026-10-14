/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b7fec CCServer::EarlyBirdData */

/* CCServer::EarlyBirdData(void*, char const*, void (*)(void*, unsigned char const*, unsigned int),
   void (*)(void*), void*) */

undefined8
CCServer::EarlyBirdData
          (void *param_1,char *param_2,_func_void_void_ptr_uchar_ptr_uint *param_3,
          _func_void_void_ptr *param_4,void *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  iVar1 = DAT_002b806c;
  pcVar4 = (char *)(DAT_002b8064 + 0x2b7ffa);
  L_PrintLog(pcVar4,(char *)(DAT_002b8068 + 0x2b7ffe));
  if (*(int *)((int)param_1 + iVar1) == 0) {
    L_PrintLog((char *)(DAT_002b8074 + 0x2b8022),(char *)(DAT_002b8078 + 0x2b8024));
    iVar2 = DAT_002b8080;
    *(void **)((int)param_1 + DAT_002b807c) = param_5;
    *(_func_void_void_ptr_uchar_ptr_uint **)((int)param_1 + DAT_002b8084) = param_3;
    *(_func_void_void_ptr **)((int)param_1 + 0x418) = param_4;
    L_PrintLog((char *)(iVar2 + 0x2b8038),param_2);
    uVar3 = CCUrlConnection::NewRequest((char *)((int)param_1 + 0x18),param_2,0x3a,param_1);
    iVar2 = DAT_002b8088;
    *(undefined4 *)((int)param_1 + iVar1) = uVar3;
    L_PrintLog(pcVar4,(char *)(iVar2 + 0x2b805c));
    uVar3 = *(undefined4 *)((int)param_1 + iVar1);
  }
  else {
    L_PrintLog(pcVar4,(char *)(DAT_002b8070 + 0x2b8014));
    uVar3 = 0;
  }
  return CONCAT44(param_3,uVar3);
}


