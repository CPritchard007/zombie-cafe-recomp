/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00286a40 FUN_00286a40 */

int FUN_00286a40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 *param_6,undefined4 param_7)

{
  int iVar1;
  
  *param_6 = 0;
  iVar1 = FUN_0026bd6c();
  if (iVar1 == 0) {
    iVar1 = FUN_0026adf0(DAT_00286abc);
  }
  else {
    sqlite3_mutex_enter(*(undefined4 *)(param_1 + 0xc));
    FUN_00261fe0(param_1);
    iVar1 = FUN_00286740(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    if (iVar1 == 0x11) {
      sqlite3_finalize(*param_6);
      iVar1 = FUN_00286740(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
    FUN_00262022(param_1);
    sqlite3_mutex_leave(*(undefined4 *)(param_1 + 0xc));
  }
  return iVar1;
}


