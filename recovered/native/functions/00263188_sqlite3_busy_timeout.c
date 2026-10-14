/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00263188 sqlite3_busy_timeout */

undefined4 sqlite3_busy_timeout(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 < 1) {
    iVar1 = 0;
    iVar2 = 0;
    uVar3 = param_4;
  }
  else {
    *(int *)(param_1 + 0x1dc) = param_2;
    iVar1 = DAT_002631a8 + 0x26319c;
    iVar2 = param_1;
    uVar3 = 0x1dc;
  }
  sqlite3_busy_handler(param_1,iVar1,iVar2,uVar3,param_4);
  return 0;
}


