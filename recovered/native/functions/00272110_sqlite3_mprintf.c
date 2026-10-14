/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00272110 sqlite3_mprintf */

void sqlite3_mprintf(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = sqlite3_initialize();
  if (iVar1 == 0) {
    sqlite3_vmprintf(param_1);
  }
  return;
}


