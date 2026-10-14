/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025c656 sqlite3_data_count */

uint sqlite3_data_count(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1;
  if ((param_1 != 0) && (uVar1 = *(uint *)(param_1 + 0x14), uVar1 != 0)) {
    uVar1 = (uint)*(ushort *)(param_1 + 0x2c);
  }
  return uVar1;
}


