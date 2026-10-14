/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012ff22 FUN_0012ff22 */

void FUN_0012ff22(void)

{
  int *in_stack_00000034;
  
  if (*(int *)(&stack0x00000000 + DAT_0012ff48) != *in_stack_00000034) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


