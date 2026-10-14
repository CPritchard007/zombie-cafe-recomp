/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ed16c FUN_002ed16c */

uint FUN_002ed16c(uint *param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  pcVar1 = DAT_002ed1a0;
  do {
    uVar3 = param_2 | *param_1;
    iVar2 = (*pcVar1)(*param_1,uVar3,param_1);
  } while (iVar2 != 0);
  return uVar3;
}


