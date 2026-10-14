/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027f5d8 FUN_0027f5d8 */

void FUN_0027f5d8(void)

{
  int unaff_r4;
  int unaff_r6;
  int in_stack_00000040;
  int in_stack_00000058;
  int *in_stack_0000007c;
  int in_stack_00000134;
  
  *(undefined1 *)(unaff_r6 + 1) = 0;
  FUN_00274a30(unaff_r6);
  *(short *)(in_stack_00000040 + 0x5e) = *(short *)(in_stack_00000040 + 0x5e) + -1;
  if (unaff_r4 == 0) {
    FUN_0027ea54();
  }
  if (in_stack_00000058 != 0) {
    FUN_0025f6b8(in_stack_00000058);
  }
  if (in_stack_00000134 != *in_stack_0000007c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(unaff_r4);
  }
  return;
}


