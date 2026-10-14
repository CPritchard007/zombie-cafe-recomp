/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025d7bc FUN_0025d7bc */

int FUN_0025d7bc(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  
  iVar1 = param_4;
  if (param_2 < param_4) {
    iVar1 = param_2;
  }
  iVar1 = sqlite3_strnicmp(param_3,param_5,iVar1,iVar1,param_4);
  if (iVar1 == 0) {
    iVar1 = param_2 - param_4;
  }
  return iVar1;
}


