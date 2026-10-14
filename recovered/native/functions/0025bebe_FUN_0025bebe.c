/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025bebe FUN_0025bebe */

int FUN_0025bebe(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  if (iVar2 != 0) {
    if (param_2 == 1) {
      *param_1 = *(int *)(iVar2 + 8);
      *(undefined4 *)(iVar2 + 8) = 0;
      *(undefined4 *)(iVar2 + 0xc) = 0;
    }
    else {
      iVar2 = FUN_0025bebe(param_1,param_2 + -1);
      iVar3 = *param_1;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 0xc) = iVar2;
        *param_1 = *(int *)(iVar3 + 8);
        uVar1 = FUN_0025bebe(param_1,param_2 + -1);
        *(undefined4 *)(iVar3 + 8) = uVar1;
        iVar2 = iVar3;
      }
    }
  }
  return iVar2;
}


