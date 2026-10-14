/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d8538 png_warning_parameter_unsigned */

void png_warning_parameter_unsigned(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined1 auStack_2c [24];
  int local_14;
  
  piVar2 = *(int **)(DAT_002d856c + 0x2d8544);
  local_14 = *piVar2;
  uVar1 = png_format_number(auStack_2c,&local_14);
  png_warning_parameter(param_1,param_2,uVar1);
  if (local_14 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


