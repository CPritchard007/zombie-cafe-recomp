/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025c600 sqlite3_expired */

bool sqlite3_expired(int param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (param_1 != 0) {
    bVar1 = *(char *)(param_1 + 0x5f) != '\0';
  }
  return bVar1;
}


