/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025bb3c FUN_0025bb3c */

int FUN_0025bb3c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int extraout_r1;
  int iVar2;
  
  iVar2 = param_1[3];
  if (iVar2 != 0) {
    uVar1 = FUN_0025bad0(param_2,param_3);
    __aeabi_uidivmod(uVar1,*param_1);
    iVar2 = extraout_r1;
  }
  iVar2 = FUN_0025baf8(param_1,param_2,param_3,iVar2);
  if (iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 8);
  }
  return iVar2;
}


