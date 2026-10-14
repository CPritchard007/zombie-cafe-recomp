/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b60f4 Java_com_capcom_zombiecafeandroidJP_SoundManager_setEnabled */

void Java_com_capcom_zombiecafeandroidJP_SoundManager_setEnabled
               (undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  ZombieCafe *this;
  char acStack_114 [256];
  int local_14;
  
  piVar1 = *(int **)(DAT_000b6140 + 0xb6100);
  local_14 = *piVar1;
  if (*(int *)(DAT_000b6144 + 0xb6112) != 0) {
    this = *(ZombieCafe **)(*(int *)(DAT_000b6144 + 0xb6112) + 4);
    sprintf(acStack_114,(char *)(DAT_000b6148 + 0xb6118));
    L_PrintLog((char *)(DAT_000b614c + 0xb6122),acStack_114);
    ZombieCafe::setSoundEnabled(this,(bool)('\x01' - (param_3 == 0)));
  }
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


