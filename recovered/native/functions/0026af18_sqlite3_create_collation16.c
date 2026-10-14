/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026af18 sqlite3_create_collation16 */

undefined4
sqlite3_create_collation16
          (int param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  sqlite3_mutex_enter(*(undefined4 *)(param_1 + 0xc));
  iVar1 = FUN_00265d50(param_1,param_2,0xffffffff,
                       3 - (uint)(*(char *)(DAT_0026af84 + 0x26af74) != '\0'));
  iVar2 = iVar1;
  if (iVar1 != 0) {
    iVar2 = FUN_0026ae10(param_1,iVar1,param_3,param_4,param_5,0);
    FUN_0025fbda(param_1,iVar1);
  }
  uVar3 = FUN_002685e0(param_1,iVar2);
  sqlite3_mutex_leave(*(undefined4 *)(param_1 + 0xc));
  return uVar3;
}


