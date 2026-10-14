/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000d2f52 FUN_000d2f52 */

void FUN_000d2f52(void)

{
  int *in_stack_00000024;
  
  if (*(int *)(&stack0x00000000 + DAT_000d3044) != *in_stack_00000024) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


