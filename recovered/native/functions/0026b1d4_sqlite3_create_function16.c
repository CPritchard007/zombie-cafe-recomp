/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026b1d4 sqlite3_create_function16 */

undefined4
sqlite3_create_function16
          (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  sqlite3_mutex_enter(*(undefined4 *)(param_1 + 0xc));
  uVar1 = FUN_00265d50(param_1,param_2,0xffffffff,
                       3 - (uint)(*(char *)(DAT_0026b244 + 0x26b230) != '\0'));
  uVar2 = FUN_0026affc(param_1,uVar1,param_3,param_4,param_5,param_6,param_7,param_8,0);
  FUN_0025fbda(param_1,uVar1);
  uVar1 = FUN_002685e0(param_1,uVar2);
  sqlite3_mutex_leave(*(undefined4 *)(param_1 + 0xc));
  return uVar1;
}


