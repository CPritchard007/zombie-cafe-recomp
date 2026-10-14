/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b6a60 CCServer::RetrieveRandomGameState */

/* CCServer::RetrieveRandomGameState(void*, void (*)(void*, char const*, unsigned char const*,
   unsigned int), void (*)(void*, ccServerFailureCode), void*, int) */

void CCServer::RetrieveRandomGameState
               (void *param_1,_func_void_void_ptr_char_ptr_uchar_ptr_uint *param_2,
               _func_void_void_ptr_ccServerFailureCode *param_3,void *param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uStack_4;
  
  iVar1 = DAT_002b6b4c;
  piVar4 = *(int **)(DAT_002b6b48 + 0x2b6a6c);
  puVar5 = (undefined4 *)(&stack0xffffffec + DAT_002b6b4c);
  *(_func_void_void_ptr_ccServerFailureCode **)((int)&param_5 + DAT_002b6b4c) = param_3;
  *(_func_void_void_ptr_char_ptr_uchar_ptr_uint **)((int)&uStack_4 + DAT_002b6b4c) = param_2;
  *(void **)(&stack0xfffffff8 + DAT_002b6b4c) = param_4;
  *(int *)(&stack0xffffffec + DAT_002b6b50 + DAT_002b6b4c) = *piVar4;
  L_PrintLog((char *)(DAT_002b6b54 + 0x2b6a86),(char *)(DAT_002b6b58 + 0x2b6a88));
  sprintf(&stack0x00000008 + iVar1,(char *)(DAT_002b6b5c + 0x2b6a94),param_1,
          *(undefined4 *)(&stack0xfffffff8 + iVar1));
  L_PrintLog((char *)(DAT_002b6b60 + 0x2b6aa2),&stack0x00000008 + iVar1);
  if (*(int *)((int)param_1 + 0x31c) == 0) {
    *puVar5 = *(undefined4 *)((int)param_1 + 0x14);
    snprintf(&stack0x00000108 + iVar1,0x400,(char *)(DAT_002b6b6c + 0x2b6aca),
             (char *)((int)param_1 + 0x18));
    CCEscapeWithPercent(&stack0x00000108 + iVar1,0x400,&stack0x00000108 + iVar1);
    *(undefined4 *)((int)param_1 + 0x324) = *(undefined4 *)((int)&uStack_4 + iVar1);
    *(undefined4 *)((int)param_1 + 0x32c) = *(undefined4 *)((int)&param_5 + iVar1);
    *(undefined4 *)((int)param_1 + 0x330) = *(undefined4 *)(&stack0xfffffff8 + iVar1);
    snprintf((char *)((int)param_1 + 0x29c),0x80,(char *)(DAT_002b6b70 + 0x2b6b04));
    L_PrintLog((char *)(DAT_002b6b74 + 0x2b6b10),&stack0x00000108 + iVar1);
    uVar3 = 10;
    if (*(int *)(&stack0x00000524 + iVar1) != 0) {
      uVar3 = 0xd;
    }
    uVar2 = CCUrlConnection::NewRequest
                      ((char *)((int)param_1 + 0x18),&stack0x00000108 + iVar1,uVar3,param_1);
    *(undefined4 *)((int)param_1 + 0x31c) = uVar2;
    uVar2 = *(undefined4 *)((int)param_1 + 0x31c);
  }
  else {
    L_PrintLog((char *)(DAT_002b6b64 + 0x2b6ab4),(char *)(DAT_002b6b68 + 0x2b6ab6));
    uVar2 = 0;
  }
  if (*(int *)(&stack0xffffffec + DAT_002b6b50 + iVar1) != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


