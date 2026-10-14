/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026fc08 sqlite3_value_bytes16 */

int sqlite3_value_bytes16(int param_1)

{
  int iVar1;
  
  if ((((int)((uint)*(ushort *)(param_1 + 0x1c) << 0x1b) < 0) ||
      (iVar1 = FUN_0026c760(param_1,3 - (uint)(*(char *)(DAT_0026fc38 + 0x26fc52) != '\0')),
      iVar1 != 0)) &&
     (iVar1 = *(int *)(param_1 + 0x18), (int)((uint)*(ushort *)(param_1 + 0x1c) << 0x11) < 0)) {
    iVar1 = iVar1 + *(int *)(param_1 + 0x10);
  }
  return iVar1;
}


