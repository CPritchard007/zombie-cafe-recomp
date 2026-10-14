/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002786c2 FUN_002786c2 */

int FUN_002786c2(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_002627dc();
  iVar2 = FUN_00277a30(param_1,param_2,iVar1);
  if (iVar2 == iVar1) {
    *param_3 = iVar2;
  }
  else {
    FUN_002627fe(param_1,iVar1);
    *param_3 = 0;
  }
  return iVar2;
}


