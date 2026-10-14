/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b5f6c Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_ConfirmToAliveNative */

void Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_ConfirmToAliveNative
               (undefined4 param_1,undefined4 param_2,int param_3,int param_4,char param_5)

{
  int *piVar1;
  char acStack_9c [128];
  int local_1c;
  
  piVar1 = *(int **)(DAT_000b5fc0 + 0xb5f78);
  local_1c = *piVar1;
  sprintf(acStack_9c,(char *)(DAT_000b5fc4 + 0xb5f86),param_4);
  L_PrintLog((char *)(DAT_000b5fc8 + 0xb5f96),acStack_9c);
  ZombieCafe::ConfirmToAliveNative
            (*(ZombieCafe **)(*(int *)(DAT_000b5fcc + 0xb5faa) + 4),param_3,param_4,
             (bool)('\x01' - (param_5 == '\0')));
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


