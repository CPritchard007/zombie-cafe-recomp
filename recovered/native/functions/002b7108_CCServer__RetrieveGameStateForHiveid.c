/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b7108 CCServer::RetrieveGameStateForHiveid */

/* CCServer::RetrieveGameStateForHiveid(void*, char const*, void (*)(void*, char const*, unsigned
   char const*, unsigned int), void (*)(void*, ccServerFailureCode), void*) */

void CCServer::RetrieveGameStateForHiveid
               (void *param_1,char *param_2,_func_void_void_ptr_char_ptr_uchar_ptr_uint *param_3,
               _func_void_void_ptr_ccServerFailureCode *param_4,void *param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar1 = DAT_002b71d0;
  puVar6 = (undefined4 *)(&stack0xffffffec + DAT_002b71d0);
  *(_func_void_void_ptr_ccServerFailureCode **)(&stack0x00000008 + DAT_002b71d0) = param_4;
  *(char **)((int)&param_5 + DAT_002b71d0) = param_2;
  puVar5 = *(undefined4 **)(DAT_002b71d4 + 0x2b711e);
  *(_func_void_void_ptr_char_ptr_uchar_ptr_uint **)(&stack0x00000004 + DAT_002b71d0) = param_3;
  uVar2 = *puVar5;
  *(undefined4 *)(&stack0x0000000c + DAT_002b71d0) =
       *(undefined4 *)(&stack0x00000434 + DAT_002b71d0);
  *(undefined4 *)(&stack0x00000418 + DAT_002b71d0) = uVar2;
  iVar3 = *(int *)((int)param_1 + 0x31c);
  uVar2 = 0;
  *(undefined4 **)(&stack0x00000010 + DAT_002b71d0) = puVar5;
  if (iVar3 == 0) {
    uVar2 = getMyUdid(param_1);
    *puVar6 = *(undefined4 *)((int)param_1 + 0x14);
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar2;
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = *(undefined4 *)((int)&param_5 + iVar1);
    snprintf(&stack0x00000018 + iVar1,0x400,(char *)(DAT_002b71d8 + 0x2b7154),
             (char *)((int)param_1 + 0x18));
    CCEscapeWithPercent(&stack0x00000018 + iVar1,0x400,&stack0x00000018 + iVar1);
    uVar4 = *(undefined4 *)(&stack0x00000008 + iVar1);
    *(undefined4 *)((int)param_1 + 0x324) = *(undefined4 *)(&stack0x00000004 + iVar1);
    *(undefined4 *)((int)param_1 + 0x32c) = uVar4;
    iVar3 = DAT_002b71dc;
    *(undefined4 *)((int)param_1 + 0x330) = *(undefined4 *)(&stack0x0000000c + iVar1);
    snprintf((char *)((int)param_1 + 0x29c),0x80,(char *)(iVar3 + 0x2b7190),uVar2);
    L_PrintLog((char *)(DAT_002b71e0 + 0x2b719e),&stack0x00000018 + iVar1);
    uVar2 = CCUrlConnection::NewRequest
                      ((char *)((int)param_1 + 0x18),&stack0x00000018 + iVar1,0x4f,param_1);
    *(undefined4 *)((int)param_1 + 0x31c) = uVar2;
    puts((char *)(DAT_002b71e4 + 0x2b71b4));
    uVar2 = *(undefined4 *)((int)param_1 + 0x31c);
  }
  if (*(int *)(&stack0x00000418 + iVar1) != **(int **)(&stack0x00000010 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


