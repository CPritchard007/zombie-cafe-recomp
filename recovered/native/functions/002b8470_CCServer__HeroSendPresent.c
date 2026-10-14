/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b8470 CCServer::HeroSendPresent */

/* CCServer::HeroSendPresent(void*, char const*, void (*)(void*, unsigned char const*, unsigned
   int), void (*)(void*), void*) */

undefined4
CCServer::HeroSendPresent
          (void *param_1,char *param_2,_func_void_void_ptr_uchar_ptr_uint *param_3,
          _func_void_void_ptr *param_4,void *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  
  iVar1 = DAT_002b84f4;
  pcVar4 = (char *)(DAT_002b84ec + 0x2b8480);
  L_PrintLog(pcVar4,(char *)(DAT_002b84f0 + 0x2b8484));
  if (*(int *)((int)param_1 + iVar1) == 0) {
    pcVar5 = (char *)(DAT_002b84fc + 0x2b84a8);
    L_PrintLog(pcVar5,(char *)(DAT_002b8500 + 0x2b84aa));
    *(void **)((int)param_1 + DAT_002b8504) = param_5;
    *(_func_void_void_ptr_uchar_ptr_uint **)((int)param_1 + DAT_002b8508) = param_3;
    *(_func_void_void_ptr **)((int)param_1 + 0x4b8) = param_4;
    L_PrintLog(pcVar5,param_2);
    uVar3 = CCUrlConnection::NewRequest((char *)((int)param_1 + 0x18),param_2,0x42,param_1);
    iVar2 = DAT_002b850c;
    *(undefined4 *)((int)param_1 + iVar1) = uVar3;
    L_PrintLog(pcVar4,(char *)(iVar2 + 0x2b84e2));
    uVar3 = *(undefined4 *)((int)param_1 + iVar1);
  }
  else {
    L_PrintLog(pcVar4,(char *)(DAT_002b84f8 + 0x2b849a));
    uVar3 = 0;
  }
  return uVar3;
}


