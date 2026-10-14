/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b735c CCServer::BootCheck */

/* CCServer::BootCheck(void*, void (*)(void*, ccBootCheckResult, char const*), void*) */

void CCServer::BootCheck(void *param_1,_func_void_void_ptr_ccBootCheckResult_char_ptr *param_2,
                        void *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  iVar1 = DAT_002b73f0;
  *(_func_void_void_ptr_ccBootCheckResult_char_ptr **)(&stack0xfffffff0 + DAT_002b73f0) = param_2;
  puVar4 = *(undefined4 **)(DAT_002b73f8 + 0x2b7370);
  pcVar5 = (char *)(DAT_002b73f4 + 0x2b7376);
  *(undefined4 *)(&stack0x00000400 + DAT_002b73f0) = *puVar4;
  *(void **)(&stack0xfffffff4 + DAT_002b73f0) = param_3;
  L_PrintLog(pcVar5,(char *)(DAT_002b73fc + 0x2b7386));
  iVar3 = *(int *)((int)param_1 + 0x3b0);
  *(undefined4 **)(&stack0xfffffff8 + iVar1) = puVar4;
  if (iVar3 == 0) {
    L_PrintLog(pcVar5,(char *)(DAT_002b7400 + 0x2b739c));
    snprintf(&stack0x00000000 + iVar1,0x400,(char *)(DAT_002b7404 + 0x2b73a8),
             (char *)((int)param_1 + 0x18));
    uVar2 = *(undefined4 *)(&stack0xfffffff0 + iVar1);
    *(undefined4 *)((int)param_1 + 0x3bc) = *(undefined4 *)(&stack0xfffffff4 + iVar1);
    *(undefined4 *)((int)param_1 + 0x3b8) = uVar2;
    L_PrintLog(pcVar5,&stack0x00000000 + iVar1);
    uVar2 = CCUrlConnection::NewRequest
                      ((char *)((int)param_1 + 0x18),&stack0x00000000 + iVar1,0x32,param_1);
    *(undefined4 *)((int)param_1 + 0x3b0) = uVar2;
  }
  if (*(int *)(&stack0x00000400 + iVar1) != **(int **)(&stack0xfffffff8 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


