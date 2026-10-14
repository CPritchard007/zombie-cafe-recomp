/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00129702 FUN_00129702 */

void FUN_00129702(void)

{
  int *in_stack_00000014;
  int in_stack_0000012c;
  
  if (in_stack_0000012c != *in_stack_00000014) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


