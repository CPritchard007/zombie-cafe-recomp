/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b59e0 Java_com_capcom_zombiecafeandroidJP_NetworkTaskPost_NewRequestServerCallback */

void Java_com_capcom_zombiecafeandroidJP_NetworkTaskPost_NewRequestServerCallback
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  char *pcVar1;
  char *pcVar2;
  int *piVar3;
  undefined1 uStack_11d;
  char acStack_11c [256];
  int local_1c;
  
  piVar3 = *(int **)(DAT_000b5a58 + 0xb59ec);
  local_1c = *piVar3;
  pcVar1 = (char *)(DAT_000b5a60 + 0xb59fc);
  pcVar2 = (char *)(DAT_000b5a64 + 0xb59fe);
  sprintf(acStack_11c,(char *)(DAT_000b5a5c + 0xb59fa),param_5);
  L_PrintLog(pcVar1,pcVar2);
  L_PrintLog((char *)(DAT_000b5a68 + 0xb5a16),acStack_11c);
  L_PrintLog(pcVar1,pcVar2);
  if (param_5 == 0) {
    operator_new__(1);
  }
  else {
    operator_new__(param_5 + 1);
    (**(code **)(*param_1 + 0x2e0))(param_1,param_4,&uStack_11d);
  }
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


