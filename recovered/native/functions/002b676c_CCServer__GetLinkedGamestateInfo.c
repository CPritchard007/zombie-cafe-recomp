/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b676c CCServer::GetLinkedGamestateInfo */

/* CCServer::GetLinkedGamestateInfo(void*, void (*)(void*, char const*, char const*, unsigned int),
   void (*)(void*, ccServerFailureCode), void*) */

void CCServer::GetLinkedGamestateInfo
               (void *param_1,_func_void_void_ptr_char_ptr_char_ptr_uint *param_2,
               _func_void_void_ptr_ccServerFailureCode *param_3,void *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uStack_4;
  
  iVar1 = DAT_002b6834;
  puVar5 = *(undefined4 **)(DAT_002b6830 + 0x2b6776);
  puVar6 = (undefined4 *)(&stack0xffffffec + DAT_002b6834);
  *(void **)((int)&uStack_4 + DAT_002b6834) = param_4;
  uVar4 = *puVar5;
  *(_func_void_void_ptr_char_ptr_char_ptr_uint **)(&stack0xfffffff4 + DAT_002b6834) = param_2;
  *(undefined4 *)(&stack0x00000408 + DAT_002b6834) = uVar4;
  *(_func_void_void_ptr_ccServerFailureCode **)(&stack0xfffffff8 + DAT_002b6834) = param_3;
  uVar3 = L_GameCenterConnected((SServer *)param_1);
  *(undefined4 **)(&stack0x00000000 + iVar1) = puVar5;
  if (((uVar3 != 0) && (uVar3 = (uint)*(byte *)((int)param_1 + 0x198), uVar3 != 0)) &&
     (uVar3 = 0, *(int *)((int)param_1 + 0x31c) == 0)) {
    *puVar6 = *(undefined4 *)((int)param_1 + 0x14);
    *(int *)(&stack0xfffffff0 + iVar1) = (int)param_1 + 0x198;
    snprintf(&stack0x00000008 + iVar1,0x400,(char *)(DAT_002b6838 + 0x2b67bc),
             (char *)((int)param_1 + 0x18));
    CCEscapeWithPercent(&stack0x00000008 + iVar1,0x400,&stack0x00000008 + iVar1);
    uVar4 = *(undefined4 *)(&stack0xfffffff8 + iVar1);
    *(undefined4 *)((int)param_1 + 0x328) = *(undefined4 *)(&stack0xfffffff4 + iVar1);
    *(undefined4 *)((int)param_1 + 0x32c) = uVar4;
    iVar2 = DAT_002b683c;
    *(undefined4 *)((int)param_1 + 0x330) = *(undefined4 *)((int)&uStack_4 + iVar1);
    snprintf((char *)((int)param_1 + 0x29c),0x80,(char *)(iVar2 + 0x2b67f8),(int)param_1 + 0x198);
    L_PrintLog((char *)(DAT_002b6840 + 0x2b6806),&stack0x00000008 + iVar1);
    uVar4 = CCUrlConnection::NewRequest
                      ((char *)((int)param_1 + 0x18),&stack0x00000008 + iVar1,9,param_1);
    *(undefined4 *)((int)param_1 + 0x31c) = uVar4;
    uVar3 = 1;
  }
  if (*(int *)(&stack0x00000408 + iVar1) != **(int **)(&stack0x00000000 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


