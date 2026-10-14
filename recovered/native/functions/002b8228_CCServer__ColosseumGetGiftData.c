/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b8228 CCServer::ColosseumGetGiftData */

/* CCServer::ColosseumGetGiftData(void*, char const*, void (*)(void*, unsigned char const*, unsigned
   int), void (*)(void*), void*) */

undefined8
CCServer::ColosseumGetGiftData
          (void *param_1,char *param_2,_func_void_void_ptr_uchar_ptr_uint *param_3,
          _func_void_void_ptr *param_4,void *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  iVar1 = DAT_002b82a8;
  pcVar4 = (char *)(DAT_002b82a0 + 0x2b8236);
  L_PrintLog(pcVar4,(char *)(DAT_002b82a4 + 0x2b823a));
  if (*(int *)((int)param_1 + iVar1) == 0) {
    L_PrintLog((char *)(DAT_002b82b0 + 0x2b825e),(char *)(DAT_002b82b4 + 0x2b8260));
    iVar2 = DAT_002b82bc;
    *(void **)((int)param_1 + DAT_002b82b8) = param_5;
    *(_func_void_void_ptr_uchar_ptr_uint **)((int)param_1 + DAT_002b82c0) = param_3;
    *(_func_void_void_ptr **)((int)param_1 + 0x468) = param_4;
    L_PrintLog((char *)(iVar2 + 0x2b8274),param_2);
    uVar3 = CCUrlConnection::NewRequest((char *)((int)param_1 + 0x18),param_2,0x3f,param_1);
    iVar2 = DAT_002b82c4;
    *(undefined4 *)((int)param_1 + iVar1) = uVar3;
    L_PrintLog(pcVar4,(char *)(iVar2 + 0x2b8298));
    uVar3 = *(undefined4 *)((int)param_1 + iVar1);
  }
  else {
    L_PrintLog(pcVar4,(char *)(DAT_002b82ac + 0x2b8250));
    uVar3 = 0;
  }
  return CONCAT44(param_3,uVar3);
}


