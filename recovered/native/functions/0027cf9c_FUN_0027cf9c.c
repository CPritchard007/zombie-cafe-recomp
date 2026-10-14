/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027cf9c FUN_0027cf9c */

void FUN_0027cf9c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 local_c8;
  int local_b8;
  undefined1 auStack_b4 [152];
  int local_1c;
  
  piVar2 = *(int **)(DAT_0027d020 + 0x27cfac);
  local_1c = *piVar2;
  local_b8 = 0;
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0025ef5a(*(undefined4 *)(param_1 + 0x10),auStack_b4,0x96,&local_b8);
    local_c8 = 7;
    if (iVar1 == 0) goto LAB_0027d00a;
    FUN_00260c3a(*(undefined4 *)(param_1 + 0x10),param_3,param_2,iVar1);
  }
  local_c8 = FUN_0027cd22(param_1,iVar1,param_3,param_4,param_5,param_6);
  if (local_b8 != 0) {
    FUN_0025fbda(**(undefined4 **)(param_1 + 0x10));
  }
LAB_0027d00a:
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_c8);
  }
  return;
}


