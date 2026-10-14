/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ecb90 FUN_002ecb90 */

uint FUN_002ecb90(uint *param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  
  pcVar1 = DAT_002ecbc4;
  do {
    uVar3 = *param_1;
    iVar2 = (*pcVar1)(uVar3,param_2 | uVar3,param_1);
  } while (iVar2 != 0);
  return uVar3;
}


