/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00281214 sqlite3_blob_close */

int sqlite3_blob_close(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x18);
    sqlite3_mutex_enter(*(undefined4 *)(iVar2 + 0xc));
    iVar1 = sqlite3_finalize(*(undefined4 *)(param_1 + 0x14));
    FUN_0025fbda(iVar2,param_1);
    sqlite3_mutex_leave(*(undefined4 *)(iVar2 + 0xc));
  }
  return iVar1;
}


