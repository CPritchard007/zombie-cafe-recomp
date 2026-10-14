/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c205c L_RecordAppMessage */

/* L_RecordAppMessage(CMarketingView*, char const*) */

void L_RecordAppMessage(CMarketingView *param_1,char *param_2)

{
  int *piVar1;
  char acStack_110 [260];
  int local_c;
  
  piVar1 = *(int **)(DAT_002c208c + 0x2c2068);
  local_c = *piVar1;
  CCGetWritableFilePath(acStack_110,0x104,(char *)(DAT_002c2090 + 0x2c206e));
  if (local_c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


