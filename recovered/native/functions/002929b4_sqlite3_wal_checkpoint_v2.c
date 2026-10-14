/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002929b4 sqlite3_wal_checkpoint_v2 */

undefined4
sqlite3_wal_checkpoint_v2
          (int param_1,char *param_2,uint param_3,undefined4 *param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0xffffffff;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0xffffffff;
  }
  if (2 < param_3) {
    return 0x15;
  }
  sqlite3_mutex_enter(*(undefined4 *)(param_1 + 0xc));
  if (param_2 == (char *)0x0) {
    iVar1 = 10;
  }
  else {
    iVar1 = 10;
    if ((*param_2 != '\0') && (iVar1 = FUN_002645c6(param_1,param_2), iVar1 < 0)) {
      FUN_00268578(param_1,1,DAT_00292a40 + 0x292a08,param_2);
      uVar2 = 1;
      goto LAB_00292a2a;
    }
  }
  uVar2 = FUN_00271ef6(param_1,iVar1,param_3,param_4,param_5);
  FUN_00268578(param_1,uVar2,0);
LAB_00292a2a:
  uVar2 = FUN_002685e0(param_1,uVar2);
  sqlite3_mutex_leave(*(undefined4 *)(param_1 + 0xc));
  return uVar2;
}


