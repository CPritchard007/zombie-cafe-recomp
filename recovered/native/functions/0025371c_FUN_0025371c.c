/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025371c FUN_0025371c */

void FUN_0025371c(void)

{
  short sVar1;
  int unaff_r6;
  int *in_stack_0000009c;
  
  sVar1 = *(short *)(unaff_r6 + 0x418) + 1;
  *(short *)(unaff_r6 + 0x418) = sVar1;
  if (*(int *)(&stack0x00000000 + DAT_00253864) == *in_stack_0000009c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0xc < sVar1);
}


