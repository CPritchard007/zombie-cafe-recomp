/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00268700 sqlite3_column_value */

int sqlite3_column_value(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00268688();
  if ((int)((uint)*(ushort *)(iVar1 + 0x1c) << 0x14) < 0) {
    *(ushort *)(iVar1 + 0x1c) = *(ushort *)(iVar1 + 0x1c) & (ushort)DAT_00268728 | 0x1000;
  }
  FUN_00268620(param_1);
  return iVar1;
}


