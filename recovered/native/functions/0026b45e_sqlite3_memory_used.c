/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026b45e sqlite3_memory_used */

void sqlite3_memory_used(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  local_10 = param_1;
  uStack_c = param_2;
  uStack_8 = param_3;
  sqlite3_status(0,&local_10,&uStack_c,0);
  return;
}


