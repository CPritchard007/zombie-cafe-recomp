/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d9934 getUpdateBonusClass::getUpdateBonusFail */

/* getUpdateBonusClass::getUpdateBonusFail(void*, ccServerFailureCode) */

void getUpdateBonusClass::getUpdateBonusFail(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  char acStack_94 [128];
  int local_14;
  
  piVar2 = *(int **)(DAT_001d997c + 0x1d9940);
  local_14 = *piVar2;
  puVar1 = (undefined1 *)getInstance();
  snprintf(acStack_94,0x80,(char *)(DAT_001d9980 + 0x1d9952),param_2);
  L_PrintLog((char *)(DAT_001d9984 + 0x1d9960),acStack_94);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
  }
  if (local_14 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


