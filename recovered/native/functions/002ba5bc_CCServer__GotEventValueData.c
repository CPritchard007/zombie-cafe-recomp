/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ba5bc CCServer::GotEventValueData */

/* CCServer::GotEventValueData(void*, char const*, void (*)(void*, unsigned char const*, unsigned
   int), void (*)(void*), void*) */

undefined8
CCServer::GotEventValueData
          (void *param_1,char *param_2,_func_void_void_ptr_uchar_ptr_uint *param_3,
          _func_void_void_ptr *param_4,void *param_5)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(DAT_002ba638 + 0x2ba5c8);
  L_PrintLog(pcVar4,(char *)(DAT_002ba63c + 0x2ba5ce));
  if (*(int *)((int)param_1 + 0x510) == 0) {
    L_PrintLog((char *)(DAT_002ba644 + 0x2ba5f4),(char *)(DAT_002ba648 + 0x2ba5f6));
    *(void **)((int)param_1 + 0x520) = param_5;
    *(_func_void_void_ptr_uchar_ptr_uint **)((int)param_1 + 0x518) = param_3;
    pcVar3 = (char *)(DAT_002ba64c + 0x2ba612);
    *(_func_void_void_ptr **)((int)param_1 + DAT_002ba650) = param_4;
    L_PrintLog(pcVar3,param_2);
    uVar2 = CCUrlConnection::NewRequest((char *)((int)param_1 + 0x18),param_2,0x47,param_1);
    iVar1 = DAT_002ba654;
    *(undefined4 *)((int)param_1 + 0x510) = uVar2;
    L_PrintLog(pcVar4,(char *)(iVar1 + 0x2ba630));
    uVar2 = *(undefined4 *)((int)param_1 + 0x510);
  }
  else {
    L_PrintLog(pcVar4,(char *)(DAT_002ba640 + 0x2ba5e6));
    uVar2 = 0;
  }
  return CONCAT44(param_3,uVar2);
}


