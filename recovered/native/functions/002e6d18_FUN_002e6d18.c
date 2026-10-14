/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e6d18 FUN_002e6d18 */

void FUN_002e6d18(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  int local_1c;
  
  piVar1 = *(int **)(DAT_002e6d7c + 0x2e6d24);
  local_1c = *piVar1;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 900) = 0x22;
    png_save_uint_32(auStack_24,param_3);
    png_save_uint_32(auStack_20,param_2);
    png_write_data(param_1,auStack_24,8);
    *(undefined4 *)(param_1 + 0x1dc) = param_2;
    png_reset_crc(param_1);
    png_calculate_crc(param_1,auStack_20,4);
    *(undefined4 *)(param_1 + 900) = 0x42;
  }
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


