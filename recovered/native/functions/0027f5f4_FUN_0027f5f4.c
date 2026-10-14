/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027f5f4 FUN_0027f5f4 */

void FUN_0027f5f4(void)

{
  undefined4 unaff_r4;
  int in_stack_00000058;
  int *in_stack_0000007c;
  int in_stack_00000134;
  
  if (in_stack_00000058 != 0) {
    FUN_0025f6b8(in_stack_00000058);
  }
  if (in_stack_00000134 != *in_stack_0000007c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(unaff_r4);
  }
  return;
}


