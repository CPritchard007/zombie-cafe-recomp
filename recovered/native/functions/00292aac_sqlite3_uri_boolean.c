/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00292aac sqlite3_uri_boolean */

uint sqlite3_uri_boolean(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = sqlite3_uri_parameter();
  uVar2 = (uint)(param_3 != 0);
  if (iVar1 != 0) {
    uVar2 = FUN_00262a1c();
  }
  return uVar2;
}


