/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ba8d4 CCServer::clearHitugiTransferInfo */

/* CCServer::clearHitugiTransferInfo(void*, char const*, void (*)(void*, unsigned char const*,
   unsigned int), void (*)(void*), void*) */

undefined8
CCServer::clearHitugiTransferInfo
          (void *param_1,char *param_2,_func_void_void_ptr_uchar_ptr_uint *param_3,
          _func_void_void_ptr *param_4,void *param_5)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(DAT_002ba94c + 0x2ba8e0);
  L_PrintLog(pcVar4,(char *)(DAT_002ba950 + 0x2ba8e6));
  if (*(int *)((int)param_1 + 0x560) == 0) {
    L_PrintLog(pcVar4,(char *)(DAT_002ba958 + 0x2ba90c));
    *(void **)((int)param_1 + 0x570) = param_5;
    *(_func_void_void_ptr_uchar_ptr_uint **)((int)param_1 + 0x568) = param_3;
    pcVar3 = (char *)(DAT_002ba95c + 0x2ba928);
    *(_func_void_void_ptr **)((int)param_1 + DAT_002ba960) = param_4;
    L_PrintLog(pcVar3,param_2);
    uVar2 = CCUrlConnection::NewRequest((char *)((int)param_1 + 0x18),param_2,0x52,param_1);
    iVar1 = DAT_002ba964;
    *(undefined4 *)((int)param_1 + 0x560) = uVar2;
    L_PrintLog(pcVar4,(char *)(iVar1 + 0x2ba946));
    uVar2 = *(undefined4 *)((int)param_1 + 0x560);
  }
  else {
    L_PrintLog(pcVar4,(char *)(DAT_002ba954 + 0x2ba8fe));
    uVar2 = 0;
  }
  return CONCAT44(param_3,uVar2);
}


