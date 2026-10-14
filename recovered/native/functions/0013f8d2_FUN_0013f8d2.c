/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013f8d2 FUN_0013f8d2 */

void FUN_0013f8d2(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int unaff_r4;
  int unaff_r6;
  int in_stack_00000020;
  int *in_stack_0000003c;
  
  if (param_2 < 0x2e) {
    FUN_0013ef28();
  }
  if (*(char *)(*(int *)(param_4 + 0x4e8) +
                (uint)**(ushort **)
                        (in_stack_00000020 * 4 + *(int *)(*(int *)(unaff_r4 + unaff_r6) + 8)) * 0x1c
               + 0x18) == '\x04') {
    FUN_0013ef76();
  }
  if (*(int *)(unaff_r4 + 0x218) != 0) {
    FUN_0013efb8();
  }
  FUN_0013efc4();
  if (*(int *)(&stack0x00000000 + DAT_0013f928) != *in_stack_0000003c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


