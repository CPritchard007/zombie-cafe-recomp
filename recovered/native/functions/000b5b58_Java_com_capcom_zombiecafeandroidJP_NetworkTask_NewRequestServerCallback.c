/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b5b58 Java_com_capcom_zombiecafeandroidJP_NetworkTask_NewRequestServerCallback */

void Java_com_capcom_zombiecafeandroidJP_NetworkTask_NewRequestServerCallback
               (int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5,
               int param_6)

{
  uchar *puVar1;
  char *pcVar2;
  char *pcVar3;
  int *piVar4;
  undefined1 uStack_11d;
  char acStack_11c [256];
  int local_1c;
  
  piVar4 = *(int **)(DAT_000b5c0c + 0xb5b64);
  local_1c = *piVar4;
  pcVar2 = (char *)(DAT_000b5c14 + 0xb5b76);
  pcVar3 = (char *)(DAT_000b5c18 + 0xb5b78);
  sprintf(acStack_11c,(char *)(DAT_000b5c10 + 0xb5b72),param_5);
  L_PrintLog(pcVar2,pcVar3);
  L_PrintLog((char *)(DAT_000b5c1c + 0xb5b90),acStack_11c);
  L_PrintLog(pcVar2,pcVar3);
  if (param_5 == 0) {
    puVar1 = (uchar *)operator_new__(1);
    pcVar2 = (char *)(DAT_000b5c28 + 0xb5be0);
    pcVar3 = (char *)(DAT_000b5c2c + 0xb5be2);
  }
  else {
    operator_new__(param_5 + 1);
    puVar1 = (uchar *)(**(code **)(*param_1 + 0x2e0))(param_1,param_4,&uStack_11d);
    sprintf(acStack_11c,(char *)(DAT_000b5c20 + 0xb5bc4),param_5);
    pcVar2 = acStack_11c;
    pcVar3 = (char *)(DAT_000b5c24 + 0xb5bd0);
  }
  L_PrintLog(pcVar3,pcVar2);
  ZombieCafe::NewRequestServerCallback
            (*(ZombieCafe **)(*(int *)(DAT_000b5c30 + 0xb5bf6) + 4),param_3,puVar1,param_5,param_6);
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


