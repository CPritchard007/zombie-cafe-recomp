/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ba444 CCServer::GetEntryData */

/* CCServer::GetEntryData(void*, char const*, void (*)(void*, unsigned char const*, unsigned int),
   void (*)(void*), void*) */

undefined8
CCServer::GetEntryData
          (void *param_1,char *param_2,_func_void_void_ptr_uchar_ptr_uint *param_3,
          _func_void_void_ptr *param_4,void *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  iVar1 = DAT_002ba4c4;
  pcVar4 = (char *)(DAT_002ba4bc + 0x2ba452);
  L_PrintLog(pcVar4,(char *)(DAT_002ba4c0 + 0x2ba456));
  if (*(int *)((int)param_1 + iVar1) == 0) {
    L_PrintLog((char *)(DAT_002ba4cc + 0x2ba47a),(char *)(DAT_002ba4d0 + 0x2ba47c));
    iVar2 = DAT_002ba4d8;
    *(void **)((int)param_1 + DAT_002ba4d4) = param_5;
    *(_func_void_void_ptr_uchar_ptr_uint **)((int)param_1 + DAT_002ba4dc) = param_3;
    *(_func_void_void_ptr **)((int)param_1 + 0x4e0) = param_4;
    L_PrintLog((char *)(iVar2 + 0x2ba490),param_2);
    uVar3 = CCUrlConnection::NewRequest((char *)((int)param_1 + 0x18),param_2,0x45,param_1);
    iVar2 = DAT_002ba4e0;
    *(undefined4 *)((int)param_1 + iVar1) = uVar3;
    L_PrintLog(pcVar4,(char *)(iVar2 + 0x2ba4b4));
    uVar3 = *(undefined4 *)((int)param_1 + iVar1);
  }
  else {
    L_PrintLog(pcVar4,(char *)(DAT_002ba4c8 + 0x2ba46c));
    uVar3 = 0;
  }
  return CONCAT44(param_3,uVar3);
}


