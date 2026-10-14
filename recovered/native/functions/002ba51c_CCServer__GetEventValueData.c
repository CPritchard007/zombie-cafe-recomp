/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ba51c CCServer::GetEventValueData */

/* CCServer::GetEventValueData(void*, char const*, void (*)(void*, unsigned char const*, unsigned
   int), void (*)(void*), void*) */

undefined8
CCServer::GetEventValueData
          (void *param_1,char *param_2,_func_void_void_ptr_uchar_ptr_uint *param_3,
          _func_void_void_ptr *param_4,void *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  iVar1 = DAT_002ba59c;
  pcVar4 = (char *)(DAT_002ba594 + 0x2ba52a);
  L_PrintLog(pcVar4,(char *)(DAT_002ba598 + 0x2ba52e));
  if (*(int *)((int)param_1 + iVar1) == 0) {
    L_PrintLog((char *)(DAT_002ba5a4 + 0x2ba552),(char *)(DAT_002ba5a8 + 0x2ba554));
    iVar2 = DAT_002ba5b0;
    *(void **)((int)param_1 + DAT_002ba5ac) = param_5;
    *(_func_void_void_ptr_uchar_ptr_uint **)((int)param_1 + DAT_002ba5b4) = param_3;
    *(_func_void_void_ptr **)((int)param_1 + 0x508) = param_4;
    L_PrintLog((char *)(iVar2 + 0x2ba568),param_2);
    uVar3 = CCUrlConnection::NewRequest((char *)((int)param_1 + 0x18),param_2,0x46,param_1);
    iVar2 = DAT_002ba5b8;
    *(undefined4 *)((int)param_1 + iVar1) = uVar3;
    L_PrintLog(pcVar4,(char *)(iVar2 + 0x2ba58c));
    uVar3 = *(undefined4 *)((int)param_1 + iVar1);
  }
  else {
    L_PrintLog(pcVar4,(char *)(DAT_002ba5a0 + 0x2ba544));
    uVar3 = 0;
  }
  return CONCAT44(param_3,uVar3);
}


