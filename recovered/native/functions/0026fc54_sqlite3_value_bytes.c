/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026fc54 sqlite3_value_bytes */

int sqlite3_value_bytes(int param_1)

{
  int iVar1;
  
  if ((((int)((uint)*(ushort *)(param_1 + 0x1c) << 0x1b) < 0) ||
      (iVar1 = FUN_0026c760(param_1,1), iVar1 != 0)) &&
     (iVar1 = *(int *)(param_1 + 0x18), (int)((uint)*(ushort *)(param_1 + 0x1c) << 0x11) < 0)) {
    iVar1 = iVar1 + *(int *)(param_1 + 0x10);
  }
  return iVar1;
}


