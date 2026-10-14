/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025f68e FUN_0025f68e */

void FUN_0025f68e(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      iVar2 = 0;
      do {
        iVar1 = param_1 + iVar2;
        iVar2 = iVar2 + 4;
        FUN_0025f68e(*(undefined4 *)(iVar1 + 0xc));
      } while (iVar2 != 500);
    }
    sqlite3_free(param_1);
  }
  return;
}


