/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027277c sqlite3_soft_heap_limit */

void sqlite3_soft_heap_limit(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = param_1 & (int)~param_1 >> 0x1f;
  sqlite3_soft_heap_limit64(uVar1,(int)uVar1 >> 0x1f,param_3,(int)~param_1 >> 0x1f,param_4);
  return;
}


