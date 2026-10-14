/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e7e08 png_write_pHYs */

void png_write_pHYs(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 local_20;
  int local_1c;
  
  piVar1 = *(int **)(DAT_002e7e5c + 0x2e7e14);
  local_1c = *piVar1;
  if (1 < param_4) {
    png_warning(param_1,DAT_002e7e60 + 0x2e7e28);
  }
  png_save_uint_32(auStack_28,param_2);
  png_save_uint_32(auStack_24,param_3);
  local_20 = (undefined1)param_4;
  FUN_002e6ea0(param_1,DAT_002e7e64,auStack_28,9);
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


