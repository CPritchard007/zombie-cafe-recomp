/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002631ac sqlite3_wal_autocheckpoint */

undefined4
sqlite3_wal_autocheckpoint(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  if (param_2 < 1) {
    iVar1 = 0;
    param_2 = 0;
  }
  else {
    iVar1 = DAT_002631c4 + 0x2631b8;
  }
  sqlite3_wal_hook(param_1,iVar1,param_2,param_4,param_4);
  return 0;
}


