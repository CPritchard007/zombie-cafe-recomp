/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b6914 CCServer::RetrieveGameStateForUniqueId */

/* CCServer::RetrieveGameStateForUniqueId(void*, char const*, void (*)(void*, char const*, unsigned
   char const*, unsigned int), void (*)(void*, ccServerFailureCode), void*, unsigned int) */

void CCServer::RetrieveGameStateForUniqueId
               (void *param_1,char *param_2,_func_void_void_ptr_char_ptr_uchar_ptr_uint *param_3,
               _func_void_void_ptr_ccServerFailureCode *param_4,void *param_5,uint param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar1 = DAT_002b69f4;
  puVar6 = (undefined4 *)(&stack0xffffffec + DAT_002b69f4);
  puVar7 = (undefined4 *)(&stack0xffffffec + DAT_002b69f4);
  piVar5 = *(int **)(DAT_002b69f0 + 0x2b6920);
  *(_func_void_void_ptr_ccServerFailureCode **)((int)&param_6 + DAT_002b69f4) = param_4;
  iVar4 = *piVar5;
  *(_func_void_void_ptr_char_ptr_uchar_ptr_uint **)((int)&param_5 + DAT_002b69f4) = param_3;
  *(undefined4 *)(&stack0x00000008 + DAT_002b69f4) =
       *(undefined4 *)(&stack0x0000042c + DAT_002b69f4);
  *(int *)(&stack0x00000410 + DAT_002b69f4) = iVar4;
  iVar4 = L_ServerConnected((SServer *)param_1);
  if ((iVar4 != 0) && (*(int *)((int)param_1 + 0x31c) == 0)) {
    if (*(int *)(&stack0x00000430 + iVar1) == 0) {
      *puVar6 = *(undefined4 *)((int)param_1 + 0x14);
      *(char **)(&stack0xfffffff0 + iVar1) = param_2;
      snprintf(&stack0x00000010 + iVar1,0x400,(char *)(DAT_002b69f8 + 0x2b6968),(int)param_1 + 0x18)
      ;
    }
    else {
      *puVar7 = *(undefined4 *)((int)param_1 + 0x14);
      *(undefined4 *)(&stack0xfffffff0 + iVar1) = *(undefined4 *)((int)param_1 + 0x10);
      *(char **)(&stack0xfffffff4 + iVar1) = param_2;
      snprintf(&stack0x00000010 + iVar1,0x400,(char *)(DAT_002b69fc + 0x2b6982),(int)param_1 + 0x18)
      ;
    }
    CCEscapeWithPercent(&stack0x00000010 + iVar1,0x400,&stack0x00000010 + iVar1);
    uVar2 = *(undefined4 *)((int)&param_6 + iVar1);
    *(undefined4 *)((int)param_1 + 0x324) = *(undefined4 *)((int)&param_5 + iVar1);
    uVar3 = *(undefined4 *)(&stack0x00000008 + iVar1);
    *(undefined4 *)((int)param_1 + 0x32c) = uVar2;
    *(undefined4 *)((int)param_1 + 0x330) = uVar3;
    snprintf((char *)((int)param_1 + 0x29c),0x80,(char *)(DAT_002b6a00 + 0x2b69b6),param_2);
    L_PrintLog((char *)(DAT_002b6a04 + 0x2b69c6),&stack0x00000010 + iVar1);
    uVar2 = CCUrlConnection::NewRequest
                      ((char *)((int)param_1 + 0x18),&stack0x00000010 + iVar1,10,param_1);
    *(undefined4 *)((int)param_1 + 0x31c) = uVar2;
  }
  if (*(int *)(&stack0x00000410 + iVar1) != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


