/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b5a6c Java_com_capcom_zombiecafeandroidJP_URLManager_NewRequestServerCallback */

void Java_com_capcom_zombiecafeandroidJP_URLManager_NewRequestServerCallback
               (int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5,
               int param_6)

{
  int iVar1;
  void *__s;
  uchar *puVar2;
  char *pcVar3;
  char *pcVar4;
  int *piVar5;
  undefined1 uStack_11d;
  char acStack_11c [256];
  int local_1c;
  
  piVar5 = *(int **)(DAT_000b5b30 + 0xb5a78);
  local_1c = *piVar5;
  pcVar3 = (char *)(DAT_000b5b38 + 0xb5a8a);
  pcVar4 = (char *)(DAT_000b5b3c + 0xb5a8c);
  sprintf(acStack_11c,(char *)(DAT_000b5b34 + 0xb5a86),param_5);
  L_PrintLog(pcVar3,pcVar4);
  L_PrintLog((char *)(DAT_000b5b40 + 0xb5aa4),acStack_11c);
  L_PrintLog(pcVar3,pcVar4);
  if (param_5 == 0) {
    puVar2 = (uchar *)operator_new__(1);
    iVar1 = DAT_000b5b4c;
    *puVar2 = '\0';
    pcVar3 = (char *)(iVar1 + 0xb5b04);
    pcVar4 = (char *)(DAT_000b5b50 + 0xb5b06);
  }
  else {
    __s = operator_new__(param_5 + 4U);
    memset(__s,0,param_5 + 4U);
    puVar2 = (uchar *)(**(code **)(*param_1 + 0x2e0))(param_1,param_4,&uStack_11d);
    sprintf(acStack_11c,(char *)(DAT_000b5b44 + 0xb5ae2),param_5);
    pcVar3 = acStack_11c;
    pcVar4 = (char *)(DAT_000b5b48 + 0xb5aee);
  }
  L_PrintLog(pcVar4,pcVar3);
  ZombieCafe::NewRequestServerCallback
            (*(ZombieCafe **)(*(int *)(DAT_000b5b54 + 0xb5b1a) + 4),param_3,puVar2,param_5,param_6);
  if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


