/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026c154 FUN_0026c154 */

undefined4 FUN_0026c154(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__errno();
  if (param_3 == 0) {
    param_3 = DAT_0026c18c + 0x26c170;
  }
  sqlite3_log(param_1,DAT_0026c194 + 0x26c17c,param_4,*puVar1,param_2,param_3,
              DAT_0026c190 + 0x26c178);
  return param_1;
}


