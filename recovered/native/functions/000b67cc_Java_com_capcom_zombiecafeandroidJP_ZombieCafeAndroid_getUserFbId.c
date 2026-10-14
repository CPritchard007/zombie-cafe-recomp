/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b67cc Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_getUserFbId */

void Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_getUserFbId(int *param_1)

{
  char *__src;
  int *piVar1;
  char acStack_114 [256];
  int local_14;
  
  piVar1 = *(int **)(DAT_000b6810 + 0xb67d8);
  local_14 = *piVar1;
  __src = (char *)ZombieCafe::getFbId(*(ZombieCafe **)(*(int *)(DAT_000b6814 + 0xb67ea) + 4));
  strcpy(acStack_114,__src);
  (**(code **)(*param_1 + 0x29c))(param_1,acStack_114);
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


