/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00263aa4 sqlite3_clear_bindings */

undefined4 sqlite3_clear_bindings(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(*param_1 + 0xc);
  sqlite3_mutex_enter(uVar2);
  for (iVar1 = 0; iVar1 < (short)param_1[0x13]; iVar1 = iVar1 + 1) {
    FUN_00263730(param_1[0x11] + iVar1 * 0x28);
    *(undefined2 *)(param_1[0x11] + iVar1 * 0x28 + 0x1c) = 1;
  }
  if ((*(char *)((int)param_1 + 0x65) != '\0') && (param_1[0x2d] != 0)) {
    *(undefined1 *)((int)param_1 + 0x5f) = 1;
  }
  sqlite3_mutex_leave(uVar2);
  return 0;
}


