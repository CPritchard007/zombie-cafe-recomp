/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00263a20 sqlite3_result_double */

void sqlite3_result_double(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0025b12a(param_3,param_4,param_3,param_4,param_4);
  if (iVar1 == 0) {
    FUN_00263730(param_1 + 8);
    *(undefined2 *)(param_1 + 0x24) = 8;
    *(undefined4 *)(param_1 + 0x10) = param_3;
    *(undefined4 *)(param_1 + 0x14) = param_4;
    *(undefined1 *)(param_1 + 0x26) = 2;
  }
  else {
    FUN_0025fc70(param_1 + 8);
  }
  return;
}


