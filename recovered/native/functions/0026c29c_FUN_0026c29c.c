/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026c29c FUN_0026c29c */

undefined4 FUN_0026c29c(void *param_1)

{
  if (-1 < *(int *)((int)param_1 + 0xc)) {
    FUN_0026c198(param_1,*(int *)((int)param_1 + 0xc),DAT_0026c2c8);
    *(undefined4 *)((int)param_1 + 0xc) = 0xffffffff;
  }
  sqlite3_free(*(undefined4 *)((int)param_1 + 0x1c));
  memset(param_1,0,0x2c);
  return 0;
}


