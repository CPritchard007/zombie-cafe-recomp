/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002eb21c FUN_002eb21c */

undefined4 FUN_002eb21c(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0xff) {
    return 0;
  }
  if (0xc < (param_2 & 0xf)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* WARNING: Could not emulate address calculation at 0x002eb240 */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(*(int *)((param_2 & 0xf) * 4 + DAT_002eb300 + 0x2eb242) +
                    DAT_002eb300 + 0x2eb242))();
  return uVar1;
}


