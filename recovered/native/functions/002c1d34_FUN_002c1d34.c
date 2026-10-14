/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c1d34 FUN_002c1d34 */

void FUN_002c1d34(int param_1)

{
  int *piVar1;
  char acStack_110 [260];
  int local_c;
  
  piVar1 = *(int **)(DAT_002c1d64 + 0x2c1d40);
  local_c = *piVar1;
  snprintf(acStack_110,0x104,(char *)(DAT_002c1d68 + 0x2c1d4a),*(undefined4 *)(param_1 + 0xa8));
  if (local_c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


