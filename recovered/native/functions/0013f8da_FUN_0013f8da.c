/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013f8da FUN_0013f8da */

void FUN_0013f8da(void)

{
  int in_r3;
  int unaff_r4;
  int unaff_r6;
  int in_stack_00000020;
  int *in_stack_0000003c;
  
  if (*(char *)(*(int *)(in_r3 + 0x4e8) +
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


