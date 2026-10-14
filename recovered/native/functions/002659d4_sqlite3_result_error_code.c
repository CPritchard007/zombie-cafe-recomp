/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002659d4 sqlite3_result_error_code */

undefined8 sqlite3_result_error_code(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x38) = param_2;
  iVar2 = param_1;
  if ((*(ushort *)(param_1 + 0x24) & 1) != 0) {
    uVar1 = FUN_0026311c(param_2);
    iVar2 = 0;
    FUN_0026578c(param_1 + 8,uVar1,0xffffffff,1,0,param_2,param_3);
  }
  return CONCAT44(param_2,iVar2);
}


