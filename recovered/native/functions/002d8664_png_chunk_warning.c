/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d8664 png_chunk_warning */

void png_chunk_warning(int param_1,undefined1 *param_2)

{
  int *piVar1;
  undefined1 auStack_ec [216];
  int local_14;
  
  piVar1 = *(int **)(DAT_002d8698 + 0x2d8670);
  local_14 = *piVar1;
  if (param_1 != 0) {
    FUN_002d8314(param_1,auStack_ec,param_2);
    param_2 = auStack_ec;
  }
  png_warning(param_1,param_2);
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


