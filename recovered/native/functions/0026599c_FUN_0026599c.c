/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026599c FUN_0026599c */

int FUN_0026599c(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = sqlite3_context_db_handle();
  iVar2 = (int)*(uint *)(iVar1 + 0x4c) >> 0x1f;
  if ((iVar2 < param_4) || ((param_4 == iVar2 && (*(uint *)(iVar1 + 0x4c) < param_3)))) {
    sqlite3_result_error_toobig(param_1);
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0025edc8(param_3);
    if (iVar1 == 0) {
      sqlite3_result_error_nomem(param_1);
    }
  }
  return iVar1;
}


