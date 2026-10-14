/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b82c8 CCServer::ColosseumGotGiftData */

/* CCServer::ColosseumGotGiftData(void*, char const*, void (*)(void*, unsigned char const*, unsigned
   int), void (*)(void*), void*) */

undefined8
CCServer::ColosseumGotGiftData
          (void *param_1,char *param_2,_func_void_void_ptr_uchar_ptr_uint *param_3,
          _func_void_void_ptr *param_4,void *param_5)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(DAT_002b8344 + 0x2b82d4);
  L_PrintLog(pcVar4,(char *)(DAT_002b8348 + 0x2b82da));
  if (*(int *)((int)param_1 + 0x470) == 0) {
    L_PrintLog((char *)(DAT_002b8350 + 0x2b8300),(char *)(DAT_002b8354 + 0x2b8302));
    *(void **)((int)param_1 + 0x480) = param_5;
    *(_func_void_void_ptr_uchar_ptr_uint **)((int)param_1 + 0x478) = param_3;
    pcVar3 = (char *)(DAT_002b8358 + 0x2b831e);
    *(_func_void_void_ptr **)((int)param_1 + DAT_002b835c) = param_4;
    L_PrintLog(pcVar3,param_2);
    uVar2 = CCUrlConnection::NewRequest((char *)((int)param_1 + 0x18),param_2,0x40,param_1);
    iVar1 = DAT_002b8360;
    *(undefined4 *)((int)param_1 + 0x470) = uVar2;
    L_PrintLog(pcVar4,(char *)(iVar1 + 0x2b833c));
    uVar2 = *(undefined4 *)((int)param_1 + 0x470);
  }
  else {
    L_PrintLog(pcVar4,(char *)(DAT_002b834c + 0x2b82f2));
    uVar2 = 0;
  }
  return CONCAT44(param_3,uVar2);
}


