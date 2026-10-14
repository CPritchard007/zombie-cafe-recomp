/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026afc2 sqlite3_create_collation */

undefined8
sqlite3_create_collation
          (int param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = param_3;
  sqlite3_mutex_enter(*(undefined4 *)(param_1 + 0xc));
  uVar1 = FUN_0026ae10(param_1,param_2,param_3 & 0xff,param_4,param_5,0,uVar2);
  uVar1 = FUN_002685e0(param_1,uVar1);
  sqlite3_mutex_leave(*(undefined4 *)(param_1 + 0xc));
  return CONCAT44(param_5,uVar1);
}


