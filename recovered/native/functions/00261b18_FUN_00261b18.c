/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00261b18 FUN_00261b18 */

void FUN_00261b18(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1[3] != 0) {
    puVar3 = (undefined4 *)*param_1;
    sqlite3_mutex_enter(*puVar3);
    iVar2 = (puVar3[1] - param_1[5]) + param_2;
    puVar3[1] = iVar2;
    puVar3[3] = (10 - puVar3[2]) + iVar2;
    param_1[5] = param_2;
    uVar1 = __udivsi3(param_2 * 9);
    param_1[6] = uVar1;
    FUN_0025f75a(puVar3);
    sqlite3_mutex_leave(*puVar3);
  }
  return;
}


