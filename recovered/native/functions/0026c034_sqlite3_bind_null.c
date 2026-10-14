/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026c034 sqlite3_bind_null */

int sqlite3_bind_null(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0026be30();
  if (iVar1 == 0) {
    sqlite3_mutex_leave(*(undefined4 *)(*param_1 + 0xc));
  }
  return iVar1;
}


