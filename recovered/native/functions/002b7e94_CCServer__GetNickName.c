/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b7e94 CCServer::GetNickName */

/* CCServer::GetNickName(void*) */

void CCServer::GetNickName(void *param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  iVar1 = DAT_002b7fa0;
  puVar8 = (undefined4 *)(&stack0xffffffec + DAT_002b7fa0);
  iVar4 = DAT_002b7fac + 0x2b7ea8;
  puVar6 = *(undefined4 **)(iVar4 + DAT_002b7fa4);
  pcVar5 = (char *)(DAT_002b7fb0 + 0x2b7eac);
  *(undefined4 *)(&stack0xffffffec + DAT_002b7fa8 + DAT_002b7fa0) = *puVar6;
  L_PrintLog(pcVar5,(char *)(DAT_002b7fb4 + 0x2b7eb8));
  iVar3 = *(int *)((int)param_1 + 0x408);
  *(undefined4 **)(&stack0x00000008 + iVar1) = puVar6;
  uVar7 = 0;
  if (iVar3 == 0) {
    pcVar2 = (char *)(DAT_002b7fbc + 0x2b7ed4);
    **(undefined1 **)(iVar4 + DAT_002b7fb8) = 0;
    L_PrintLog(pcVar5,pcVar2);
    uVar7 = javaGetIMEI();
    *(undefined4 *)(&stack0x00000000 + iVar1) = uVar7;
    uVar7 = javaGetAndroidID();
    *(undefined4 *)(&stack0x00000004 + iVar1) = uVar7;
    uVar7 = CCGetDeviceID();
    *puVar8 = *(undefined4 *)(&stack0x00000004 + iVar1);
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar7;
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = 0x7c;
    snprintf(&stack0x00000110 + iVar1,0x400,(char *)(DAT_002b7fc0 + 0x2b7ef6),
             *(undefined4 *)(&stack0x00000000 + iVar1));
    uVar7 = CCUrlConnection::NewRequest
                      ((char *)(DAT_002b7fc4 + 0x2b7f0e),&stack0x00000110 + iVar1,0x39,param_1);
    *(undefined4 *)((int)param_1 + 0x408) = uVar7;
    sprintf(&stack0x00000010 + iVar1,(char *)(DAT_002b7fc8 + 0x2b7f20),&stack0x00000110 + iVar1);
    L_PrintLog(pcVar5,&stack0x00000010 + iVar1);
    memset(&stack0x00000010 + iVar1,0,0x100);
    sprintf(&stack0x00000010 + iVar1,(char *)(DAT_002b7fd0 + 0x2b7f44),
            *(undefined4 *)(iVar4 + DAT_002b7fcc),*(undefined4 *)(iVar4 + DAT_002b7fd4));
    L_PrintLog(pcVar5,&stack0x00000010 + iVar1);
    memset(&stack0x00000010 + iVar1,0,0x100);
    sprintf(&stack0x00000010 + iVar1,(char *)(DAT_002b7fdc + 0x2b7f6a),
            *(undefined4 *)(iVar4 + DAT_002b7fd8),*(undefined4 *)(iVar4 + DAT_002b7fe0));
    L_PrintLog(pcVar5,&stack0x00000010 + iVar1);
    L_PrintLog(pcVar5,(char *)(DAT_002b7fe4 + 0x2b7f7e));
    uVar7 = *(undefined4 *)((int)param_1 + 0x408);
  }
  if (*(int *)(&stack0xffffffec + DAT_002b7fa8 + iVar1) != **(int **)(&stack0x00000008 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


