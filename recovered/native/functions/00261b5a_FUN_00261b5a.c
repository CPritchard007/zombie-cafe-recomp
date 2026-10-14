/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00261b5a FUN_00261b5a */

void FUN_00261b5a(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1[3] != 0) {
    param_1 = (undefined4 *)*param_1;
    sqlite3_mutex_enter(*param_1);
    uVar1 = param_1[1];
    param_1[1] = 0;
    FUN_0025f75a(param_1);
    param_1[1] = uVar1;
    sqlite3_mutex_leave(*param_1);
  }
  return;
}


