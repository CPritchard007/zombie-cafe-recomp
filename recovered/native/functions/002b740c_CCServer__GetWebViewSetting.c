/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b740c CCServer::GetWebViewSetting */

/* CCServer::GetWebViewSetting(void*, void (*)(void*, ccWVSettingCheckResult, char const*, int),
   void*) */

void CCServer::GetWebViewSetting
               (void *param_1,_func_void_void_ptr_ccWVSettingCheckResult_char_ptr_int *param_2,
               void *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  
  iVar1 = DAT_002b7498;
  puVar5 = (undefined4 *)(&stack0xffffffec + DAT_002b7498);
  *(_func_void_void_ptr_ccWVSettingCheckResult_char_ptr_int **)(&stack0xffffffec + DAT_002b7498) =
       param_2;
  piVar3 = *(int **)(DAT_002b74a0 + 0x2b7420);
  *(void **)(&stack0xfffffff0 + DAT_002b7498) = param_3;
  pcVar4 = (char *)(DAT_002b749c + 0x2b742c);
  *(int *)(&stack0x000003f8 + DAT_002b7498) = *piVar3;
  L_PrintLog(pcVar4,(char *)(DAT_002b74a4 + 0x2b7434));
  if (*(int *)((int)param_1 + 0x3c0) == 0) {
    L_PrintLog(pcVar4,(char *)(DAT_002b74a8 + 0x2b7448));
    snprintf(&stack0xfffffff8 + iVar1,0x400,(char *)(DAT_002b74ac + 0x2b7454));
    *(undefined4 *)((int)param_1 + 0x3cc) = *(undefined4 *)(&stack0xfffffff0 + iVar1);
    *(undefined4 *)((int)param_1 + 0x3c8) = *puVar5;
    L_PrintLog(pcVar4,&stack0xfffffff8 + iVar1);
    uVar2 = CCUrlConnection::NewRequest
                      ((char *)(DAT_002b74b0 + 0x2b747a),&stack0xfffffff8 + iVar1,0x33,param_1);
    *(undefined4 *)((int)param_1 + 0x3c0) = uVar2;
  }
  if (*(int *)(&stack0x000003f8 + iVar1) != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


