/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024457c FUN_0024457c */

void FUN_0024457c(void)

{
  int iVar1;
  undefined4 unaff_r4;
  int *in_stack_00000080;
  int in_stack_000002dc;
  
  iVar1 = CapcomApp::getInstance();
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x728) = unaff_r4;
  FUN_00242f94();
  if (in_stack_000002dc != *in_stack_00000080) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


