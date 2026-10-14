/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00184424 FUN_00184424 */

void FUN_00184424(void)

{
  int iVar1;
  CafeObject *unaff_r4;
  int unaff_r5;
  int unaff_r7;
  
  Cafe::addCafeObject(*(Cafe **)(unaff_r5 + 0x78),unaff_r4);
  unaff_r4[0x84] = (CafeObject)0x1;
  *(undefined1 *)(*(int *)(unaff_r4 + 0x8c) + 0x44) = 1;
  iVar1 = __aeabi_fcmpgt(*(undefined4 *)(unaff_r7 + 0x40),0);
  if (iVar1 == 0) {
    FUN_00183ae6();
  }
  FUN_00183ade();
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


