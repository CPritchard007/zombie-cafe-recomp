/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026f098 FUN_0026f098 */

void FUN_0026f098(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = sqlite3_value_text(*param_3);
  if (iVar1 != 0) {
    uVar2 = sqlite3_compileoption_used();
    sqlite3_result_int(param_1,uVar2);
  }
  return;
}


