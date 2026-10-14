/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ba724 CCServer::SetHitugiTransferInfo */

/* CCServer::SetHitugiTransferInfo(void*, char const*, void (*)(void*, unsigned char const*,
   unsigned int), void (*)(void*), void*) */

undefined8
CCServer::SetHitugiTransferInfo
          (void *param_1,char *param_2,_func_void_void_ptr_uchar_ptr_uint *param_3,
          _func_void_void_ptr *param_4,void *param_5)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(DAT_002ba79c + 0x2ba730);
  L_PrintLog(pcVar3,(char *)(DAT_002ba7a0 + 0x2ba736));
  if (*(int *)((int)param_1 + 0x560) == 0) {
    L_PrintLog(pcVar3,(char *)(DAT_002ba7a8 + 0x2ba75c));
    *(void **)((int)param_1 + 0x570) = param_5;
    *(_func_void_void_ptr_uchar_ptr_uint **)((int)param_1 + 0x568) = param_3;
    *(_func_void_void_ptr **)((int)param_1 + DAT_002ba7ac) = param_4;
    L_PrintLog(pcVar3,param_2);
    uVar2 = CCUrlConnection::NewRequest((char *)((int)param_1 + 0x18),param_2,0x4d,param_1);
    iVar1 = DAT_002ba7b0;
    *(undefined4 *)((int)param_1 + 0x560) = uVar2;
    L_PrintLog(pcVar3,(char *)(iVar1 + 0x2ba794));
    uVar2 = *(undefined4 *)((int)param_1 + 0x560);
  }
  else {
    L_PrintLog(pcVar3,(char *)(DAT_002ba7a4 + 0x2ba74e));
    uVar2 = 0;
  }
  return CONCAT44(param_3,uVar2);
}


