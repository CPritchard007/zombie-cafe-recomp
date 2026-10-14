/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ed134 FUN_002ed134 */

int FUN_002ed134(int *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = DAT_002ed168;
  do {
    iVar3 = *param_1 - param_2;
    iVar2 = (*pcVar1)(*param_1,iVar3,param_1);
  } while (iVar2 != 0);
  return iVar3;
}


