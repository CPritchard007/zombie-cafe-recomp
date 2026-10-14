/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b6504 CCServer::RetrieveMetaDataForUniqueId */

/* CCServer::RetrieveMetaDataForUniqueId(void*, char const*, void (*)(void*, char const*, char
   const*), void (*)(void*), void (*)(void*, ccServerFailureCode), void*) */

void CCServer::RetrieveMetaDataForUniqueId
               (void *param_1,char *param_2,_func_void_void_ptr_char_ptr_char_ptr *param_3,
               _func_void_void_ptr *param_4,_func_void_void_ptr_ccServerFailureCode *param_5,
               void *param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uStack_4;
  
  iVar1 = DAT_002b65c0;
  puVar4 = (undefined4 *)(&stack0xffffffec + DAT_002b65c0);
  *(_func_void_void_ptr **)((int)&param_5 + DAT_002b65c0) = param_4;
  *(_func_void_void_ptr_char_ptr_char_ptr **)((int)&uStack_4 + DAT_002b65c0) = param_3;
  piVar3 = *(int **)(DAT_002b65c4 + 0x2b651a);
  *(undefined4 *)(&stack0x00000008 + DAT_002b65c0) =
       *(undefined4 *)(&stack0x00000430 + DAT_002b65c0);
  iVar2 = *piVar3;
  *(undefined4 *)((int)&param_6 + DAT_002b65c0) = *(undefined4 *)(&stack0x0000042c + DAT_002b65c0);
  *(int *)(&stack0x00000410 + DAT_002b65c0) = iVar2;
  *(char **)(&stack0xfffffff8 + DAT_002b65c0) = param_2;
  iVar2 = L_ServerConnected((SServer *)param_1);
  if (iVar2 != 0) {
    if (*(int *)((int)param_1 + 0x348) == 0) {
      *puVar4 = *(undefined4 *)((int)param_1 + 0xc);
      *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(&stack0xfffffff8 + iVar1);
      snprintf(&stack0x00000010 + iVar1,0x400,(char *)(DAT_002b65d0 + 0x2b6566),
               (char *)((int)param_1 + 0x18));
      CCEscapeWithPercent(&stack0x00000010 + iVar1,0x400,&stack0x00000010 + iVar1);
      *(undefined4 *)((int)param_1 + 0x350) = *(undefined4 *)((int)&uStack_4 + iVar1);
      *(undefined4 *)((int)param_1 + 0x358) = *(undefined4 *)((int)&param_6 + iVar1);
      *(undefined4 *)((int)param_1 + 0x354) = *(undefined4 *)((int)&param_5 + iVar1);
      *(undefined4 *)((int)param_1 + 0x35c) = *(undefined4 *)(&stack0x00000008 + iVar1);
      iVar2 = CCUrlConnection::NewRequest
                        ((char *)((int)param_1 + 0x18),&stack0x00000010 + iVar1,8,param_1);
      *(int *)((int)param_1 + 0x348) = iVar2;
    }
    else {
      L_PrintLog((char *)(DAT_002b65c8 + 0x2b654c),(char *)(DAT_002b65cc + 0x2b654e));
      iVar2 = 0;
    }
  }
  if (*(int *)(&stack0x00000410 + iVar1) != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}


