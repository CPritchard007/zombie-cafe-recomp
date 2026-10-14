/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b8364 CCServer::ColosseumSendResult */

/* CCServer::ColosseumSendResult(void*, char const*, void (*)(void*, unsigned char const*, unsigned
   int), void (*)(void*), void*) */

undefined8
CCServer::ColosseumSendResult
          (void *param_1,char *param_2,_func_void_void_ptr_uchar_ptr_uint *param_3,
          _func_void_void_ptr *param_4,void *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = (char *)(DAT_002b83dc + 0x2b8370);
  L_PrintLog(pcVar4,(char *)(DAT_002b83e0 + 0x2b8374));
  if (*(int *)((int)param_1 + DAT_002b83e4) == 0) {
    pcVar5 = (char *)(DAT_002b83ec + 0x2b839a);
    L_PrintLog(pcVar5,(char *)(DAT_002b83f0 + 0x2b839e));
    *(void **)((int)param_1 + DAT_002b83f4) = param_5;
    iVar1 = DAT_002b83fc;
    *(_func_void_void_ptr_uchar_ptr_uint **)((int)param_1 + DAT_002b83f8) = param_3;
    *(_func_void_void_ptr **)((int)param_1 + 0x490) = param_4;
    L_PrintLog(pcVar5,param_2);
    uVar3 = CCUrlConnection::NewRequest((char *)((int)param_1 + 0x18),param_2,0x41,param_1);
    iVar2 = DAT_002b8400;
    *(undefined4 *)((int)param_1 + iVar1) = uVar3;
    L_PrintLog(pcVar4,(char *)(iVar2 + 0x2b83d6));
    uVar3 = *(undefined4 *)((int)param_1 + iVar1);
  }
  else {
    L_PrintLog(pcVar4,(char *)(DAT_002b83e8 + 0x2b838c));
    uVar3 = 0;
  }
  return CONCAT44(param_3,uVar3);
}


