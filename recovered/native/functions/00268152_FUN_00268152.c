/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00268152 FUN_00268152 */

void FUN_00268152(void)

{
  undefined4 uStack00000018;
  undefined4 uStack0000001c;
  int *in_stack_0000006c;
  int in_stack_000000bc;
  
  uStack00000018 = DAT_00268178;
  uStack0000001c = DAT_0026817c;
  FUN_00267846();
  if (in_stack_000000bc != *in_stack_0000006c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


