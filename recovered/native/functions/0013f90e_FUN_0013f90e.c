/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013f90e FUN_0013f90e */

void FUN_0013f90e(void)

{
  int *in_stack_0000003c;
  
  if (*(int *)(&stack0x00000000 + DAT_0013f928) != *in_stack_0000003c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


