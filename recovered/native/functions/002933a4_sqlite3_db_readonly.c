/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002933a4 sqlite3_db_readonly */

uint sqlite3_db_readonly(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00264534();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)*(byte *)(**(int **)(iVar1 + 4) + 0xd);
  }
  return uVar2;
}


