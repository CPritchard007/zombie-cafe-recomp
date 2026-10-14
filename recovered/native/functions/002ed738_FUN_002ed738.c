/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ed738 FUN_002ed738 */

int FUN_002ed738(int *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = DAT_002ed778;
  do {
    iVar3 = *param_1;
    if (param_2 != iVar3) {
      return iVar3;
    }
    iVar2 = (*pcVar1)(param_2,param_3,param_1);
  } while (iVar2 != 0);
  return iVar3;
}


