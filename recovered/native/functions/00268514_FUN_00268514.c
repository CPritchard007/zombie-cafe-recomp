/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00268514 FUN_00268514 */

void FUN_00268514(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int local_80;
  undefined1 *local_7c;
  undefined1 *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  char local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 auStack_64 [72];
  int local_1c;
  
  piVar1 = *(int **)(DAT_00268574 + 0x268520);
  local_6c = *(undefined4 *)(param_1 + 0x4c);
  local_1c = *piVar1;
  local_7c = auStack_64;
  local_66 = 0;
  local_68 = '\0';
  local_74 = 0;
  local_70 = 0x46;
  local_67 = 1;
  local_80 = param_1;
  local_78 = local_7c;
  FUN_002675a8(&local_80,1,param_2,param_3);
  FUN_002684c4(&local_80);
  if (local_68 != '\0') {
    *(undefined1 *)(param_1 + 0x36) = 1;
  }
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


