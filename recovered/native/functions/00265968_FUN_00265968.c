/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00265968 FUN_00265968 */

/* WARNING: Removing unreachable block (ram,0x00265986) */

void FUN_00265968(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = sqlite3_context_db_handle();
  lVar2 = sqlite3_value_int64(*param_3);
  if (*(int *)(iVar1 + 0x4c) < lVar2) {
    sqlite3_result_error_toobig(param_1);
  }
  else {
    sqlite3_result_zeroblob(param_1,(int)lVar2);
  }
  return;
}


