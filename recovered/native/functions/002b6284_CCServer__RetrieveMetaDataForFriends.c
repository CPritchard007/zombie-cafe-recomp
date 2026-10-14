/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b6284 CCServer::RetrieveMetaDataForFriends */

/* CCServer::RetrieveMetaDataForFriends(void*, unsigned int, unsigned int, void (*)(void*, char
   const*, char const*), void (*)(void*), void (*)(void*, ccServerFailureCode), void*) */

void CCServer::RetrieveMetaDataForFriends
               (void *param_1,uint param_2,uint param_3,
               _func_void_void_ptr_char_ptr_char_ptr *param_4,_func_void_void_ptr *param_5,
               _func_void_void_ptr_ccServerFailureCode *param_6,void *param_7)

{
  char *__s;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uStack_4;
  int *piVar9;
  
  iVar1 = DAT_002b63a4;
  puVar8 = (undefined4 *)(&stack0xffffffec + DAT_002b63a4);
  piVar9 = (int *)(&stack0xffffffec + DAT_002b63a4);
  *(uint *)(&stack0xfffffff8 + DAT_002b63a4) = param_2;
  *(_func_void_void_ptr_char_ptr_char_ptr **)((int)&param_5 + DAT_002b63a4) = param_4;
  puVar7 = *(undefined4 **)(DAT_002b63a8 + 0x2b62a2);
  *(undefined4 *)((int)&param_6 + DAT_002b63a4) = *(undefined4 *)(&stack0x00000534 + DAT_002b63a4);
  *(uint *)((int)&uStack_4 + DAT_002b63a4) = param_3;
  *(undefined4 *)(&stack0x0000000c + DAT_002b63a4) =
       *(undefined4 *)(&stack0x0000053c + DAT_002b63a4);
  *(undefined4 *)(&stack0xffffffec + DAT_002b63ac + DAT_002b63a4) = *puVar7;
  *(undefined4 *)((int)&param_7 + DAT_002b63a4) =
       *(undefined4 *)(&stack0xffffffec + DAT_002b63b0 + DAT_002b63a4);
  L_PrintLog((char *)(DAT_002b63b4 + 0x2b62c2),(char *)(DAT_002b63b8 + 0x2b62c4));
  iVar2 = L_ServerConnected((SServer *)param_1);
  *(undefined4 **)(&stack0x00000010 + iVar1) = puVar7;
  if (iVar2 != 0) {
    iVar2 = 0;
    do {
      __s = &stack0x00000118 + iVar1;
      __s[iVar2] = '\0';
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x400);
    *(undefined4 *)((int)param_1 + 0x348) = 1;
    *(int *)(&stack0xfffffff4 + iVar1) = (int)param_1 + 0x18;
    *puVar8 = *(undefined4 *)((int)param_1 + 0xc);
    snprintf(__s,0x400,(char *)(DAT_002b63bc + 0x2b6300),*(undefined4 *)(&stack0xfffffff4 + iVar1));
    for (iVar2 = 0; iVar2 != *(int *)((int)&uStack_4 + iVar1); iVar2 = iVar2 + 1) {
      iVar6 = *(int *)(&stack0xfffffff8 + iVar1);
      iVar3 = *(int *)((int)param_1 + 0x22c);
      *piVar9 = iVar2;
      *(int *)(&stack0xfffffff0 + iVar1) = iVar3 + (iVar2 + iVar6) * 0x284 + 0x204;
      snprintf(__s,0x400,(char *)(DAT_002b63c0 + 0x2b6320),__s);
    }
    CCEscapeWithPercent(__s,0x400,__s);
    uVar5 = *(undefined4 *)((int)&param_7 + iVar1);
    *(undefined4 *)((int)param_1 + 0x350) = *(undefined4 *)((int)&param_5 + iVar1);
    uVar4 = *(undefined4 *)((int)&param_6 + iVar1);
    *(undefined4 *)((int)param_1 + 0x358) = uVar5;
    *(undefined4 *)((int)param_1 + 0x354) = uVar4;
    iVar3 = DAT_002b63c4;
    *(undefined4 *)((int)param_1 + 0x35c) = *(undefined4 *)(&stack0x0000000c + iVar1);
    sprintf(&stack0x00000018 + iVar1,(char *)(iVar3 + 0x2b636e),iVar2);
    L_PrintLog(&stack0x00000018 + iVar1,(char *)(DAT_002b63c8 + 0x2b637c));
    uVar4 = CCUrlConnection::NewRequest(*(char **)(&stack0xfffffff4 + iVar1),__s,0xc,param_1);
    *(undefined4 *)((int)param_1 + 0x348) = uVar4;
  }
  if (*(int *)(&stack0xffffffec + DAT_002b63ac + iVar1) != **(int **)(&stack0x00000010 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


