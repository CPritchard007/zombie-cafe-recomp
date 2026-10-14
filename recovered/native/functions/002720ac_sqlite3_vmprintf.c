/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002720ac sqlite3_vmprintf */

void sqlite3_vmprintf(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_78;
  undefined1 *local_74;
  undefined1 *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 auStack_5c [72];
  int local_14;
  
  piVar3 = *(int **)(DAT_00272108 + 0x2720b8);
  local_14 = *piVar3;
  iVar1 = sqlite3_initialize();
  uVar2 = 0;
  if (iVar1 == 0) {
    local_74 = auStack_5c;
    local_68 = 0x46;
    local_5e = 0;
    local_64 = DAT_0027210c;
    local_60 = 0;
    local_5f = 2;
    local_78 = 0;
    local_6c = 0;
    local_70 = local_74;
    FUN_002675a8(&local_78,0,param_1,param_2);
    uVar2 = FUN_002684c4(&local_78);
  }
  if (local_14 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


