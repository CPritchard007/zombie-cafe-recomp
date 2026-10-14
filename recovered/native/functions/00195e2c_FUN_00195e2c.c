/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00195e2c FUN_00195e2c */

void FUN_00195e2c(void)

{
  int *in_stack_00000038;
  int in_stack_0000022c;
  
  if (in_stack_0000022c != *in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


