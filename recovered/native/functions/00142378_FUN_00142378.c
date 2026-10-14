/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00142378 FUN_00142378 */

void FUN_00142378(char *param_1,char *param_2)

{
  int *in_stack_00000024;
  int in_stack_000000dc;
  
  L_PrintLog(param_1,param_2);
  if (in_stack_000000dc != *in_stack_00000024) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


