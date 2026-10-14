/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026f0b4 FUN_0026f0b4 */

void FUN_0026f0b4(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = sqlite3_value_int(*param_3);
  uVar2 = sqlite3_value_text(param_3[1]);
  sqlite3_log(uVar1,DAT_0026f0d4 + 0x26f0d0,uVar2);
  return;
}


