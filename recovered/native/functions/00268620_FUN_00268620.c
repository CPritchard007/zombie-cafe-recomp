/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00268620 FUN_00268620 */

void FUN_00268620(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = FUN_002685e0(*param_1,param_1[0x16]);
    param_1[0x16] = iVar1;
    sqlite3_mutex_leave(*(undefined4 *)(*param_1 + 0xc));
  }
  return;
}


