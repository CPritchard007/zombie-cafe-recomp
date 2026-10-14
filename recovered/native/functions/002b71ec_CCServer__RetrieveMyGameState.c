/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b71ec CCServer::RetrieveMyGameState */

/* CCServer::RetrieveMyGameState(void*, void (*)(void*, char const*, unsigned char const*, unsigned
   int), void (*)(void*, ccServerFailureCode), void*) */

void CCServer::RetrieveMyGameState
               (void *param_1,_func_void_void_ptr_char_ptr_uchar_ptr_uint *param_2,
               _func_void_void_ptr_ccServerFailureCode *param_3,void *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uStack_4;
  
  iVar1 = DAT_002b72a0;
  puVar5 = (undefined4 *)(&stack0xffffffec + DAT_002b72a0);
  *(void **)((int)&uStack_4 + DAT_002b72a0) = param_4;
  *(_func_void_void_ptr_ccServerFailureCode **)(&stack0xfffffff8 + DAT_002b72a0) = param_3;
  *(_func_void_void_ptr_char_ptr_uchar_ptr_uint **)(&stack0xfffffff4 + DAT_002b72a0) = param_2;
  uVar3 = **(undefined4 **)(DAT_002b72a4 + 0x2b7202);
  *(undefined4 **)(&stack0x00000000 + DAT_002b72a0) = *(undefined4 **)(DAT_002b72a4 + 0x2b7202);
  *(undefined4 *)(&stack0x00000408 + DAT_002b72a0) = uVar3;
  if (*(int *)((int)param_1 + 0x31c) == 0) {
    uVar3 = getMyUdid(param_1);
    *puVar5 = *(undefined4 *)((int)param_1 + 0x14);
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar3;
    snprintf(&stack0x00000008 + iVar1,0x400,(char *)(DAT_002b72a8 + 0x2b722c),
             (char *)((int)param_1 + 0x18));
    CCEscapeWithPercent(&stack0x00000008 + iVar1,0x400,&stack0x00000008 + iVar1);
    uVar2 = *(undefined4 *)(&stack0xfffffff8 + iVar1);
    *(undefined4 *)((int)param_1 + 0x324) = *(undefined4 *)(&stack0xfffffff4 + iVar1);
    uVar4 = *(undefined4 *)((int)&uStack_4 + iVar1);
    *(undefined4 *)((int)param_1 + 0x32c) = uVar2;
    *(undefined4 *)((int)param_1 + 0x330) = uVar4;
    snprintf((char *)((int)param_1 + 0x29c),0x80,(char *)(DAT_002b72ac + 0x2b7266),uVar3);
    L_PrintLog((char *)(DAT_002b72b0 + 0x2b7276),&stack0x00000008 + iVar1);
    uVar3 = CCUrlConnection::NewRequest
                      ((char *)((int)param_1 + 0x18),&stack0x00000008 + iVar1,10,param_1);
    *(undefined4 *)((int)param_1 + 0x31c) = uVar3;
  }
  if (*(int *)(&stack0x00000408 + iVar1) != **(int **)(&stack0x00000000 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


