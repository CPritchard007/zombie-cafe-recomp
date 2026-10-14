/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b63d0 CCServer::RetrieveSpecialMetaData */

/* CCServer::RetrieveSpecialMetaData(void*, char const*, void (*)(void*, char const*, char const*),
   void (*)(void*), void (*)(void*, ccServerFailureCode), void*) */

void CCServer::RetrieveSpecialMetaData
               (void *param_1,char *param_2,_func_void_void_ptr_char_ptr_char_ptr *param_3,
               _func_void_void_ptr *param_4,_func_void_void_ptr_ccServerFailureCode *param_5,
               void *param_6)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uStack_4;
  
  iVar1 = DAT_002b649c;
  puVar4 = (undefined4 *)(&stack0xffffffec + DAT_002b649c);
  *(_func_void_void_ptr_char_ptr_char_ptr **)((int)&uStack_4 + DAT_002b649c) = param_3;
  *(_func_void_void_ptr **)((int)&param_5 + DAT_002b649c) = param_4;
  uVar2 = *(undefined4 *)(&stack0xffffffec + DAT_002b64a4 + DAT_002b649c);
  piVar3 = *(int **)(DAT_002b64a0 + 0x2b63ee);
  *(undefined4 *)((int)&param_6 + DAT_002b649c) = *(undefined4 *)(&stack0x0000052c + DAT_002b649c);
  *(char **)(&stack0xfffffff8 + DAT_002b649c) = param_2;
  *(undefined4 *)(&stack0x00000008 + DAT_002b649c) = uVar2;
  *(int *)(&stack0xffffffec + DAT_002b64a8 + DAT_002b649c) = *piVar3;
  sprintf(&stack0x00000010 + DAT_002b649c,(char *)(DAT_002b64ac + 0x2b640a),
          *(undefined4 *)((int)param_1 + 0x348));
  L_PrintLog((char *)(DAT_002b64b0 + 0x2b6418),&stack0x00000010 + iVar1);
  if (*(int *)((int)param_1 + 0x348) == 0) {
    *puVar4 = *(undefined4 *)((int)param_1 + 0xc);
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)(&stack0xfffffff8 + iVar1);
    snprintf(&stack0x00000110 + iVar1,0x400,(char *)(DAT_002b64bc + 0x2b6442),
             (char *)((int)param_1 + 0x18));
    CCEscapeWithPercent(&stack0x00000110 + iVar1,0x400,&stack0x00000110 + iVar1);
    *(undefined4 *)((int)param_1 + 0x350) = *(undefined4 *)((int)&uStack_4 + iVar1);
    *(undefined4 *)((int)param_1 + 0x358) = *(undefined4 *)((int)&param_6 + iVar1);
    *(undefined4 *)((int)param_1 + 0x354) = *(undefined4 *)((int)&param_5 + iVar1);
    *(undefined4 *)((int)param_1 + 0x35c) = *(undefined4 *)(&stack0x00000008 + iVar1);
    uVar2 = CCUrlConnection::NewRequest
                      ((char *)((int)param_1 + 0x18),&stack0x00000110 + iVar1,8,param_1);
    *(undefined4 *)((int)param_1 + 0x348) = uVar2;
  }
  else {
    L_PrintLog((char *)(DAT_002b64b4 + 0x2b6428),(char *)(DAT_002b64b8 + 0x2b642a));
    uVar2 = 0;
  }
  if (*(int *)(&stack0xffffffec + DAT_002b64a8 + iVar1) != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


