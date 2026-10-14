/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00260426 FUN_00260426 */

void FUN_00260426(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  FUN_0025fbda(uVar1,param_1[0xd]);
  uVar1 = FUN_0025f25a(uVar1,*(undefined4 *)(param_2 + 8));
  param_1[0xd] = uVar1;
  sqlite3_free(*(undefined4 *)(param_2 + 8));
  *(undefined4 *)(param_2 + 8) = 0;
  return;
}


