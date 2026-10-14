/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015cd82 FUN_0015cd82 */

void FUN_0015cd82(void)

{
  int *in_stack_0000002c;
  
  FUN_0015c47e();
  if (*(int *)(&stack0x00000000 + DAT_0015cdcc) != *in_stack_0000002c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


