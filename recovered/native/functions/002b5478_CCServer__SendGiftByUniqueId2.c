/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b5478 CCServer::SendGiftByUniqueId2 */

/* CCServer::SendGiftByUniqueId2(void*, char const*, char const*, void (*)(void*), void (*)(void*,
   ccServerFailureCode), void*) */

void CCServer::SendGiftByUniqueId2
               (void *param_1,char *param_2,char *param_3,_func_void_void_ptr *param_4,
               _func_void_void_ptr_ccServerFailureCode *param_5,void *param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uStack_4;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  
  iVar1 = DAT_002b55cc;
  puVar7 = (undefined4 *)(&stack0xffffffec + DAT_002b55cc);
  puVar8 = (undefined4 *)(&stack0xffffffec + DAT_002b55cc);
  piVar9 = (int *)(&stack0xffffffec + DAT_002b55cc);
  piVar10 = (int *)(&stack0xffffffec + DAT_002b55cc);
  puVar5 = *(undefined4 **)(DAT_002b55d0 + 0x2b548e);
  *(undefined4 *)((int)&param_5 + DAT_002b55cc) = *(undefined4 *)(&stack0x0000086c + DAT_002b55cc);
  *(_func_void_void_ptr **)((int)&uStack_4 + DAT_002b55cc) = param_4;
  uVar4 = *(undefined4 *)(&stack0xffffffec + DAT_002b55d4 + DAT_002b55cc);
  *(undefined4 *)(&stack0xffffffec + DAT_002b55d8 + DAT_002b55cc) = *puVar5;
  *(undefined4 *)((int)&param_6 + DAT_002b55cc) = uVar4;
  L_PrintLog((char *)(DAT_002b55dc + 0x2b54aa),param_2);
  L_PrintLog((char *)(DAT_002b55e0 + 0x2b54b8),param_3);
  uVar2 = L_ServerConnected((SServer *)param_1);
  *(undefined4 **)(&stack0x00000008 + iVar1) = puVar5;
  if (uVar2 != 0) {
    *puVar7 = param_3;
    snprintf(&stack0x00000050 + iVar1,0x400,(char *)(DAT_002b55e8 + 0x2b54d4),
             (int)param_1 + DAT_002b55e4);
    CCMd5(&stack0x00000010 + iVar1,0x40,&stack0x00000050 + iVar1);
    uVar6 = *(undefined4 *)((int)param_1 + 0x10);
    uVar4 = CCGetDeviceID();
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar4;
    *(undefined1 **)(&stack0xfffffff8 + iVar1) = &stack0x00000010 + iVar1;
    *puVar8 = param_2;
    *(char **)(&stack0xfffffff4 + iVar1) = param_3;
    snprintf(&stack0x00000450 + iVar1,0x400,(char *)(DAT_002b55ec + 0x2b54f8),uVar6);
    printf((char *)(DAT_002b55f0 + 0x2b5510),&stack0x00000050 + iVar1);
    L_PrintLog((char *)(DAT_002b55f4 + 0x2b551c),param_3);
    *piVar9 = (int)(&stack0x00000450 + iVar1);
    snprintf(&stack0x00000050 + iVar1,0x400,(char *)(DAT_002b55fc + 0x2b5532),
             (int)param_1 + DAT_002b55f8);
    CCMd5(&stack0x00000010 + iVar1,0x40,&stack0x00000050 + iVar1);
    *(undefined1 **)(&stack0xfffffff0 + iVar1) = &stack0x00000010 + iVar1;
    *piVar10 = (int)(&stack0x00000450 + iVar1);
    snprintf(&stack0x00000050 + iVar1,0x400,(char *)(DAT_002b5600 + 0x2b5550),
             (char *)((int)param_1 + 0x18));
    CCEscapeWithPercent(&stack0x00000450 + iVar1,0x400,&stack0x00000050 + iVar1);
    printf((char *)(DAT_002b5604 + 0x2b5572),&stack0x00000450 + iVar1);
    uVar4 = *(undefined4 *)((int)&param_5 + iVar1);
    *(undefined4 *)((int)param_1 + 0x33c) = *(undefined4 *)((int)&uStack_4 + iVar1);
    iVar3 = DAT_002b5608;
    uVar6 = *(undefined4 *)((int)&param_6 + iVar1);
    *(undefined4 *)((int)param_1 + 0x340) = uVar4;
    *(undefined4 *)((int)param_1 + 0x344) = uVar6;
    L_PrintLog((char *)(iVar3 + 0x2b5594),&stack0x00000450 + iVar1);
    iVar3 = CCUrlConnection::NewRequest
                      ((char *)((int)param_1 + 0x18),&stack0x00000450 + iVar1,0x3c,param_1);
    *(int *)((int)param_1 + 0x334) = iVar3;
    uVar2 = (uint)(iVar3 == 1);
  }
  if (*(int *)(&stack0xffffffec + DAT_002b55d8 + iVar1) != **(int **)(&stack0x00000008 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


