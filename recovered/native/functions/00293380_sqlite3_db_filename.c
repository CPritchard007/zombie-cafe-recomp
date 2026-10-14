/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00293380 sqlite3_db_filename */

int sqlite3_db_filename(void)

{
  int iVar1;
  
  iVar1 = FUN_00264534();
  if (iVar1 != 0) {
    if (*(char *)(**(int **)(iVar1 + 4) + 0xe) == '\0') {
      iVar1 = *(int *)(**(int **)(iVar1 + 4) + 0x90);
    }
    else {
      iVar1 = (int)&DAT_002933a0 + DAT_002933a0;
    }
  }
  return iVar1;
}


