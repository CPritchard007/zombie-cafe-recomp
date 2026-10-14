/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026b448 sqlite3_memory_highwater */

void sqlite3_memory_highwater(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
  uStack_10 = param_1;
  local_c = param_2;
  uStack_8 = param_3;
  sqlite3_status(0,&uStack_10,&local_c,param_1);
  return;
}


