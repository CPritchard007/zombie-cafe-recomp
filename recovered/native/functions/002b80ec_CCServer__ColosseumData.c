/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b80ec CCServer::ColosseumData */

/* CCServer::ColosseumData(void*, char const*, void (*)(void*, unsigned char const*, unsigned int),
   void (*)(void*), void*) */

undefined8
CCServer::ColosseumData
          (void *param_1,char *param_2,_func_void_void_ptr_uchar_ptr_uint *param_3,
          _func_void_void_ptr *param_4,void *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  iVar1 = DAT_002b816c;
  pcVar4 = (char *)(DAT_002b8164 + 0x2b80fa);
  L_PrintLog(pcVar4,(char *)(DAT_002b8168 + 0x2b80fe));
  if (*(int *)((int)param_1 + iVar1) == 0) {
    L_PrintLog((char *)(DAT_002b8174 + 0x2b8122),(char *)(DAT_002b8178 + 0x2b8124));
    iVar2 = DAT_002b8180;
    *(void **)((int)param_1 + DAT_002b817c) = param_5;
    *(_func_void_void_ptr_uchar_ptr_uint **)((int)param_1 + DAT_002b8184) = param_3;
    *(_func_void_void_ptr **)((int)param_1 + 0x440) = param_4;
    L_PrintLog((char *)(iVar2 + 0x2b8138),param_2);
    uVar3 = CCUrlConnection::NewRequest((char *)((int)param_1 + 0x18),param_2,0x3d,param_1);
    iVar2 = DAT_002b8188;
    *(undefined4 *)((int)param_1 + iVar1) = uVar3;
    L_PrintLog(pcVar4,(char *)(iVar2 + 0x2b815c));
    uVar3 = *(undefined4 *)((int)param_1 + iVar1);
  }
  else {
    L_PrintLog(pcVar4,(char *)(DAT_002b8170 + 0x2b8114));
    uVar3 = 0;
  }
  return CONCAT44(param_3,uVar3);
}


