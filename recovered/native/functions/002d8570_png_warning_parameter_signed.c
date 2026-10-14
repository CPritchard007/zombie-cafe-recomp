/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d8570 png_warning_parameter_signed */

void png_warning_parameter_signed
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_34 [24];
  int local_1c [2];
  
  piVar3 = *(int **)(DAT_002d85bc + 0x2d857c);
  local_1c[0] = *piVar3;
  iVar2 = param_4;
  if (param_4 < 0) {
    iVar2 = -param_4;
  }
  puVar1 = (undefined1 *)png_format_number(auStack_34,local_1c,param_3,iVar2);
  if ((param_4 < 0) && (auStack_34 < puVar1)) {
    puVar1[-1] = 0x2d;
  }
  png_warning_parameter(param_1,param_2);
  if (local_1c[0] != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


