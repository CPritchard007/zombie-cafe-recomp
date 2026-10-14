/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c2094 CCMarketingView_ShowPage */

void CCMarketingView_ShowPage(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  char acStack_10c [256];
  int local_c;
  
  piVar1 = *(int **)(DAT_002c20c0 + 0x2c20a0);
  local_c = *piVar1;
  sprintf(acStack_10c,(char *)(DAT_002c20c4 + 0x2c20a6),param_2);
  if (local_c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(0);
  }
  return;
}


