/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026b2ec sqlite3_vtab_config */

undefined8 sqlite3_vtab_config(int param_1,int param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  sqlite3_mutex_enter(*(undefined4 *)(param_1 + 0xc));
  uVar2 = DAT_0026b348;
  if ((param_2 == 1) && (uVar2 = DAT_0026b344, *(int **)(param_1 + 0x134) != (int *)0x0)) {
    iVar1 = 0;
    *(undefined1 *)(**(int **)(param_1 + 0x134) + 0x10) = param_3;
  }
  else {
    iVar1 = FUN_0026adf0(uVar2);
    if (iVar1 != 0) {
      FUN_00268578(param_1,iVar1,0);
    }
  }
  sqlite3_mutex_leave(*(undefined4 *)(param_1 + 0xc));
  return CONCAT44(param_1,iVar1);
}


