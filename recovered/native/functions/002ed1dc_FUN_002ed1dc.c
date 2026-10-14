/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ed1dc FUN_002ed1dc */

uint FUN_002ed1dc(uint *param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  pcVar1 = DAT_002ed210;
  do {
    uVar3 = param_2 ^ *param_1;
    iVar2 = (*pcVar1)(*param_1,uVar3,param_1);
  } while (iVar2 != 0);
  return uVar3;
}


