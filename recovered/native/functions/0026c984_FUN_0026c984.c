/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026c984 FUN_0026c984 */

void FUN_0026c984(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0026c800(*param_3,param_3[1],*(undefined4 *)(param_1 + 0x34),param_4,param_4);
  if (iVar1 != 0) {
    sqlite3_result_value(param_1,*param_3);
  }
  return;
}


