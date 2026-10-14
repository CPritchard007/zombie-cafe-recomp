/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025c75e sqlite3_stmt_status */

undefined4 sqlite3_stmt_status(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (param_2 + 0x1d) * 4;
  uVar1 = *(undefined4 *)(iVar2 + param_1);
  if (param_3 != 0) {
    *(undefined4 *)(iVar2 + param_1) = 0;
  }
  return uVar1;
}


