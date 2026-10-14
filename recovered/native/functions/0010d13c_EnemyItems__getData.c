/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010d13c EnemyItems::getData */

/* EnemyItems::getData(int) */

int EnemyItems::getData(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((-1 < param_1) && (param_1 < **(short **)(DAT_0010d164 + 0x10d14a))) {
    iVar1 = **(int **)(DAT_0010d168 + 0x10d15c) + param_1 * 0x88;
  }
  return iVar1;
}


