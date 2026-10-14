/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00185256 FUN_00185256 */

void FUN_00185256(void)

{
  int *in_stack_00000044;
  int in_stack_000002ac;
  
  L_PrintLog((char *)(DAT_00185304 + 0x18525e),(char *)(DAT_00185308 + 0x185260));
  if (in_stack_000002ac != *in_stack_00000044) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


