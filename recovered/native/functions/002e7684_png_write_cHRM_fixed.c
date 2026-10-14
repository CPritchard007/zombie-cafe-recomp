/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e7684 png_write_cHRM_fixed */

void png_write_cHRM_fixed(undefined4 param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  int local_14;
  
  piVar1 = *(int **)(DAT_002e76f4 + 0x2e7690);
  local_14 = *piVar1;
  png_save_int_32(auStack_34,param_2[6]);
  png_save_int_32(auStack_30,param_2[7]);
  png_save_int_32(auStack_2c,*param_2);
  png_save_int_32(auStack_28,param_2[1]);
  png_save_int_32(auStack_24,param_2[2]);
  png_save_int_32(auStack_20,param_2[3]);
  png_save_int_32(auStack_1c,param_2[4]);
  png_save_int_32(auStack_18,param_2[5]);
  FUN_002e6ea0(param_1,DAT_002e76f8,auStack_34,0x20);
  if (local_14 != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


