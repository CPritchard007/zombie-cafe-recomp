/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026815a FUN_0026815a */

void FUN_0026815a(void)

{
  int *in_stack_0000006c;
  int in_stack_000000bc;
  
  FUN_00267846();
  if (in_stack_000000bc != *in_stack_0000006c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


