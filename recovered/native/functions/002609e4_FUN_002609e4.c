/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002609e4 FUN_002609e4 */

void FUN_002609e4(undefined4 param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined1 auStack_20 [12];
  int local_14;
  
  piVar2 = *(int **)(DAT_00260a14 + 0x2609f0);
  local_14 = *piVar2;
  uVar1 = FUN_00260960(auStack_20);
  FUN_0025e2c8(param_1,auStack_20,uVar1);
  if (local_14 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


