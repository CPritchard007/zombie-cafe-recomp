/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026b16c sqlite3_overload_function */

undefined4 sqlite3_overload_function(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0025b154(param_2);
  sqlite3_mutex_enter(*(undefined4 *)(param_1 + 0xc));
  iVar2 = FUN_00262898(param_1,param_2,uVar1,param_3,1,0);
  uVar1 = 0;
  if (iVar2 == 0) {
    uVar1 = FUN_0026affc(param_1,param_2,param_3,1,0,DAT_0026b1d0 + 0x26b1a8,0,0,0);
  }
  uVar1 = FUN_002685e0(param_1,uVar1);
  sqlite3_mutex_leave(*(undefined4 *)(param_1 + 0xc));
  return uVar1;
}


