/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026c6da sqlite3_snprintf */

void sqlite3_snprintf(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  sqlite3_vsnprintf(param_1,param_2,param_3,&uStack_4,param_1,&uStack_4,param_3);
  return;
}


