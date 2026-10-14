/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025c372 sqlite3_sql */

uint sqlite3_sql(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1;
  if ((param_1 != 0) && (uVar1 = (uint)*(byte *)(param_1 + 0x65), uVar1 != 0)) {
    uVar1 = *(uint *)(param_1 + 0xa0);
  }
  return uVar1;
}


