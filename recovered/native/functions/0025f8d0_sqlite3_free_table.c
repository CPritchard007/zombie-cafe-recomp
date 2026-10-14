/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025f8d0 sqlite3_free_table */

void sqlite3_free_table(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (param_1 != (int *)0x0) {
    piVar3 = param_1 + -1;
    iVar4 = *piVar3;
    for (iVar2 = 1; iVar2 < iVar4; iVar2 = iVar2 + 1) {
      iVar1 = *param_1;
      param_1 = param_1 + 1;
      if (iVar1 != 0) {
        sqlite3_free();
      }
    }
    sqlite3_free(piVar3);
  }
  return;
}


