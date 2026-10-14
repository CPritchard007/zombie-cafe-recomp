/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b5610 CCServer::SendGiftByUniqueId */

/* CCServer::SendGiftByUniqueId(void*, char const*, char const*, void (*)(void*), void (*)(void*,
   ccServerFailureCode), void*) */

void CCServer::SendGiftByUniqueId
               (void *param_1,char *param_2,char *param_3,_func_void_void_ptr *param_4,
               _func_void_void_ptr_ccServerFailureCode *param_5,void *param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uStack_4;
  undefined4 *puVar7;
  int *piVar8;
  int *piVar9;
  
  iVar1 = DAT_002b575c;
  puVar6 = (undefined4 *)(&stack0xffffffec + DAT_002b575c);
  puVar7 = (undefined4 *)(&stack0xffffffec + DAT_002b575c);
  piVar8 = (int *)(&stack0xffffffec + DAT_002b575c);
  piVar9 = (int *)(&stack0xffffffec + DAT_002b575c);
  puVar4 = *(undefined4 **)(DAT_002b5760 + 0x2b5626);
  *(undefined4 *)((int)&param_5 + DAT_002b575c) = *(undefined4 *)(&stack0x0000086c + DAT_002b575c);
  *(_func_void_void_ptr **)((int)&uStack_4 + DAT_002b575c) = param_4;
  uVar3 = *(undefined4 *)(&stack0xffffffec + DAT_002b5764 + DAT_002b575c);
  *(undefined4 *)(&stack0xffffffec + DAT_002b5768 + DAT_002b575c) = *puVar4;
  *(undefined4 *)((int)&param_6 + DAT_002b575c) = uVar3;
  L_PrintLog((char *)(DAT_002b576c + 0x2b5642),param_2);
  L_PrintLog((char *)(DAT_002b5770 + 0x2b5650),param_3);
  iVar2 = L_ServerConnected((SServer *)param_1);
  *(undefined4 **)(&stack0x00000008 + iVar1) = puVar4;
  if (iVar2 != 0) {
    *puVar6 = param_3;
    snprintf(&stack0x00000050 + iVar1,0x400,(char *)(DAT_002b5778 + 0x2b566c),
             (int)param_1 + DAT_002b5774);
    CCMd5(&stack0x00000010 + iVar1,0x40,&stack0x00000050 + iVar1);
    uVar5 = *(undefined4 *)((int)param_1 + 0x10);
    uVar3 = CCGetDeviceID();
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar3;
    *(undefined1 **)(&stack0xfffffff8 + iVar1) = &stack0x00000010 + iVar1;
    *puVar7 = param_2;
    *(char **)(&stack0xfffffff4 + iVar1) = param_3;
    snprintf(&stack0x00000450 + iVar1,0x400,(char *)(DAT_002b577c + 0x2b5690),uVar5);
    printf((char *)(DAT_002b5780 + 0x2b56a8),&stack0x00000050 + iVar1);
    L_PrintLog((char *)(DAT_002b5784 + 0x2b56b4),param_3);
    *piVar8 = (int)(&stack0x00000450 + iVar1);
    snprintf(&stack0x00000050 + iVar1,0x400,(char *)(DAT_002b578c + 0x2b56ca),
             (int)param_1 + DAT_002b5788);
    CCMd5(&stack0x00000010 + iVar1,0x40,&stack0x00000050 + iVar1);
    *(undefined1 **)(&stack0xfffffff0 + iVar1) = &stack0x00000010 + iVar1;
    *piVar9 = (int)(&stack0x00000450 + iVar1);
    snprintf(&stack0x00000050 + iVar1,0x400,(char *)(DAT_002b5790 + 0x2b56e8),
             (char *)((int)param_1 + 0x18));
    CCEscapeWithPercent(&stack0x00000450 + iVar1,0x400,&stack0x00000050 + iVar1);
    printf((char *)(DAT_002b5794 + 0x2b570a),&stack0x00000450 + iVar1);
    uVar3 = *(undefined4 *)((int)&param_5 + iVar1);
    *(undefined4 *)((int)param_1 + 0x33c) = *(undefined4 *)((int)&uStack_4 + iVar1);
    iVar2 = DAT_002b5798;
    uVar5 = *(undefined4 *)((int)&param_6 + iVar1);
    *(undefined4 *)((int)param_1 + 0x340) = uVar3;
    *(undefined4 *)((int)param_1 + 0x344) = uVar5;
    L_PrintLog((char *)(iVar2 + 0x2b572c),&stack0x00000450 + iVar1);
    uVar3 = CCUrlConnection::NewRequest
                      ((char *)((int)param_1 + 0x18),&stack0x00000450 + iVar1,4,param_1);
    *(undefined4 *)((int)param_1 + 0x334) = uVar3;
  }
  if (*(int *)(&stack0xffffffec + DAT_002b5768 + iVar1) != **(int **)(&stack0x00000008 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


