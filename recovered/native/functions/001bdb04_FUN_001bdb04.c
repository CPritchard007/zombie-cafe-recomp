/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001bdb04 FUN_001bdb04 */

void FUN_001bdb04(void)

{
  int unaff_r5;
  undefined4 uStack00000020;
  
  uStack00000020 = *(undefined4 *)(**(int **)(unaff_r5 + 0x54) + 0x2c);
  String::String((String *)&stack0x0000003c,(char *)(DAT_001bdb4c + 0x1bdb10));
  SmDev();
  operator_new(0xc0);
  FUN_001bce28();
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


