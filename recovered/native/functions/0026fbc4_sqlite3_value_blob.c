/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026fbc4 sqlite3_value_blob */

int sqlite3_value_blob(int param_1)

{
  int iVar1;
  
  if ((*(ushort *)(param_1 + 0x1c) & 0x12) == 0) {
    iVar1 = sqlite3_value_text();
  }
  else {
    FUN_00265304();
    iVar1 = *(int *)(param_1 + 0x18);
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xfffd | 0x10;
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 4);
    }
  }
  return iVar1;
}


