/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00265948 sqlite3_result_error_toobig */

undefined8 sqlite3_result_error_toobig(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_00265964;
  *(undefined4 *)(param_1 + 0x38) = 0x12;
  uVar2 = 0;
  FUN_0026578c(param_1 + 8,iVar1 + 0x26595c,0xffffffff,1,0,param_2,param_3);
  return CONCAT44(param_2,uVar2);
}


