/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ba0fc CCServer::GetServerTime */

/* CCServer::GetServerTime(void*, void*, int) */

void CCServer::GetServerTime(void *param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  iVar2 = DAT_002ba1cc;
  iVar1 = DAT_002ba1b8;
  puVar5 = (undefined4 *)(&stack0xffffffec + DAT_002ba1b8);
  piVar6 = (int *)(&stack0xffffffec + DAT_002ba1b8);
  *(void **)(&stack0xfffffff8 + DAT_002ba1b8) = param_2;
  piVar3 = *(int **)(DAT_002ba1c4 + 0x2ba110);
  pcVar4 = (char *)(DAT_002ba1c0 + 0x2ba116);
  *(int *)(&stack0xffffffec + DAT_002ba1bc + DAT_002ba1b8) = *piVar3;
  L_PrintLog(pcVar4,(char *)(DAT_002ba1c8 + 0x2ba11c));
  L_PrintLog((char *)(iVar2 + 0x2ba12a),(char *)(DAT_002ba1d0 + 0x2ba12e));
  L_PrintLog((char *)(iVar2 + 0x2ba12a),(char *)(DAT_002ba1d4 + 0x2ba13a));
  snprintf(&stack0x00000100 + iVar1,0x400,(char *)(DAT_002ba1d8 + 0x2ba148),
           (char *)((int)param_1 + 0x18));
  iVar2 = DAT_002ba1dc;
  *(undefined4 *)((int)param_1 + 0x38c) = *(undefined4 *)(&stack0xfffffff8 + iVar1);
  sprintf(&stack0x00000000 + iVar1,(char *)(iVar2 + 0x2ba15c),&stack0x00000100 + iVar1);
  L_PrintLog(pcVar4,&stack0x00000000 + iVar1);
  iVar2 = CCUrlConnection::NewRequest
                    ((char *)((int)param_1 + 0x18),&stack0x00000100 + iVar1,7,param_1);
  *(int *)((int)param_1 + 0x37c) = iVar2;
  if (iVar2 == 0) {
    *puVar5 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = 7;
    Android_ServerCallback
              (*(void **)(&stack0xfffffff8 + iVar1),param_1,false,(uchar *)0x0,*piVar6,
               *(int *)(&stack0xfffffff0 + iVar1));
  }
  L_PrintLog((char *)(DAT_002ba1e0 + 0x2ba19a),(char *)(DAT_002ba1e4 + 0x2ba19c));
  if (*(int *)(&stack0xffffffec + DAT_002ba1bc + iVar1) != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*(undefined4 *)((int)param_1 + 0x37c));
  }
  return;
}


