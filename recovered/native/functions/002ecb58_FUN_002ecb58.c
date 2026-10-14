/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ecb58 FUN_002ecb58 */

int FUN_002ecb58(int *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = DAT_002ecb8c;
  do {
    iVar3 = *param_1;
    iVar2 = (*pcVar1)(iVar3,iVar3 - param_2,param_1);
  } while (iVar2 != 0);
  return iVar3;
}


