/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00265e2c FUN_00265e2c */

void FUN_00265e2c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined4 *)sqlite3_aggregate_context(param_1,0,param_3,param_4,param_4);
  if (puVar1 != (undefined4 *)0x0) {
    if ((0 < (int)puVar1[5]) || ((puVar1[5] == 0 && (puVar1[4] != 0)))) {
      uVar3 = __floatdidf();
      uVar3 = __divdf3(*puVar1,puVar1[1],(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
      uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
      sqlite3_result_double(param_1,uVar2,(int)uVar3,uVar2);
    }
  }
  return;
}


