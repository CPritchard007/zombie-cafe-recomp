/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025bdd4 FUN_0025bdd4 */

undefined4 FUN_0025bdd4(undefined4 *param_1)

{
  undefined4 uVar1;
  
  sqlite3_mutex_enter(*(undefined4 *)*param_1);
  uVar1 = param_1[9];
  sqlite3_mutex_leave(*(undefined4 *)*param_1);
  return uVar1;
}


