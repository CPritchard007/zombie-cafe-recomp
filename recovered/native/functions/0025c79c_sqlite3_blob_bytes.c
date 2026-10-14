/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025c79c sqlite3_blob_bytes */

int sqlite3_blob_bytes(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x14), iVar1 != 0)) {
    iVar1 = *(int *)(param_1 + 4);
  }
  return iVar1;
}


