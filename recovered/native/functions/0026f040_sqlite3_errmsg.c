/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026f040 sqlite3_errmsg */

int sqlite3_errmsg(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 7;
  if (param_1 == 0) {
LAB_0026f05a:
    iVar2 = FUN_0026311c(uVar1);
    return iVar2;
  }
  iVar2 = FUN_0026bcbc(param_1);
  if (iVar2 == 0) {
    uVar1 = FUN_0026adf0(DAT_0026f094);
    goto LAB_0026f05a;
  }
  sqlite3_mutex_enter(*(undefined4 *)(param_1 + 0xc));
  uVar1 = 7;
  if (*(char *)(param_1 + 0x36) == '\0') {
    iVar2 = sqlite3_value_text(*(undefined4 *)(param_1 + 0xd0));
    if (iVar2 != 0) goto LAB_0026f08a;
    uVar1 = *(undefined4 *)(param_1 + 0x2c);
  }
  iVar2 = FUN_0026311c(uVar1);
LAB_0026f08a:
  sqlite3_mutex_leave(*(undefined4 *)(param_1 + 0xc));
  return iVar2;
}


