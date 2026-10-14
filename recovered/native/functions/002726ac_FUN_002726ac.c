/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002726ac FUN_002726ac */

void FUN_002726ac(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_1c [2];
  
  iVar1 = sqlite3_value_text(*param_3);
  uVar2 = sqlite3_context_db_handle(param_1);
  uVar3 = 0;
  local_1c[0] = 0;
  if (param_2 == 2) {
    uVar3 = sqlite3_value_text(param_3[1]);
  }
  if ((iVar1 != 0) && (iVar1 = sqlite3_load_extension(uVar2,iVar1,uVar3,local_1c), iVar1 != 0)) {
    sqlite3_result_error(param_1,local_1c[0],0xffffffff);
    sqlite3_free(local_1c[0]);
  }
  return;
}


