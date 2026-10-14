/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027278c sqlite3_mutex_alloc */

void sqlite3_mutex_alloc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = sqlite3_initialize();
  if (iVar1 == 0) {
    (**(code **)((int)&DAT_002727e8 + DAT_002727a8))(param_1);
  }
  return;
}


