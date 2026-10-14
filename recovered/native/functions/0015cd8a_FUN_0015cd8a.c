/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015cd8a FUN_0015cd8a */

void FUN_0015cd8a(void)

{
  int *in_stack_0000002c;
  
  if (*(int *)(&stack0x00000000 + DAT_0015cdcc) != *in_stack_0000002c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


