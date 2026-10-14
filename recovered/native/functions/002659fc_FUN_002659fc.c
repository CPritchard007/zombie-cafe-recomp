/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002659fc FUN_002659fc */

undefined8
FUN_002659fc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  
  iVar1 = FUN_0026578c(param_1 + 8);
  if (iVar1 == 0x12) {
    sqlite3_result_error_toobig(param_1);
  }
  return CONCAT44(param_2,param_5);
}


