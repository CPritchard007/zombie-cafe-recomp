/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00265ddc FUN_00265ddc */

void FUN_00265ddc(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = sqlite3_aggregate_context(param_1,0);
  puVar1 = (undefined4 *)uVar4;
  uVar2 = 0;
  uVar3 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
  }
  sqlite3_result_int64(param_1,(int)((ulonglong)uVar4 >> 0x20),uVar2,uVar3);
  return;
}


