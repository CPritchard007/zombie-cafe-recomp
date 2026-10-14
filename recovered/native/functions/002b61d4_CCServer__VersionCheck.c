/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b61d4 CCServer::VersionCheck */

/* CCServer::VersionCheck(void*, char const*, void (*)(void*, ccVersionCheckResult), void*) */

void CCServer::VersionCheck
               (void *param_1,char *param_2,_func_void_void_ptr_ccVersionCheckResult *param_3,
               void *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uStack_4;
  
  iVar1 = DAT_002b6268;
  puVar6 = (undefined4 *)(&stack0xffffffec + DAT_002b6268);
  *(char **)(&stack0xfffffff8 + DAT_002b6268) = param_2;
  *(void **)(&stack0x00000000 + DAT_002b6268) = param_4;
  piVar5 = *(int **)(DAT_002b6270 + 0x2b61e8);
  *(_func_void_void_ptr_ccVersionCheckResult **)((int)&uStack_4 + DAT_002b6268) = param_3;
  *(int *)(&stack0x00000408 + DAT_002b6268) = *piVar5;
  L_PrintLog((char *)(DAT_002b626c + 0x2b61fa),(char *)(DAT_002b6274 + 0x2b61fc));
  if (*(int *)((int)param_1 + 0x390) == 0) {
    uVar3 = CCGetAppVersion();
    uVar4 = *(undefined4 *)(&stack0xfffffff8 + iVar1);
    *puVar6 = uVar3;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar4;
    snprintf(&stack0x00000008 + iVar1,0x400,(char *)(DAT_002b6278 + 0x2b621c),
             (char *)((int)param_1 + 0x18));
    *(undefined4 *)((int)param_1 + 0x39c) = *(undefined4 *)(&stack0x00000000 + iVar1);
    iVar2 = DAT_002b627c;
    *(undefined4 *)((int)param_1 + 0x398) = *(undefined4 *)((int)&uStack_4 + iVar1);
    L_PrintLog((char *)(iVar2 + 0x2b623e),&stack0x00000008 + iVar1);
    uVar3 = CCUrlConnection::NewRequest
                      ((char *)((int)param_1 + 0x18),&stack0x00000008 + iVar1,6,param_1);
    *(undefined4 *)((int)param_1 + 0x390) = uVar3;
  }
  if (*(int *)(&stack0x00000408 + iVar1) != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


