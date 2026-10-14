/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ecc00 FUN_002ecc00 */

uint FUN_002ecc00(uint *param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  pcVar1 = DAT_002ecc34;
  do {
    uVar3 = *param_1;
    iVar2 = (*pcVar1)(uVar3,param_2 ^ uVar3,param_1);
  } while (iVar2 != 0);
  return uVar3;
}


