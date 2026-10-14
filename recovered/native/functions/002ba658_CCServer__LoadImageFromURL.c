/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ba658 CCServer::LoadImageFromURL */

/* CCServer::LoadImageFromURL(void*, char const*, char const*, void (*)(void*), void (*)(void*),
   void*) */

void CCServer::LoadImageFromURL
               (void *param_1,char *param_2,char *param_3,_func_void_void_ptr *param_4,
               _func_void_void_ptr *param_5,void *param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 uStack_4;
  
  iVar2 = DAT_002ba704;
  iVar1 = DAT_002ba6fc;
  puVar8 = (undefined4 *)(&stack0xffffffec + DAT_002ba6fc);
  *(char **)(&stack0xfffffff4 + DAT_002ba6fc) = param_2;
  puVar6 = *(undefined4 **)(DAT_002ba708 + 0x2ba66c);
  *(_func_void_void_ptr **)((int)&uStack_4 + DAT_002ba6fc) = param_4;
  uVar4 = *puVar6;
  *(undefined4 *)((int)&param_5 + DAT_002ba6fc) = *(undefined4 *)(&stack0x0000042c + DAT_002ba6fc);
  *(char **)(&stack0xfffffff8 + DAT_002ba6fc) = param_3;
  *(undefined4 *)(&stack0x00000410 + DAT_002ba6fc) = uVar4;
  pcVar7 = (char *)(DAT_002ba700 + 0x2ba68a);
  *(undefined4 *)((int)&param_6 + DAT_002ba6fc) = *(undefined4 *)(&stack0x00000430 + DAT_002ba6fc);
  L_PrintLog(pcVar7,(char *)(DAT_002ba70c + 0x2ba68e));
  iVar5 = *(int *)((int)param_1 + iVar2);
  *(undefined4 **)(&stack0x00000008 + iVar1) = puVar6;
  if (iVar5 == 0) {
    uVar4 = *(undefined4 *)((int)&uStack_4 + iVar1);
    *(undefined4 *)((int)param_1 + DAT_002ba714) = *(undefined4 *)((int)&param_6 + iVar1);
    uVar3 = *(undefined4 *)((int)&param_5 + iVar1);
    *(undefined4 *)((int)param_1 + DAT_002ba718) = uVar4;
    *(undefined4 *)((int)param_1 + 0x530) = uVar3;
    *puVar8 = *(undefined4 *)(&stack0xfffffff4 + iVar1);
    snprintf(&stack0x00000010 + iVar1,0x400,(char *)(DAT_002ba71c + 0x2ba6ce),
             (char *)((int)param_1 + 0x18));
    uVar4 = CCUrlConnection::LoadImageFromURL
                      ((char *)((int)param_1 + 0x18),&stack0x00000010 + iVar1,
                       *(char **)(&stack0xfffffff8 + iVar1),0x49);
    *(undefined4 *)((int)param_1 + iVar2) = uVar4;
  }
  else {
    L_PrintLog(pcVar7,(char *)(DAT_002ba710 + 0x2ba6a4));
    uVar4 = 0;
  }
  if (*(int *)(&stack0x00000410 + iVar1) != **(int **)(&stack0x00000008 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


