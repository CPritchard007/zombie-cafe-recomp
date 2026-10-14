/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b7650 CCServer::UpdateBonus */

/* CCServer::UpdateBonus(void*, char const*, void (*)(void*, unsigned char const*, unsigned int),
   void (*)(void*, ccServerFailureCode), void*) */

undefined4
CCServer::UpdateBonus
          (void *param_1,char *param_2,_func_void_void_ptr_uchar_ptr_uint *param_3,
          _func_void_void_ptr_ccServerFailureCode *param_4,void *param_5)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(DAT_002b76c4 + 0x2b765e);
  L_PrintLog(pcVar4,(char *)(DAT_002b76c8 + 0x2b7664));
  uVar2 = 0;
  if (*(int *)((int)param_1 + 0x3f4) == 0) {
    pcVar3 = (char *)(DAT_002b76cc + 0x2b767e);
    L_PrintLog(pcVar3,(char *)(DAT_002b76d0 + 0x2b7680));
    *(void **)((int)param_1 + DAT_002b76d4) = param_5;
    *(_func_void_void_ptr_uchar_ptr_uint **)((int)param_1 + 0x3fc) = param_3;
    *(_func_void_void_ptr_ccServerFailureCode **)((int)param_1 + 0x400) = param_4;
    L_PrintLog(pcVar3,param_2);
    uVar2 = CCUrlConnection::NewRequest((char *)((int)param_1 + 0x18),param_2,0x37,param_1);
    iVar1 = DAT_002b76d8;
    *(undefined4 *)((int)param_1 + 0x3f4) = uVar2;
    L_PrintLog(pcVar4,(char *)(iVar1 + 0x2b76ba));
    uVar2 = *(undefined4 *)((int)param_1 + 0x3f4);
  }
  return uVar2;
}


