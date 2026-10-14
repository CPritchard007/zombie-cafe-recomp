/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025f884 FUN_0025f884 */

void FUN_0025f884(int param_1)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x60); iVar1 = iVar1 + 1) {
    FUN_0025f68e(*(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar1 * 0x30 + 0x10));
  }
  if ((*(char *)(param_1 + 4) == '\0') || (**(int **)(param_1 + 0x44) == DAT_0025f8cc + 0x25f90c)) {
    FUN_0025acd0();
  }
  sqlite3_free(*(undefined4 *)(param_1 + 0x5c));
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}


